// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__113(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__113\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_input_z_93_BIT_15_32_EQ_INV_NOT_s2_n_91_EQ___05FETC___05F_d833 
        = ((1U & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__zn_sign___05Fh5558))) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_input_z) 
                     >> 0xfU)));
    if ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_104))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_26 
            = (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_103));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_exp_eff___05Fh6957 = 1U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_exp_eff___05Fh6957 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_104;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954 
        = (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_104)) 
            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_103));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0U] 
        = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7463[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958[0U] 
        = ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x139U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x139U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x13U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x139U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958[1U] 
        = ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x13U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958[2U] 
        = ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x13U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958[3U] 
        = ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x13U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU])));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x42U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958[(__Vilp1 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40938[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5065[0U] 
        = ((((0x287U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x143U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x143U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x286U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x143U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5065[1U] 
        = ((((0x289U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x144U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x144U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x288U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x144U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5065[2U] 
        = ((((0x28bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x145U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x145U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x28aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x145U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5065[3U] 
        = ((((0x28dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x146U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x146U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x28cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x146U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5065[4U] 
        = ((((0x28fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x147U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x147U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x28eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x147U])));
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x37U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5065[(__Vilp2 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5030[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
               >> 7U)) & (0U != (0x3ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
               >> 6U)) & (0U != (0x1ffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
               >> 5U)) & (0U != (0x1feU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                                           << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
               >> 4U)) & (0U != (0x1fcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                                           << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
               >> 3U)) & (0U != (0x1f8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                                           << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
               >> 2U)) & (0U != (0x1f0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                                           << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
               >> 1U)) & (0U != (0x1e0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                                           << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)) 
           & (0U != (0x1c0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                               << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_344)
            ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0U] 
        = ((((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x16eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x16eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x16eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36803[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0U] 
        = ((((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x16eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x16eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x16eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38797[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0U] 
        = ((((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x16eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x16eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x16eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27877[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0U] 
        = ((((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x16eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x16eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x16eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29880[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10674[0U] 
        = ((((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10674[1U] 
        = ((((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10674[2U] 
        = ((((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10674[3U] 
        = ((((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14fU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14fU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14fU])));
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x2fU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10674[(__Vilp3 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10653[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__activation_out_reg;
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__activation_out_reg = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__psum_out_reg) 
                     >> 0xfU)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[0U] 
        = ((((0x2e6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x172U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x172U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2e5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x172U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15173[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15168[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[0U] 
        = ((((0x2e6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x172U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x172U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2e5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x172U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17095[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17090[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[0U] 
        = ((((0x2e6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x172U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x172U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2e5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x172U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12511[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12504[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[0U] 
        = ((((0x2e6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x172U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x172U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2e5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x172U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20939[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20934[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0U] 
        = ((((0x4bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x4aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[1U] 
        = ((((0x4dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x4cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[2U] 
        = ((((0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x4eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[3U] 
        = ((((0x51U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x50U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[4U] 
        = ((((0x53U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x52U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U])));
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x36U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[(__Vilp4 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46369[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x3cU] 
        = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46369[0x37U]);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[0U] 
        = ((((0x2e6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x172U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x172U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2e5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x172U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19017[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19012[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_28 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 0xdU)) & (0U != (0xffffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_68 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 0xcU)) & (0U != (0x7fffU & ((IData)(0xb1U) 
                                              * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_70 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 0xbU)) & (0U != (0x7ffeU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_72 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 0xaU)) & (0U != (0x7ffcU & (((IData)(0xb1U) 
                                               * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_74 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 9U)) & (0U != (0x7ff8U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_76 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 8U)) & (0U != (0x7ff0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_78 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 7U)) & (0U != (0x7fe0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_80 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 6U)) & (0U != (0x7fc0U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_82 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 5U)) & (0U != (0x7f80U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_84 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 4U)) & (0U != (0x7f00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_86 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 3U)) & (0U != (0x7e00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_88 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 2U)) & (0U != (0x7c00U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_90 
        = ((~ (((IData)(0xb1U) * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
               >> 1U)) & (0U != (0x7800U & (((IData)(0xb1U) 
                                             * (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh6954)) 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0U] 
        = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7473[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7468[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978[0U] 
        = ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x135U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x135U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x13U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x135U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978[1U] 
        = ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x136U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x136U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x13U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x136U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978[2U] 
        = ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x13U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978[3U] 
        = ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x13U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U])));
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x46U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978[(__Vilp5 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5100[0U] 
        = ((((0x27dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x13eU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x13eU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x27cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x13eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5100[1U] 
        = ((((0x27fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x13fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x13fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x27eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x13fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5100[2U] 
        = ((((0x281U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x140U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x140U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x280U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x140U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5100[3U] 
        = ((((0x283U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x141U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x141U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x282U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x141U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5100[4U] 
        = ((((0x285U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x142U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x142U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x284U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x142U])));
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x3cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5100[(__Vilp6 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5065[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__result_raw___05Fh4385 
        = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460) 
                       << 5U)) | ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179))
                                   ? ((0x7f80U & (((IData)(2U) 
                                                   + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                                  << 7U)) 
                                      | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                                                  >> 2U)))
                                   : ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179))
                                       ? ((0x7f80U 
                                           & (((IData)(1U) 
                                               + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159)) 
                                              << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                                                >> 1U)))
                                       : ((0x7f80U 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___theResult___05F___05F_2___05Fh4159) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
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
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_16)
                                                 ? 
                                                (0x3feU 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_45)
                                                      ? 
                                                     (0x1feU 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_47)
                                                           ? 
                                                          (0xfeU 
                                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_49)
                                                                ? 
                                                               (0x7eU 
                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_51)
                                                                     ? 
                                                                    (0x3eU 
                                                                     & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_53)
                                                                          ? 
                                                                         (0x1eU 
                                                                          & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_55)
                                                                               ? 
                                                                              (0xeU 
                                                                               & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_57)
                                                                                 ? 
                                                                                (6U 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)) 
                                                                                << 1U))
                                                                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)) 
                                                                             << 1U))
                                                                          : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)) 
                                                                        << 1U))
                                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)) 
                                                                   << 1U))
                                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)) 
                                                              << 1U))
                                                           : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)) 
                                                         << 1U))
                                                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)) 
                                                    << 1U))
                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0U] 
        = ((((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x16dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x16dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x16dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36813[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36808[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0U] 
        = ((((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x16dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x16dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x16dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38807[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38802[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0U] 
        = ((((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x16dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x16dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x16dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27887[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27882[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0U] 
        = ((((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x16dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x16dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x16dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29890[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29885[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10694[0U] 
        = ((((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x148U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x148U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x148U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10694[1U] 
        = ((((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x149U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x149U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x149U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10694[2U] 
        = ((((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10694[3U] 
        = ((((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x14bU])));
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x33U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10694[(__Vilp7 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10674[__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
}
