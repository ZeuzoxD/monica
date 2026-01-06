// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_ATTR_COLD void VmkTb_COP___024root___stl_sequent__TOP__95(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___stl_sequent__TOP__95\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_mant___05Fh19121 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_9)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___theResult___05F_snd___05Fh19269)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_mant___05Fh26804 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_11)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___theResult___05F_snd___05Fh26952)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285) 
                                                   >> 7U)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) {
        if ((0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index__024D_IN = 0U;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state__024D_IN = 2U;
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index__024D_IN 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state__024D_IN = 1U;
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__MUX_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state)) 
               | (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state__024D_IN 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__MUX_layer_state__024write_1___05FSEL_2)
                ? 3U : 2U);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__MUX_state__024write_1___05FSEL_2 = 0U;
    }
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x177U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x177U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x177U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27829[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27829[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27829[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27829[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27829[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27829[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27829[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27829[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x177U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x177U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x177U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29835[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29835[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29835[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29835[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29835[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29835[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29835[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29835[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x177U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x177U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x177U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36755[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36755[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36755[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36755[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36755[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36755[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36755[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36755[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x177U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x177U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x177U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38752[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38752[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38752[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38752[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38752[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38752[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38752[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38752[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15128[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15128[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15128[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15128[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15128[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17050[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17050[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17050[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17050[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17050[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12448[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12448[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12448[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12448[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12448[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[4U];
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x4dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2422)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x4bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2422)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x47U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2422)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x45U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2422)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x41U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2422)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2422)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_stop_compute 
        = ((0x8000001fU <= (0x80000000U ^ vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) 
           & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024EN_start)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_sa2_input_chunk_idx__024write_1___05FSEL_1)
            ? (0xfU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx)))
            : 0U);
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_354 
        = (1U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output__024EN)) 
                 & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_sa2_input_chunk_idx__024write_1___05FSEL_1))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_352 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_sa2_input_chunk_idx__024write_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output__024EN));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
           & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_processing_complete__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_processing_complete__024D_IN) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_348) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete) 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_load_activations))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_current_sa_operation__024write_1___05FSEL_1 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_67) 
               | (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k__024EN 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_state__024write_1___05FSEL_2 
            = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)) 
               | ((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)) 
                  | (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_sa1_accumulator__024write_1___05FSEL_2 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_67;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_r_ready__024EN 
            = (2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state__024D_IN 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete)
                ? 1U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output__024EN)
                         ? ((0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                             ? 5U : 1U) : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_collect_result)
                                            ? ((0xbU 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                ? 4U
                                                : 1U)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_load_activations)
                                                ? 3U
                                                : 2U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_current_sa_operation__024write_1___05FSEL_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_state__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_sa1_accumulator__024write_1___05FSEL_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_r_ready__024EN = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6171c202_0_4 = (1U 
                                                & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024EN_get_e1)) 
                                                   & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__outputs_collected__024EN))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_127_6_EQ_INV_compute_p_8_BIT_127___05F_d17)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_126_TO_119_ULT_compute_p___05FETC___05F_d20)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh2454))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_126_TO_119_ULT_ETC___05F_d29)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh2454) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_126_TO_119_ULT_compute_p___05FETC___05F_d20)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_126_TO_119_ULT_compute_p___05FETC___05F_d20)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh2454)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_127_026_EQ_INV_compute_p_8_BI_ETC___05F_d1027)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_126_TO_119_020_ULT_comput_ETC___05F_d1030)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh10303))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_126_TO_119_020_ETC___05F_d1038)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh10303) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_126_TO_119_020_ULT_comput_ETC___05F_d1030)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_126_TO_119_020_ULT_comput_ETC___05F_d1030)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh10303)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_111_43_EQ_INV_compute_p_8_BIT_ETC___05F_d144)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_110_TO_103_28_ULT_compute_ETC___05F_d147)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh3359))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_110_TO_103_28___05FETC___05F_d156)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh3359) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_110_TO_103_28_ULT_compute_ETC___05F_d147)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_110_TO_103_28_ULT_compute_ETC___05F_d147)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh3359)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_111_143_EQ_INV_compute_p_8_BI_ETC___05F_d1144)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_110_TO_103_137_ULT_comput_ETC___05F_d1147)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh11178))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_110_TO_103_137_ETC___05F_d1155)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh11178) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_110_TO_103_137_ULT_comput_ETC___05F_d1147)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_110_TO_103_137_ULT_comput_ETC___05F_d1147)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh11178)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_95_70_EQ_INV_compute_p_8_BIT___05FETC___05F_d271)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_94_TO_87_55_ULT_compute_p_ETC___05F_d274)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh4264))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_94_TO_87_55_UL_ETC___05F_d283)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh4264) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_94_TO_87_55_ULT_compute_p_ETC___05F_d274)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_94_TO_87_55_ULT_compute_p_ETC___05F_d274)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh4264)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_95_260_EQ_INV_compute_p_8_BIT_ETC___05F_d1261)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_94_TO_87_254_ULT_compute___05FETC___05F_d1264)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh12053))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_94_TO_87_254_U_ETC___05F_d1272)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh12053) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_94_TO_87_254_ULT_compute___05FETC___05F_d1264)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_94_TO_87_254_ULT_compute___05FETC___05F_d1264)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh12053)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_79_98_EQ_INV_compute_p_8_BIT___05FETC___05F_d399)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_78_TO_71_83_ULT_compute_p_ETC___05F_d402)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh5169))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_78_TO_71_83_UL_ETC___05F_d411)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh5169) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_78_TO_71_83_ULT_compute_p_ETC___05F_d402)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_78_TO_71_83_ULT_compute_p_ETC___05F_d402)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh5169)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_79_378_EQ_INV_compute_p_8_BIT_ETC___05F_d1379)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_78_TO_71_372_ULT_compute___05FETC___05F_d1382)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh12928))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_78_TO_71_372_U_ETC___05F_d1390)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh12928) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_78_TO_71_372_ULT_compute___05FETC___05F_d1382)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_78_TO_71_372_ULT_compute___05FETC___05F_d1382)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh12928)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_63_25_EQ_INV_compute_p_8_BIT___05FETC___05F_d526)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_62_TO_55_10_ULT_compute_p_ETC___05F_d529)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh6074))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_62_TO_55_10_UL_ETC___05F_d538)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh6074) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_62_TO_55_10_ULT_compute_p_ETC___05F_d529)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_62_TO_55_10_ULT_compute_p_ETC___05F_d529)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh6074)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_63_495_EQ_INV_compute_p_8_BIT_ETC___05F_d1496)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_62_TO_55_489_ULT_compute___05FETC___05F_d1499)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh13803))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_62_TO_55_489_U_ETC___05F_d1507)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh13803) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_62_TO_55_489_ULT_compute___05FETC___05F_d1499)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_62_TO_55_489_ULT_compute___05FETC___05F_d1499)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh13803)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_47_53_EQ_INV_compute_p_8_BIT___05FETC___05F_d654)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_46_TO_39_38_ULT_compute_p_ETC___05F_d657)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh6979))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_46_TO_39_38_UL_ETC___05F_d666)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh6979) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_46_TO_39_38_ULT_compute_p_ETC___05F_d657)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_46_TO_39_38_ULT_compute_p_ETC___05F_d657)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh6979)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_47_613_EQ_INV_compute_p_8_BIT_ETC___05F_d1614)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_46_TO_39_607_ULT_compute___05FETC___05F_d1617)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh14678))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_46_TO_39_607_U_ETC___05F_d1625)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh14678) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_46_TO_39_607_ULT_compute___05FETC___05F_d1617)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_46_TO_39_607_ULT_compute___05FETC___05F_d1617)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh14678)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_31_80_EQ_INV_compute_p_8_BIT___05FETC___05F_d781)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_30_TO_23_65_ULT_compute_p_ETC___05F_d784)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh7884))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_30_TO_23_65_UL_ETC___05F_d793)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh7884) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_30_TO_23_65_ULT_compute_p_ETC___05F_d784)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_30_TO_23_65_ULT_compute_p_ETC___05F_d784)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh7884)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_31_730_EQ_INV_compute_p_8_BIT_ETC___05F_d1731)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_30_TO_23_724_ULT_compute___05FETC___05F_d1734)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh15553))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_30_TO_23_724_U_ETC___05F_d1742)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh15553) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_30_TO_23_724_ULT_compute___05FETC___05F_d1734)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_30_TO_23_724_ULT_compute___05FETC___05F_d1734)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh15553)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_15_08_EQ_INV_compute_p_8_BIT___05FETC___05F_d909)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_14_TO_7_93_ULT_compute_p___05FETC___05F_d912)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh8789))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_14_TO_7_93_ULT_ETC___05F_d921)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh8789) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_14_TO_7_93_ULT_compute_p___05FETC___05F_d912)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_pp_8_BITS_14_TO_7_93_ULT_compute_p___05FETC___05F_d912)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh8789)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_15_848_EQ_INV_compute_p_8_BIT_ETC___05F_d1849)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_14_TO_7_842_ULT_compute_p_ETC___05F_d1852)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh16428))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_14_TO_7_842_UL_ETC___05F_d1860)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh16428) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_14_TO_7_842_ULT_compute_p_ETC___05F_d1852)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__IF_compute_ww_8_BITS_14_TO_7_842_ULT_compute_p_ETC___05F_d1852)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__smaller_m___05Fh16428)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       ? ((IData)(0x10U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256))
                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d256)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_a_255__024write_1___05FPSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr__024D_IN 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_0__024EN 
            = (0U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_1__024EN 
            = (1U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_10__024EN 
            = (0xaU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                  - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_100__024EN 
            = (0x64U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_101__024EN 
            = (0x65U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_102__024EN 
            = (0x66U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_103__024EN 
            = (0x67U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_104__024EN 
            = (0x68U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_105__024EN 
            = (0x69U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_106__024EN 
            = (0x6aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_107__024EN 
            = (0x6bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_108__024EN 
            = (0x6cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_109__024EN 
            = (0x6dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_11__024EN 
            = (0xbU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                  - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_110__024EN 
            = (0x6eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_111__024EN 
            = (0x6fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_112__024EN 
            = (0x70U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_113__024EN 
            = (0x71U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_114__024EN 
            = (0x72U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_115__024EN 
            = (0x73U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_116__024EN 
            = (0x74U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_117__024EN 
            = (0x75U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_118__024EN 
            = (0x76U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_119__024EN 
            = (0x77U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_12__024EN 
            = (0xcU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                  - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_120__024EN 
            = (0x78U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_121__024EN 
            = (0x79U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_122__024EN 
            = (0x7aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_123__024EN 
            = (0x7bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_124__024EN 
            = (0x7cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_125__024EN 
            = (0x7dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_126__024EN 
            = (0x7eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_127__024EN 
            = (0x7fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_128__024EN 
            = (0x80U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_129__024EN 
            = (0x81U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_13__024EN 
            = (0xdU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                  - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_130__024EN 
            = (0x82U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_131__024EN 
            = (0x83U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_132__024EN 
            = (0x84U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_133__024EN 
            = (0x85U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_134__024EN 
            = (0x86U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_135__024EN 
            = (0x87U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_136__024EN 
            = (0x88U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_137__024EN 
            = (0x89U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_138__024EN 
            = (0x8aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_139__024EN 
            = (0x8bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_14__024EN 
            = (0xeU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                  - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_140__024EN 
            = (0x8cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_141__024EN 
            = (0x8dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_142__024EN 
            = (0x8eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_143__024EN 
            = (0x8fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_144__024EN 
            = (0x90U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_145__024EN 
            = (0x91U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_146__024EN 
            = (0x92U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_147__024EN 
            = (0x93U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_148__024EN 
            = (0x94U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_149__024EN 
            = (0x95U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_15__024EN 
            = (0xfU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                  - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_150__024EN 
            = (0x96U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_151__024EN 
            = (0x97U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_152__024EN 
            = (0x98U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_153__024EN 
            = (0x99U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_154__024EN 
            = (0x9aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_155__024EN 
            = (0x9bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_156__024EN 
            = (0x9cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_157__024EN 
            = (0x9dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_158__024EN 
            = (0x9eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_159__024EN 
            = (0x9fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_16__024EN 
            = (0x10U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_160__024EN 
            = (0xa0U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_161__024EN 
            = (0xa1U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_162__024EN 
            = (0xa2U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_163__024EN 
            = (0xa3U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_164__024EN 
            = (0xa4U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_165__024EN 
            = (0xa5U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_166__024EN 
            = (0xa6U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_167__024EN 
            = (0xa7U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_168__024EN 
            = (0xa8U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_169__024EN 
            = (0xa9U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_17__024EN 
            = (0x11U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_170__024EN 
            = (0xaaU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_171__024EN 
            = (0xabU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_172__024EN 
            = (0xacU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_173__024EN 
            = (0xadU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_174__024EN 
            = (0xaeU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_175__024EN 
            = (0xafU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_176__024EN 
            = (0xb0U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_177__024EN 
            = (0xb1U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_178__024EN 
            = (0xb2U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_179__024EN 
            = (0xb3U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_18__024EN 
            = (0x12U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_180__024EN 
            = (0xb4U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_181__024EN 
            = (0xb5U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_182__024EN 
            = (0xb6U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_183__024EN 
            = (0xb7U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_184__024EN 
            = (0xb8U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_185__024EN 
            = (0xb9U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_186__024EN 
            = (0xbaU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_187__024EN 
            = (0xbbU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_188__024EN 
            = (0xbcU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_189__024EN 
            = (0xbdU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_19__024EN 
            = (0x13U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_190__024EN 
            = (0xbeU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_191__024EN 
            = (0xbfU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_192__024EN 
            = (0xc0U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_193__024EN 
            = (0xc1U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_194__024EN 
            = (0xc2U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_195__024EN 
            = (0xc3U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_196__024EN 
            = (0xc4U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_197__024EN 
            = (0xc5U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_198__024EN 
            = (0xc6U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_199__024EN 
            = (0xc7U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_2__024EN 
            = (2U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_20__024EN 
            = (0x14U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_200__024EN 
            = (0xc8U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_201__024EN 
            = (0xc9U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_202__024EN 
            = (0xcaU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_203__024EN 
            = (0xcbU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_204__024EN 
            = (0xccU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_205__024EN 
            = (0xcdU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_206__024EN 
            = (0xceU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_207__024EN 
            = (0xcfU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_208__024EN 
            = (0xd0U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_209__024EN 
            = (0xd1U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_21__024EN 
            = (0x15U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_210__024EN 
            = (0xd2U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_211__024EN 
            = (0xd3U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_212__024EN 
            = (0xd4U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_213__024EN 
            = (0xd5U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_214__024EN 
            = (0xd6U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_215__024EN 
            = (0xd7U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_216__024EN 
            = (0xd8U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_217__024EN 
            = (0xd9U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_218__024EN 
            = (0xdaU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_219__024EN 
            = (0xdbU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_22__024EN 
            = (0x16U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_220__024EN 
            = (0xdcU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_221__024EN 
            = (0xddU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_222__024EN 
            = (0xdeU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_223__024EN 
            = (0xdfU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_224__024EN 
            = (0xe0U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_225__024EN 
            = (0xe1U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_226__024EN 
            = (0xe2U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_227__024EN 
            = (0xe3U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_228__024EN 
            = (0xe4U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_229__024EN 
            = (0xe5U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_23__024EN 
            = (0x17U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_230__024EN 
            = (0xe6U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_231__024EN 
            = (0xe7U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_232__024EN 
            = (0xe8U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_233__024EN 
            = (0xe9U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_234__024EN 
            = (0xeaU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_235__024EN 
            = (0xebU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_236__024EN 
            = (0xecU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_237__024EN 
            = (0xedU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_238__024EN 
            = (0xeeU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_239__024EN 
            = (0xefU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_24__024EN 
            = (0x18U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_240__024EN 
            = (0xf0U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_241__024EN 
            = (0xf1U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_242__024EN 
            = (0xf2U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_243__024EN 
            = (0xf3U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_244__024EN 
            = (0xf4U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_245__024EN 
            = (0xf5U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_246__024EN 
            = (0xf6U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_247__024EN 
            = (0xf7U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_248__024EN 
            = (0xf8U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_249__024EN 
            = (0xf9U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_25__024EN 
            = (0x19U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_250__024EN 
            = (0xfaU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_251__024EN 
            = (0xfbU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_252__024EN 
            = (0xfcU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_253__024EN 
            = (0xfdU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_254__024EN 
            = (0xfeU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_26__024EN 
            = (0x1aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_27__024EN 
            = (0x1bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_28__024EN 
            = (0x1cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_29__024EN 
            = (0x1dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_3__024EN 
            = (3U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_30__024EN 
            = (0x1eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_31__024EN 
            = (0x1fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_32__024EN 
            = (0x20U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_33__024EN 
            = (0x21U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_34__024EN 
            = (0x22U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_35__024EN 
            = (0x23U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_36__024EN 
            = (0x24U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_37__024EN 
            = (0x25U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_38__024EN 
            = (0x26U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_39__024EN 
            = (0x27U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_4__024EN 
            = (4U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_40__024EN 
            = (0x28U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_41__024EN 
            = (0x29U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_42__024EN 
            = (0x2aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_43__024EN 
            = (0x2bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_44__024EN 
            = (0x2cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_45__024EN 
            = (0x2dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_46__024EN 
            = (0x2eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_47__024EN 
            = (0x2fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_48__024EN 
            = (0x30U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_49__024EN 
            = (0x31U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_5__024EN 
            = (5U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_50__024EN 
            = (0x32U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_51__024EN 
            = (0x33U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_52__024EN 
            = (0x34U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_53__024EN 
            = (0x35U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_54__024EN 
            = (0x36U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_55__024EN 
            = (0x37U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_56__024EN 
            = (0x38U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_57__024EN 
            = (0x39U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_58__024EN 
            = (0x3aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_59__024EN 
            = (0x3bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_6__024EN 
            = (6U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_60__024EN 
            = (0x3cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_61__024EN 
            = (0x3dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_62__024EN 
            = (0x3eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_63__024EN 
            = (0x3fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_64__024EN 
            = (0x40U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_65__024EN 
            = (0x41U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_66__024EN 
            = (0x42U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_67__024EN 
            = (0x43U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_68__024EN 
            = (0x44U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_69__024EN 
            = (0x45U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_7__024EN 
            = (7U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_70__024EN 
            = (0x46U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_71__024EN 
            = (0x47U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_72__024EN 
            = (0x48U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_73__024EN 
            = (0x49U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_74__024EN 
            = (0x4aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_75__024EN 
            = (0x4bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_76__024EN 
            = (0x4cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_77__024EN 
            = (0x4dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_78__024EN 
            = (0x4eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_79__024EN 
            = (0x4fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_8__024EN 
            = (8U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_80__024EN 
            = (0x50U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_81__024EN 
            = (0x51U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_82__024EN 
            = (0x52U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_83__024EN 
            = (0x53U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_84__024EN 
            = (0x54U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_85__024EN 
            = (0x55U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_86__024EN 
            = (0x56U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_87__024EN 
            = (0x57U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_88__024EN 
            = (0x58U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_89__024EN 
            = (0x59U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_9__024EN 
            = (9U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_90__024EN 
            = (0x5aU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_91__024EN 
            = (0x5bU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_92__024EN 
            = (0x5cU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_93__024EN 
            = (0x5dU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_94__024EN 
            = (0x5eU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_95__024EN 
            = (0x5fU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_96__024EN 
            = (0x60U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_97__024EN 
            = (0x61U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_98__024EN 
            = (0x62U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_99__024EN 
            = (0x63U == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr__024D_IN = 1U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_0__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_1__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_10__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_100__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_101__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_102__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_103__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_104__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_105__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_106__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_107__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_108__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_109__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_11__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_110__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_111__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_112__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_113__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_114__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_115__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_116__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_117__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_118__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_119__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_12__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_120__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_121__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_122__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_123__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_124__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_125__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_126__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_127__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_128__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_129__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_13__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_130__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_131__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_132__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_133__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_134__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_135__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_136__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_137__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_138__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_139__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_14__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_140__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_141__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_142__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_143__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_144__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_145__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_146__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_147__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_148__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_149__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_15__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_150__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_151__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_152__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_153__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_154__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_155__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_156__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_157__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_158__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_159__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_16__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_160__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_161__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_162__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_163__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_164__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_165__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_166__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_167__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_168__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_169__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_17__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_170__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_171__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_172__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_173__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_174__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_175__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_176__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_177__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_178__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_179__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_18__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_180__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_181__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_182__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_183__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_184__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_185__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_186__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_187__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_188__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_189__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_19__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_190__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_191__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_192__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_193__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_194__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_195__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_196__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_197__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_198__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_199__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_2__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_20__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_200__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_201__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_202__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_203__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_204__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_205__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_206__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_207__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_208__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_209__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_21__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_210__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_211__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_212__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_213__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_214__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_215__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_216__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_217__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_218__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_219__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_22__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_220__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_221__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_222__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_223__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_224__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_225__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_226__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_227__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_228__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_229__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_23__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_230__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_231__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_232__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_233__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_234__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_235__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_236__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_237__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_238__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_239__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_24__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_240__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_241__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_242__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_243__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_244__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_245__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_246__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_247__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_248__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_249__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_25__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_250__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_251__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_252__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_253__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_254__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_26__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_27__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_28__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_29__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_3__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_30__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_31__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_32__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_33__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_34__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_35__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_36__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_37__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_38__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_39__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_4__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_40__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_41__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_42__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_43__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_44__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_45__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_46__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_47__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_48__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_49__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_5__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_50__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_51__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_52__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_53__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_54__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_55__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_56__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_57__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_58__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_59__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_6__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_60__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_61__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_62__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_63__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_64__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_65__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_66__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_67__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_68__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_69__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_7__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_70__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_71__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_72__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_73__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_74__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_75__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_76__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_77__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_78__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_79__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_8__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_80__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_81__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_82__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_83__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_84__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_85__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_86__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_87__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_88__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_89__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_9__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_90__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_91__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_92__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_93__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_94__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_95__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_96__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_97__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_98__024EN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_99__024EN = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_a_255__024write_1___05FPSEL_1) 
           | ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              | ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_r0) 
                    | ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                       | ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_v0) 
                             | ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                | ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_a_255__024EN 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_a_255__024write_1___05FPSEL_1) 
            & (0xffU == (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr) 
                                   - (IData)(1U))))) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r2_load_done) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2404) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_254) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load_done) 
                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_4))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_d 
        = ((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_state 
        = ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_0__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_0__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_0__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_0__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_0__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_0__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_0__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_0__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_1__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_1__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_1__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_1__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_1__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_1__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_1__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_1__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_10__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_10__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_10__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_10__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_10__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_10__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_10__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_10__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_100__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_100__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_100__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_100__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_100__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_100__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_100__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_100__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_101__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_101__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_101__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_101__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_101__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_101__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_101__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_101__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_102__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_102__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_102__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_102__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_102__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_102__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_102__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_102__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_103__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_103__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_103__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_103__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_103__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_103__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_103__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_103__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_104__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_104__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_104__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_104__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_104__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_104__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_104__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_104__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_105__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_105__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_105__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_105__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_105__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_105__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_105__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_105__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_106__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_106__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_106__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_106__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_106__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_106__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_106__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_106__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_107__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_107__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_107__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_107__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_107__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_107__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_107__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_107__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_108__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_108__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_108__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_108__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_108__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_108__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_108__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_108__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_109__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_109__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_109__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_109__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_109__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_109__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_109__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_109__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_11__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_11__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_11__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_11__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_11__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_11__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_11__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_11__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_110__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_110__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_110__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_110__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_110__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_110__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_110__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_110__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_111__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_111__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_111__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_111__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_111__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_111__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_111__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_111__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_112__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_112__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_112__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_112__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_112__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_112__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_112__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_112__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_113__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_113__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_113__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_113__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_113__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_113__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_113__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_113__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_114__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_114__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_114__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_114__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_114__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_114__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_114__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_114__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_115__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_115__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_115__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_115__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_115__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_115__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_115__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_115__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_116__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_116__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_116__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_116__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_116__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_116__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_116__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_116__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_117__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_117__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_117__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_117__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_117__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_117__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_117__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_117__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_118__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_118__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_118__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_118__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_118__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_118__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_118__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_118__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_119__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_119__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_119__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_119__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_119__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_119__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_119__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_119__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_12__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_12__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_12__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_12__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_12__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_12__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_12__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_12__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_120__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_120__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_120__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_120__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_120__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_120__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_120__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_120__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_121__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_121__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_121__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_121__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_121__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_121__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_121__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_121__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_122__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_122__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_122__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_122__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_122__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_122__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_122__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_122__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_123__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_123__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_123__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_123__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_123__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_123__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_123__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_123__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_124__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_124__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_124__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_124__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_124__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_124__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_124__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_124__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_125__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_125__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_125__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_125__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_125__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_125__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_125__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_125__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_126__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_126__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_126__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_126__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_126__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_126__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_126__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_126__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_127__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_127__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_127__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_127__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_127__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_127__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_127__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_127__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_128__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_128__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_128__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_128__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_128__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_128__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_128__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_128__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_129__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_129__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_129__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_129__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_129__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_129__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_129__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_129__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_13__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_13__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_13__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_13__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_13__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_13__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_13__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_13__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_130__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_130__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_130__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_130__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_130__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_130__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_130__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_130__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_131__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_131__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_131__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_131__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_131__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_131__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_131__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_131__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_132__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_132__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_132__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_132__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_132__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_132__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_132__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_132__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_133__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_133__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_133__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_133__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_133__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_133__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_133__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_133__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_134__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_134__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_134__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_134__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_134__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_134__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_134__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_134__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_135__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_135__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_135__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_135__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_135__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_135__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_135__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_135__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_136__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_136__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_136__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_136__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_136__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_136__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_136__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_136__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_137__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_137__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_137__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_137__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_137__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_137__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_137__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_137__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_138__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_138__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_138__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_138__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_138__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_138__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_138__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_138__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_139__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_139__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_139__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_139__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_139__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_139__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_139__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_139__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_14__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_14__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_14__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_14__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_14__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_14__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_14__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_14__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_140__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_140__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_140__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_140__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_140__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_140__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_140__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_140__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_141__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_141__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_141__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_141__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_141__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_141__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_141__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_141__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_142__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_142__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_142__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_142__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_142__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_142__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_142__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_142__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_143__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_143__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_143__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_143__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_143__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_143__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_143__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_143__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_144__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_144__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_144__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_144__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_144__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_144__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_144__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_144__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_145__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_145__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_145__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_145__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_145__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_145__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_145__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_145__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_146__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_146__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_146__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_146__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_146__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_146__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_146__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_146__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_147__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_147__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_147__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_147__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_147__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_147__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_147__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_147__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_148__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_148__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_148__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_148__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_148__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_148__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_148__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_148__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_149__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_149__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_149__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_149__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_149__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_149__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_149__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_149__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_15__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_15__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_15__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_15__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_15__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_15__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_15__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_15__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_150__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_150__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_150__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_150__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_150__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_150__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_150__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_150__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_151__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_151__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_151__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_151__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_151__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_151__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_151__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_151__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_152__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_152__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_152__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_152__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_152__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_152__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_152__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_152__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_153__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_153__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_153__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_153__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_153__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_153__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_153__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_153__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_154__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_154__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_154__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_154__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_154__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_154__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_154__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_154__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_155__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_155__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_155__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_155__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_155__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_155__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_155__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_155__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_156__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_156__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_156__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_156__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_156__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_156__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_156__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_156__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_157__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_157__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_157__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_157__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_157__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_157__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_157__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_157__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_158__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_158__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_158__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_158__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_158__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_158__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_158__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_158__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_159__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_159__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_159__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_159__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_159__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_159__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_159__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_159__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_16__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_16__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_16__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_16__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_16__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_16__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_16__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_16__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_160__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_160__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_160__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_160__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_160__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_160__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_160__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_160__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_161__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_161__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_161__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_161__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_161__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_161__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_161__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_161__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_162__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_162__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_162__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_162__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_162__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_162__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_162__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_162__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_163__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_163__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_163__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_163__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_163__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_163__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_163__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_163__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_164__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_164__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_164__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_164__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_164__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_164__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_164__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_164__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_165__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_165__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_165__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_165__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_165__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_165__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_165__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_165__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_166__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_166__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_166__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_166__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_166__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_166__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_166__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_166__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_167__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_167__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_167__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_167__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_167__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_167__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_167__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_167__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_168__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_168__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_168__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_168__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_168__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_168__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_168__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_168__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_169__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_169__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_169__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_169__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_169__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_169__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_169__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_169__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_17__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_17__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_17__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_17__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_17__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_17__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_17__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_17__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_170__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_170__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_170__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_170__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_170__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_170__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_170__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_170__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_171__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_171__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_171__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_171__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_171__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_171__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_171__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_171__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_172__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_172__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_172__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_172__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_172__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_172__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_172__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_172__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_173__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_173__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_173__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_173__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_173__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_173__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_173__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_173__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_174__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_174__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_174__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_174__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_174__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_174__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_174__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_174__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_175__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_175__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_175__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_175__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_175__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_175__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_175__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_175__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_176__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_176__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_176__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_176__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_176__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_176__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_176__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_176__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_177__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_177__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_177__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_177__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_177__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_177__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_177__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_177__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_178__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_178__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_178__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_178__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_178__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_178__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_178__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_178__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_179__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_179__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_179__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_179__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_179__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_179__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_179__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_179__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_18__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_18__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_18__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_18__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_18__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_18__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_18__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_18__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_180__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_180__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_180__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_180__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_180__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_180__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_180__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_180__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_181__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_181__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_181__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_181__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_181__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_181__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_181__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_181__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_182__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_182__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_182__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_182__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_182__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_182__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_182__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_182__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_183__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_183__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_183__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_183__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_183__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_183__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_183__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_183__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_184__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_184__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_184__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_184__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_184__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_184__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_184__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_184__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_185__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_185__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_185__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_185__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_185__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_185__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_185__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_185__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_186__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_186__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_186__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_186__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_186__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_186__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_186__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_186__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_187__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_187__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_187__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_187__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_187__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_187__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_187__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_187__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_188__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_188__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_188__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_188__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_188__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_188__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_188__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_188__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_189__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_189__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_189__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_189__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_189__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_189__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_189__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_189__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_19__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_19__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_19__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_19__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_19__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_19__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_19__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_19__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_190__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_190__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_190__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_190__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_190__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_190__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_190__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_190__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_191__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_191__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_191__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_191__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_191__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_191__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_191__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_191__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_192__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_192__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_192__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_192__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_192__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_192__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_192__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_192__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_193__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_193__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_193__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_193__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_193__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_193__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_193__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_193__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_194__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_194__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_194__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_194__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_194__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_194__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_194__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_194__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_195__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_195__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_195__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_195__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_195__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_195__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_195__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_195__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_196__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_196__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_196__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_196__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_196__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_196__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_196__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_196__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_197__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_197__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_197__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_197__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_197__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_197__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_197__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_197__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_198__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_198__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_198__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_198__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_198__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_198__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_198__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_198__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_199__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_199__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_199__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_199__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_199__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_199__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_199__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_199__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_2__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_2__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_2__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_2__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_2__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_2__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_2__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_2__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_20__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_20__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_20__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_20__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_20__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_20__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_20__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_20__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_200__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_200__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_200__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_200__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_200__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_200__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_200__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_200__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_201__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_201__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_201__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_201__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_201__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_201__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_201__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_201__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_202__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_202__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_202__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_202__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_202__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_202__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_202__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_202__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_203__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_203__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_203__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_203__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_203__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_203__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_203__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_203__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_204__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_204__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_204__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_204__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_204__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_204__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_204__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_204__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_205__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_205__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_205__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_205__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_205__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_205__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_205__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_205__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_206__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_206__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_206__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_206__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_206__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_206__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_206__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_206__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_207__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_207__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_207__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_207__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_207__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_207__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_207__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_207__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_208__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_208__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_208__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_208__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_208__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_208__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_208__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_208__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_209__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_209__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_209__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_209__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_209__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_209__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_209__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_209__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_21__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_21__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_21__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_21__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_21__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_21__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_21__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_21__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_210__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_210__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_210__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_210__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_210__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_210__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_210__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_210__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_211__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_211__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_211__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_211__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_211__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_211__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_211__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_211__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_212__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_212__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_212__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_212__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_212__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_212__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_212__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_212__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_213__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_213__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_213__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_213__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_213__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_213__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_213__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_213__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_214__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_214__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_214__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_214__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_214__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_214__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_214__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_214__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_215__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_215__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_215__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_215__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_215__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_215__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_215__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_215__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_216__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_216__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_216__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_216__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_216__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_216__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_216__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_216__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_217__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_217__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_217__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_217__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_217__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_217__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_217__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_217__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_218__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_218__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_218__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_218__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_218__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_218__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_218__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_218__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_219__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_219__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_219__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_219__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_219__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_219__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_219__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_219__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_22__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_22__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_22__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_22__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_22__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_22__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_22__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_22__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_220__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_220__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_220__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_220__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_220__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_220__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_220__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_220__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_221__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_221__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_221__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_221__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_221__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_221__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_221__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_221__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_222__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_222__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_222__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_222__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_222__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_222__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_222__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_222__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_223__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_223__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_223__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_223__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_223__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_223__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_223__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_223__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_224__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_224__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_224__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_224__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_224__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_224__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_224__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_224__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_225__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_225__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_225__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_225__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_225__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_225__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_225__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_225__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_226__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_226__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_226__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_226__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_226__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_226__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_226__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_226__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_227__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_227__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_227__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_227__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_227__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_227__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_227__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_227__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_228__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_228__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_228__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_228__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_228__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_228__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_228__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_228__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_229__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_229__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_229__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_229__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_229__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_229__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_229__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_229__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_23__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_23__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_23__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_23__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_23__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_23__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_23__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_23__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_230__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_230__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_230__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_230__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_230__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_230__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_230__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_230__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_231__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_231__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_231__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_231__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_231__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_231__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_231__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_231__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_232__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_232__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_232__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_232__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_232__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_232__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_232__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_232__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_233__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_233__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_233__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_233__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_233__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_233__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_233__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_233__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_234__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_234__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_234__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_234__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_234__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_234__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_234__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_234__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_235__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_235__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_235__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_235__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_235__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_235__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_235__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_235__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_236__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_236__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_236__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_236__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_236__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_236__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_236__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_236__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_237__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_237__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_237__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_237__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_237__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_237__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_237__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_237__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_238__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_238__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_238__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_238__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_238__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_238__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_238__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_238__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_239__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_239__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_239__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_239__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_239__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_239__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_239__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_239__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_24__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_24__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_24__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_24__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_24__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_24__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_24__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_24__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_240__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_240__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_240__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_240__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_240__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_240__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_240__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_240__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_241__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_241__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_241__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_241__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_241__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_241__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_241__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_241__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_242__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_242__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_242__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_242__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_242__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_242__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_242__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_242__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_243__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_243__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_243__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_243__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_243__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_243__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_243__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_243__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_244__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_244__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_244__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_244__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_244__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_244__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_244__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_244__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_245__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_245__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_245__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_245__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_245__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_245__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_245__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_245__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_246__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_246__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_246__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_246__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_246__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_246__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_246__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_246__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_247__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_247__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_247__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_247__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_247__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_247__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_247__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_247__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_248__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_248__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_248__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_248__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_248__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_248__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_248__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_248__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_249__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_249__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_249__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_249__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_249__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_249__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_249__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_249__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_25__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_25__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_25__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_25__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_25__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_25__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_25__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_25__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_250__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_250__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_250__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_250__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_250__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_250__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_250__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_250__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_251__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_251__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_251__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_251__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_251__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_251__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_251__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_251__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_252__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_252__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_252__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_252__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_252__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_252__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_252__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_252__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_253__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_253__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_253__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_253__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_253__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_253__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_253__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_253__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_254__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_254__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_254__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_254__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_254__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_254__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_254__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_254__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_26__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_26__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_26__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_26__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_26__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_26__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_26__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_26__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_27__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_27__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_27__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_27__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_27__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_27__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_27__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_27__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_28__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_28__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_28__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_28__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_28__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_28__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_28__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_28__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_29__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_29__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_29__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_29__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_29__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_29__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_29__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_29__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_3__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_3__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_3__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_3__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_3__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_3__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_3__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_3__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_30__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_30__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_30__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_30__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_30__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_30__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_30__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_30__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_31__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_31__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_31__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_31__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_31__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_31__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_31__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_31__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_32__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_32__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_32__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_32__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_32__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_32__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_32__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_32__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_33__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_33__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_33__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_33__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_33__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_33__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_33__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_33__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_34__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_34__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_34__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_34__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_34__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_34__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_34__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_34__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_35__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_35__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_35__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_35__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_35__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_35__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_35__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_35__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_36__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_36__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_36__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_36__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_36__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_36__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_36__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_36__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_37__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_37__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_37__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_37__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_37__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_37__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_37__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_37__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_38__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_38__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_38__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_38__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_38__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_38__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_38__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_38__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_39__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_39__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_39__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_39__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_39__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_39__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_39__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_39__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_4__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_4__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_4__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_4__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_4__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_4__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_4__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_4__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_40__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_40__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_40__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_40__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_40__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_40__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_40__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_40__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_41__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_41__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_41__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_41__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_41__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_41__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_41__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_41__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_42__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_42__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_42__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_42__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_42__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_42__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_42__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_42__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_43__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_43__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_43__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_43__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_43__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_43__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_43__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_43__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_44__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_44__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_44__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_44__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_44__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_44__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_44__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_44__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_45__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_45__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_45__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_45__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_45__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_45__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_45__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_45__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_46__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_46__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_46__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_46__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_46__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_46__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_46__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_46__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_47__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_47__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_47__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_47__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_47__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_47__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_47__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_47__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_48__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_48__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_48__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_48__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_48__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_48__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_48__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_48__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_49__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_49__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_49__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_49__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_49__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_49__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_49__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_49__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_5__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_5__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_5__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_5__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_5__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_5__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_5__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_5__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_50__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_50__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_50__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_50__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_50__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_50__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_50__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_50__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_51__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_51__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_51__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_51__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_51__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_51__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_51__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_51__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_52__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_52__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_52__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_52__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_52__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_52__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_52__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_52__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_53__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_53__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_53__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_53__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_53__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_53__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_53__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_53__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_54__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_54__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_54__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_54__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_54__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_54__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_54__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_54__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_55__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_55__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_55__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_55__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_55__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_55__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_55__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_55__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_56__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_56__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_56__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_56__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_56__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_56__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_56__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_56__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_57__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_57__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_57__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_57__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_57__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_57__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_57__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_57__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_58__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_58__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_58__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_58__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_58__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_58__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_58__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_58__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_59__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_59__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_59__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_59__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_59__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_59__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_59__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_59__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_6__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_6__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_6__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_6__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_6__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_6__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_6__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_6__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_60__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_60__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_60__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_60__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_60__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_60__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_60__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_60__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_61__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_61__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_61__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_61__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_61__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_61__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_61__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_61__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_62__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_62__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_62__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_62__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_62__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_62__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_62__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_62__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_63__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_63__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_63__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_63__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_63__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_63__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_63__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_63__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_64__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_64__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_64__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_64__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_64__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_64__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_64__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_64__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_65__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_65__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_65__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_65__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_65__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_65__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_65__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_65__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_66__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_66__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_66__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_66__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_66__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_66__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_66__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_66__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_67__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_67__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_67__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_67__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_67__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_67__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_67__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_67__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_68__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_68__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_68__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_68__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_68__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_68__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_68__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_68__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_69__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_69__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_69__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_69__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_69__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_69__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_69__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_69__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_7__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_7__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_7__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_7__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_7__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_7__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_7__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_7__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_70__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_70__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_70__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_70__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_70__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_70__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_70__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_70__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_71__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_71__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_71__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_71__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_71__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_71__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_71__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_71__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_72__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_72__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_72__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_72__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_72__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_72__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_72__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_72__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_73__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_73__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_73__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_73__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_73__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_73__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_73__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_73__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_74__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_74__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_74__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_74__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_74__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_74__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_74__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_74__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_75__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_75__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_75__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_75__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_75__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_75__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_75__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_75__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_76__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_76__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_76__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_76__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_76__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_76__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_76__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_76__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_77__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_77__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_77__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_77__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_77__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_77__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_77__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_77__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_78__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_78__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_78__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_78__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_78__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_78__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_78__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_78__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_79__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_79__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_79__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_79__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_79__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_79__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_79__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_79__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_8__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_8__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_8__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_8__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_8__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_8__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_8__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_8__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_80__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_80__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_80__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_80__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_80__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_80__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_80__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_80__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_81__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_81__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_81__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_81__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_81__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_81__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_81__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_81__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_82__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_82__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_82__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_82__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_82__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_82__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_82__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_82__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_83__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_83__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_83__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_83__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_83__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_83__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_83__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_83__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_84__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_84__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_84__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_84__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_84__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_84__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_84__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_84__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_85__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_85__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_85__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_85__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_85__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_85__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_85__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_85__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_86__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_86__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_86__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_86__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_86__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_86__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_86__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_86__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_87__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_87__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_87__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_87__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_87__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_87__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_87__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_87__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_88__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_88__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_88__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_88__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_88__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_88__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_88__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_88__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_89__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_89__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_89__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_89__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_89__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_89__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_89__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_89__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_9__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_9__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_9__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_9__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_9__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_9__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_9__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_9__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_90__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_90__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_90__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_90__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_90__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_90__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_90__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_90__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_91__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_91__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_91__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_91__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_91__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_91__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_91__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_91__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_92__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_92__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_92__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_92__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_92__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_92__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_92__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_92__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_93__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_93__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_93__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_93__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_93__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_93__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_93__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_93__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_94__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_94__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_94__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_94__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_94__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_94__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_94__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_94__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_95__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_95__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_95__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_95__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_95__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_95__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_95__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_95__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_96__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_96__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_96__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_96__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_96__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_96__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_96__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_96__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_97__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_97__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_97__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_97__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_97__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_97__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_97__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_97__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_98__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_98__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_98__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_98__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_98__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_98__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_98__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_98__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_99__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_99__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_99__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_99__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_99__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_99__024write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_99__024write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_99__024write_1___05FSEL_3)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_255__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_2) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_3) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k2_load_done) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k1_load_done) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load_done) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_254) 
                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load_done) 
                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_6)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__vec_b_255__024D_IN 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_1) 
            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_4))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__DOT__DO_R)
            : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_2) 
                | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_254) 
                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load_done)))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__DOT__DO_R)
                : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_3) 
                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_vec_b_255__024write_1___05FSEL_6))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__DOT__DO_R)
                    : 0xaaaaU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2408 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_s3__024EN)) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww__024EN)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2407)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_vv 
        = ((0xfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_vv_ready) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2411) 
                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2407))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT___dfoo61714 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_29247)
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOA_R)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_28961)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOB_R)
                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_28674)
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOA_R)
                    : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_28387)
                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOB_R)
                        : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_28098)
                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOA_R)
                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_27812)
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOB_R)
                                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_27523)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOA_R)
                                    : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_27236)
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOB_R)
                                        : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_26948)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOA_R)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_26661)
                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOB_R)
                                                : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_26374)
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_26087)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R)
                                                     : 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_25801)
                                                      ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_25515)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_25231)
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R)
                                                        : 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_24945)
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R)
                                                         : 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_24660)
                                                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R)
                                                          : 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_24374)
                                                           ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R)
                                                           : 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_24088)
                                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R)
                                                            : 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_23803)
                                                             ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R)
                                                             : 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_23515)
                                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R)
                                                              : 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_23231)
                                                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R)
                                                               : 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_22949)
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R)
                                                                : 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_22665)
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R)
                                                                 : 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_22382)
                                                                  ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R)
                                                                  : 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_22100)
                                                                   ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R)
                                                                   : 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_21815)
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R)
                                                                    : 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_21528)
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R)
                                                                     : 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_21243)
                                                                      ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R)
                                                                      : 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_20958)
                                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R)
                                                                       : 
                                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_20673)
                                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOA_R)
                                                                        : 
                                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_20386)
                                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOB_R)
                                                                         : 
                                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_20100)
                                                                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOA_R)
                                                                          : 
                                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_19815)
                                                                           ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOB_R)
                                                                           : 
                                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT____VdfgRegularize_h15687b7c_0_19530)
                                                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOA_R)
                                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT___dfoo43794))))))))))))))))))))))))))))))))))));
}
