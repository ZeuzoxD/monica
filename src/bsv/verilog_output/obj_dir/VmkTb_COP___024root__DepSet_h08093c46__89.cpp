// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__92(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__92\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
        = (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                  ? ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32) 
                                                      >> 0xfU)))))))
                  : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                      ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16) 
                                                    >> 0xfU)))))
                      : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                          ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8) 
                                                    >> 0xfU))))
                          : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                              ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4) 
                                                    >> 0xfU)))
                              : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                  ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3) 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2) 
                                      >> 0xfU)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0) 
                                                    >> 0xfU))))))));
    if ((0x200U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x100U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & 0xaaU);
        } else if ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                            = (0x7fU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                     >> 0x10U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                     >> 0x17U)));
                                    } else {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                            = (0x7fU 
                                               & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU]);
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                     >> 7U)));
                                    }
                                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                               >> 7U)));
                                }
                            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                   >> 7U)));
                            }
                        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                               >> 7U)));
                        }
                    } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                           >> 7U)));
                    }
                } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                           >> 7U)));
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                  >> 7U)));
                }
            } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                           >> 7U)));
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                  >> 7U)));
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                              >> 7U)));
            }
        } else if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                           >> 7U)));
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                  >> 7U)));
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                              >> 7U)));
            }
        } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                              >> 7U)));
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                              >> 7U)));
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                              >> 7U)));
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                              >> 7U)));
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                              >> 7U)));
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                          >> 7U)));
        }
    } else if ((0x100U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                            = (0x7fU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                     >> 0x10U)));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                     >> 0x17U)));
                                    } else {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                            = (0x7fU 
                                               & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU]);
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                            = (0xffU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                     >> 7U)));
                                    }
                                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                               >> 7U)));
                                }
                            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                   >> 7U)));
                            }
                        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                               >> 7U)));
                        }
                    } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                           >> 7U)));
                    }
                } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                           >> 7U)));
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                                  >> 7U)));
                }
            } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                           >> 7U)));
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                                  >> 7U)));
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                              >> 7U)));
            }
        } else if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                           >> 7U)));
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                                  >> 7U)));
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                              >> 7U)));
            }
        } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                              >> 7U)));
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                              >> 7U)));
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                              >> 7U)));
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                              >> 7U)));
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                              >> 7U)));
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                                          >> 7U)));
        }
    } else if ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                               >> 0x10U)));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                               >> 0x17U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU]);
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                        = (0xffU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                               >> 7U)));
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                   >> 7U)));
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                               >> 7U)));
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                           >> 7U)));
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                                  >> 7U)));
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                              >> 7U)));
            }
        } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                              >> 7U)));
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                              >> 7U)));
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                              >> 7U)));
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                              >> 7U)));
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                              >> 7U)));
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                                          >> 7U)));
        }
    } else if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                   >> 0x10U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                   >> 0x17U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU]);
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                   >> 7U)));
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                               >> 7U)));
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                           >> 7U)));
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                                  >> 7U)));
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                              >> 7U)));
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                              >> 7U)));
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                              >> 7U)));
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                              >> 7U)));
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                              >> 7U)));
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                                          >> 7U)));
        }
    } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                               >> 7U)));
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                           >> 7U)));
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                                  >> 7U)));
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                              >> 7U)));
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                              >> 7U)));
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                              >> 7U)));
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                              >> 7U)));
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                                          >> 7U)));
        }
    } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                           >> 7U)));
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                                  >> 7U)));
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                              >> 7U)));
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                              >> 7U)));
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                              >> 7U)));
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                                          >> 7U)));
        }
    } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                                  >> 7U)));
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                              >> 7U)));
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                              >> 7U)));
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                          >> 7U)));
        }
    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                              >> 7U)));
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                                          >> 7U)));
        }
    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                                          >> 7U)));
        }
    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                                   >> 0x17U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq563 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                                      >> 7U)));
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
    vlSelfRef.__VdfgRegularize_h6171c202_0_8 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
            = ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                ? 0xaU : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                           ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_47)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_46))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_45)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_44)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_43)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_42))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_41)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_40))))
                           : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_39)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_38))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_37)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_36)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_35)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_34))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_33)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_32))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32) 
                                                      >> 0xfU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_31;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_31) 
                                     >> 0xfU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_30;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_30) 
                                     >> 0xfU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_29;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_28;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28) 
                                 >> 0xfU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_27;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_26;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_25;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_25) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_24;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_24) 
                             >> 0xfU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_23;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_22;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_21;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_20;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_19;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_19) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_18;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_18) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_17;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_16;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16) 
                         >> 0xfU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_15;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_14;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_13;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_13) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_12;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_12) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_11;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_10;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_9;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_8;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8) 
                         >> 0xfU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_7;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_7) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_6;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_6) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_5;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_4;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4) 
                         >> 0xfU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_3;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_2;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2) 
                         >> 0xfU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_1;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_1) 
                     >> 0xfU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_0;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_0) 
                     >> 0xfU));
    }
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                                      >> 0x1fU))))))));
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                   >> 0x17U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                               >> 0x17U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                               >> 0x17U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                           >> 0x17U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                               >> 0x17U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                           >> 0x17U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                           >> 0x17U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                       >> 0x17U)));
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                      >> 0xfU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                     >> 0xfU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                     >> 0xfU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                 >> 0xfU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                             >> 0xfU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                         >> 0xfU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                         >> 0xfU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                         >> 0xfU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                         >> 0xfU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                     >> 0xfU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq559 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq561 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2170918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq560 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2163511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq532 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                     >> 0xfU));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
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
    vlSelfRef.__VdfgRegularize_h6171c202_0_9 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__024load_and_step_refr 
        = ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
            ? ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                ? 0xaU : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                           ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_47)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_46))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_45)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_44)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_43)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_42))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_41)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_40))))
                           : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_39)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_38))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_37)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_36)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_35)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_34))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_33)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_32))))))
            : ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                ? ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                    ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                        ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                            ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_31)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_30))
                            : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_29)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_28)))
                        : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                            ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_27)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_26))
                            : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_25)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_24))))
                    : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                        ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                            ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_23)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_22))
                            : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_21)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_20)))
                        : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                            ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_19)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_18))
                            : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_17)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_16)))))
                : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                    ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                        ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                            ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_15)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_14))
                            : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_13)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_12)))
                        : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                            ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_11)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_10))
                            : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_9)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_8))))
                    : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                        ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                            ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_7)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_6))
                            : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_5)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_4)))
                        : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                            ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_3)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_2))
                            : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_1)
                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_0)))))));
}
