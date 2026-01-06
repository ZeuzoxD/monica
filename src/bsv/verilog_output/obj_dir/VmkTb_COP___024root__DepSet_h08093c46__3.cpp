// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

extern const VlWide<8>/*255:0*/ VmkTb_COP__ConstPool__CONST_h9e67c271_0;
extern const VlWide<384>/*12287:0*/ VmkTb_COP__ConstPool__CONST_hd2014d94_0;
extern const VlWide<98>/*3135:0*/ VmkTb_COP__ConstPool__CONST_hfea0e384_0;

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__5(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__5\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_9 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_6 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_7 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_8 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_21 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_22 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_23 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_24 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_25 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_26 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_27 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_28 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_29 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_3 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_30 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_31 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_32 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_33 
                = (0xfU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_16 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_16__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_17 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_17__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_18 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_18__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_19 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_19__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_2 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_2__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_21 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_21__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_22 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_22__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_23 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_23__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_24 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_24__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_25 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_25__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_26 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_26__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_27 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_27__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_28 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_28__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_29 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_29__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_3 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_3__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_30 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_30__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_31 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_31__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_32 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_32__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_33 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_33__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_34 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_34__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_35 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_35__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_36 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_36__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_37 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_37__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_38 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_38__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_39 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_39__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_4 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_4__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_40 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_40__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_41 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_41__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_42 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_42__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_43 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_43__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_44 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_44__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_45 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_45__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_46 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_46__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_47 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_47__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_5 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_5__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_6 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_6__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_7 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_7__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_8 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_8__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_9 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_9__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_16 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_16__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_17 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_17__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_18 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_18__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_19 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_19__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_2 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_2__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_21 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_21__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_22 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_22__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_23 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_23__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_24 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_24__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_25 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_25__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_26 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_26__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_27 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_27__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_28 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_28__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_29 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_29__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_3 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_3__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_30 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_30__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_31 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_31__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_32 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_32__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_33 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_33__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_34 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_34__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_35 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_35__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_36 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_36__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_37 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_37__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_38 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_38__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_39 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_39__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_4 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_4__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_40 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_40__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_41 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_41__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_42 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_42__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_43 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_43__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_44 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_44__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_45 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_45__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_46 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_46__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_47 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_47__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_5 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_5__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_6 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_6__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_7 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_7__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_8 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_8__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_9 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__refr_9__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_16 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_16__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_17 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_17__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_18 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_18__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_19 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_19__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_2 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_2__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_21 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_21__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_22 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_22__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_23 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_23__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_24 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_24__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_25 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_25__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_26 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_26__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_27 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_27__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_28 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_28__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_29 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_29__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_3 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_3__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_30 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_30__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_31 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_31__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_32 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_32__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_33 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_33__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_34 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_34__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_35 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_35__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_36 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_36__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_37 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_37__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_38 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_38__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_39 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_39__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_4 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_4__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_40 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_40__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_41 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_41__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_42 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_42__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_43 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_43__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_44 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_44__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_45 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_45__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_46 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_46__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_47 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_47__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_5 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_5__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_6 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_6__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_7 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_7__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_8 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_8__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_9 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__refr_9__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_16 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_16__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_17 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_17__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_18 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_18__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_19 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_19__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_2 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_2__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_21 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_21__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_22 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_22__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_23 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_23__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_24 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_24__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_25 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_25__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_26 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_26__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_27 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_27__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_28 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_28__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_29 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_29__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_3 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_3__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_30 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_30__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_31 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_31__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_32 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_32__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_33 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_33__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_34 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_34__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_35 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_35__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_36 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_36__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_37 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_37__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_38 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_38__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_39 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_39__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_4 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_4__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_40 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_40__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_41 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_41__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_42 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_42__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_43 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_43__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_44 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_44__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_45 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_45__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_46 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_46__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_47 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_47__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_5 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_5__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_6 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_6__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_7 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_7__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_8 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_8__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_9 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__refr_9__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_16 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_16__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_17 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_17__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_18 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_18__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_19 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_19__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_2 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_2__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_21 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_21__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_22 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_22__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_23 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_23__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_24 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_24__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_25 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_25__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_26 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_26__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_27 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_27__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_28 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_28__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_29 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_29__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_3 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_3__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_30 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_30__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_31 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_31__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_32 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_32__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_33 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_33__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_34 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_34__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_35 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_35__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_36 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_36__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_37 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_37__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_38 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_38__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_39 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_39__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_4 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_4__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_40 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_40__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_41 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_41__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_42 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_42__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_43 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_43__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_44 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_44__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_45 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_45__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_46 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_46__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_47 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_47__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_5 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_5__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_6 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_6__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_7 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_7__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_8 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_8__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_9 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__refr_9__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_16 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_16__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_17 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_17__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_18 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_18__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_19 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_19__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_2 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_2__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_21 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_21__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_22 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_22__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_23 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_23__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_24 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_24__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_25 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_25__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_26 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_26__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_27 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_27__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_28 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_28__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_29 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_29__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_3 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_3__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_30 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_30__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_31 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_31__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_32 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_32__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_33 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_33__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_34 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_34__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_35 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_35__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_36 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_36__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_37 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_37__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_38 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_38__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_39 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_39__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_4 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_4__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_40 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_40__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_41 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_41__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_42 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_42__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_43 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_43__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_44 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_44__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_45 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_45__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_46 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_46__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_47 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_47__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_5 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_5__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_6 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_6__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_7 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_7__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_8 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_8__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_9 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__refr_9__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_16 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_16__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_17 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_17__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_18 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_18__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_19 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_19__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_2 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_2__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_21 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_21__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_22 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_22__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_23 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_23__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_24 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_24__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_25 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_25__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_26 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_26__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_27 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_27__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_28 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_28__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_29 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_29__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_3 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_3__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_30 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_30__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_31 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_31__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_32 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_32__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_33 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_33__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_34 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_34__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_35 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_35__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_36 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_36__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_37 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_37__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_38 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_38__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_39 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_39__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_4 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_4__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_40 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_40__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_41 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_41__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_42 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_42__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_43 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_43__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_44 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_44__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_45 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_45__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_46 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_46__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_47 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_47__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_5 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_5__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_6 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_6__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_7 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_7__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_8 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_8__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_9 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__refr_9__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_16 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_16__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_17 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_17__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_18 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_18__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_19 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_19__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_2 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_2__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_21 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_21__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_22 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_22__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_23 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_23__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_24 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_24__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_25 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_25__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_26 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_26__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_27 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_27__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_28 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_28__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_29 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_29__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_3 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_3__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_30 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_30__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_31 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_31__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_32 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_32__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_33 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_33__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_34 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_34__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_35 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_35__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_36 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_36__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_37 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_37__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_38 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_38__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_39 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_39__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_4 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_4__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_40 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_40__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_41 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_41__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_42 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_42__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_43 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_43__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_44 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_44__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_45 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_45__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_46 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_46__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_47 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_47__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_5 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_5__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_6 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_6__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_7 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_7__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_8 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_8__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_9 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__refr_9__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_0 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_0__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_1 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_1__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_10 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_10__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_11 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_11__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_12 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_12__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_13 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_13__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_14 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_14__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_15 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_15__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_20 
                = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_20__024EN) 
                   & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                      >> 0x14U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_9__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_9 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_6__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_6 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_7__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_7 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_8__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_8 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_21__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_21 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_22__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_22 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_23__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_23 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_24__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_24 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_25__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_25 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_26__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_26 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_27__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_27 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_28__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_28 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_29__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_29 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_3__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_3 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_30__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_30 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_31__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_31 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_32__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_32 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_33__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_33 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_45__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_45 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_37__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_37 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_44__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_44 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_40__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_40 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_38__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_38 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_39__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_39 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_46__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_46 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_4__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_4 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_41__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_41 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_42__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_42 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_43__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_43 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_47__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_47 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_5__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_5 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_0 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_1 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_10__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_10 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_11__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_11 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_12__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_12 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_13__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_13 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_14__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_14 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_15__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_15 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_16__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_16 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_17__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_17 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_18__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_18 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_19__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_19 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_2__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_2 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_20__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_20 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_34__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_34 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_35__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_35 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_36__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_36 
                = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__output_reg 
                              >> 4U));
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_344) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2405))) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_343) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[0U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[1U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[2U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[3U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[4U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[5U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[6U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[7U];
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_30_TO_23_137_EQ_0___05FETC___05F_d7261) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_14_TO_7_262_EQ_0_2_ETC___05F_d7386));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_62_TO_55_886_EQ_0___05FETC___05F_d7010) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_46_TO_39_011_EQ_0___05FETC___05F_d7135));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_94_TO_87_635_EQ_0___05FETC___05F_d6759) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_78_TO_71_760_EQ_0___05FETC___05F_d6884));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_126_TO_119_384_EQ___05FETC___05F_d6508) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_110_TO_103_509_EQ___05FETC___05F_d6633));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_158_TO_151_133_EQ___05FETC___05F_d6257) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_142_TO_135_258_EQ___05FETC___05F_d6382));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_190_TO_183_882_EQ___05FETC___05F_d6006) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_174_TO_167_007_EQ___05FETC___05F_d6131));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                    = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_254_TO_247_379_EQ___05FETC___05F_d5504) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_238_TO_231_505_EQ___05FETC___05F_d5629)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_222_TO_215_631_EQ___05FETC___05F_d5755) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_206_TO_199_756_EQ___05FETC___05F_d5880))))));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                    = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_254_TO_247_379_EQ___05FETC___05F_d5504) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_238_TO_231_505_EQ___05FETC___05F_d5629)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_222_TO_215_631_EQ___05FETC___05F_d5755) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_206_TO_199_756_EQ___05FETC___05F_d5880))))) 
                               >> 0x20U));
            }
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_348) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete))) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_collect_result) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_30_TO_23_0205_EQ_0_ETC___05F_d10321) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_14_TO_7_0322_EQ_0___05FETC___05F_d10438));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_62_TO_55_970_EQ_0___05FETC___05F_d10086) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_46_TO_39_0087_EQ_0_ETC___05F_d10203));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_94_TO_87_735_EQ_0___05FETC___05F_d9851) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_78_TO_71_852_EQ_0___05FETC___05F_d9968));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_126_TO_119_500_EQ___05FETC___05F_d9616) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_110_TO_103_617_EQ___05FETC___05F_d9733));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_158_TO_151_265_EQ___05FETC___05F_d9381) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_142_TO_135_382_EQ___05FETC___05F_d9498));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                    = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_190_TO_183_030_EQ___05FETC___05F_d9146) 
                        << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_174_TO_167_147_EQ___05FETC___05F_d9263));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                    = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_254_TO_247_560_EQ___05FETC___05F_d8676) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_238_TO_231_677_EQ___05FETC___05F_d8793)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_222_TO_215_795_EQ___05FETC___05F_d8911) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_206_TO_199_912_EQ___05FETC___05F_d9028))))));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                    = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_254_TO_247_560_EQ___05FETC___05F_d8676) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_238_TO_231_677_EQ___05FETC___05F_d8793)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_222_TO_215_795_EQ___05FETC___05F_d8911) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_206_TO_199_912_EQ___05FETC___05F_d9028))))) 
                               >> 0x20U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[0U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[1U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[2U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[3U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[4U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[5U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[6U];
                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                    = VmkTb_COP__ConstPool__CONST_h9e67c271_0[7U];
            }
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_1__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_10__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_11__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_12__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_13__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_14__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_15__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_2__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_3__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_4__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_5__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_6__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_7__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_8__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_9__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_0__024D_IN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__psum_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww, vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww, vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2__024D_IN);
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2__024D_IN);
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay__024D_IN);
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first__024D_IN);
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa__024D_IN);
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb__024D_IN);
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[1U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[2U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[3U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[4U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[5U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[6U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[7U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[8U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[9U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xaU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xbU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xcU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xdU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xeU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xfU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x10U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x11U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x12U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x13U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x14U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x15U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x16U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x17U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x18U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x19U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x1aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x1bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x1cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x1dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x1eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x1fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x20U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x21U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x22U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x23U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x24U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x25U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x26U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x27U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x28U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x29U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x2aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x2bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x2cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x2dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x2eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x2fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x30U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x31U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x32U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x33U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x34U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x35U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x36U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x37U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x38U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x39U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x3aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x3bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x3cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x3dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x3eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x3fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x40U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x41U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x42U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x43U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x44U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x45U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x46U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x47U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x48U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x49U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x4aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x4bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x4cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x4dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x4eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x4fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x50U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x51U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x52U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x53U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x54U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x55U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x56U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x57U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x58U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x59U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x5aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x5bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x5cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x5dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x5eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x5fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x60U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x61U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x62U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x63U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x64U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x65U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x66U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x67U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x68U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x69U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x6aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x6bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x6cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x6dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x6eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x6fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x70U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x71U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x72U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x73U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x74U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x75U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x76U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x77U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x78U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x79U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x7aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x7bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x7cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x7dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x7eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x7fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x80U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x81U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x82U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x83U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x84U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x85U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x86U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x87U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x88U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x89U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x8aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x8bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x8cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x8dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x8eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x8fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x90U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x91U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x92U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x93U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x94U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x95U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x96U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x97U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x98U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x99U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x9aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x9bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x9cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x9dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x9eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x9fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa0U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa1U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa2U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa3U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa4U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa5U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa6U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa7U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa8U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xa9U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xaaU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xabU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xacU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xadU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xaeU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xafU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb0U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb1U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb2U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb3U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb4U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb5U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb6U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb7U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb8U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xb9U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xbaU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xbbU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xbcU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xbdU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xbeU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xbfU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc0U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc1U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc2U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc3U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc4U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc5U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc6U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc7U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc8U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xc9U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xcaU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xcbU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xccU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xcdU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xceU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xcfU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd0U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd1U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd2U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd3U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd4U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd5U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd6U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd7U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd8U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xd9U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xdaU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xdbU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xdcU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xddU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xdeU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xdfU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe0U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe1U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe2U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe3U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe4U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe5U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe6U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe7U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe8U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xe9U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xeaU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xebU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xecU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xedU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xeeU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xefU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf0U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf1U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf2U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf3U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf4U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf5U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf6U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf7U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf8U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xf9U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xfaU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xfbU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xfcU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xfdU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xfeU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0xffU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x100U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x101U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x102U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x103U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x104U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x105U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x106U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x107U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x108U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x109U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x10aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x10bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x10cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x10dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x10eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x10fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x110U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x111U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x112U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x113U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x114U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x115U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x116U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x117U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x118U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x119U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x11aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x11bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x11cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x11dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x11eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x11fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x120U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x121U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x122U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x123U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x124U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x125U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x126U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x127U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x128U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x129U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x12aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x12bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x12cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x12dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x12eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x12fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x130U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x131U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x132U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x133U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x134U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x135U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x136U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x137U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x138U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x139U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x13aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x13bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x13cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x13dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x13eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x13fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x140U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x141U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x142U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x143U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x144U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x145U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x146U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x147U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x148U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x149U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x14aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x14bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x14cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x14dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x14eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x14fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x150U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x151U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x152U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x153U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x154U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x155U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x156U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x157U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x158U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x159U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x15aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x15bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x15cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x15dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x15eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x15fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x160U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x161U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x162U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x163U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x164U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x165U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x166U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x167U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x168U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x169U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x16aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x16bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x16cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x16dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x16eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x16fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x170U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x171U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x172U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x173U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x174U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x175U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x176U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x177U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x178U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x179U] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x17aU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x17bU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[3U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x17cU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[0U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x17dU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[1U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x17eU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[2U];
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r[0x17fU] 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[3U];
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__activation_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__MUX_cycleCount__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024EN_start))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__MUX_cycleCount__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024EN_start))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount__024D_IN;
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count__024D_IN;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count__024D_IN;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count__024D_IN;
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024EN_feed_input) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__chunks_processed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__chunks_processed__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter__024EN) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024EN))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__outputs_collected 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__outputs_collected__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr 
                = vlSelfRef.mkTb_COP__DOT__cop__024write_bram_base_addr;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_addr_offset__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_addr_offset 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_addr_offset__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_started__024D_IN) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_71))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1__024EN) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer__024EN))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed__024D_IN;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024EN_get_output) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__outputs_received 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__outputs_received__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__current_bram__024EN) {
            vlSelfRef.mkTb_COP__DOT__current_bram = vlSelfRef.mkTb_COP__DOT__current_bram__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete = 1U;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output__024EN) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_6))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_batch_requested 
                = (1U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output__024EN)) 
                         & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter__024EN))));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv, vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r, vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v, vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k, vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024D_IN);
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx__024EN) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_load_weights_from_bram))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weights_ready 
                = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete)) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_354));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values__024EN) {
            VL_ASSIGN_W(3120,vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values, vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values__024D_IN);
        }
        if (vlSelfRef.mkTb_COP__DOT__started__024EN) {
            vlSelfRef.mkTb_COP__DOT__started = 1U;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__MUX_state__024write_1___05FSEL_1) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__MUX_state__024write_1___05FSEL_2))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state__024D_IN;
        }
        vlSelfRef.mkTb_COP__DOT__cycle = vlSelfRef.mkTb_COP__DOT__cycle__024D_IN;
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_feed_mse) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_feed_mse))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__start_cycle 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FPSEL_2) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr__024EN))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_done__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_done 
                = (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_valid__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_valid 
                = (1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage4);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result);
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
            = VmkTb_COP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0 = 0U;
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__chunks_processed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__outputs_collected = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_addr_offset = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__outputs_received = 0U;
        vlSelfRef.mkTb_COP__DOT__current_bram = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_batch_requested = 0U;
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weights_ready = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected = 0U;
        VL_ASSIGN_W(3120,vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values, VmkTb_COP__ConstPool__CONST_hfea0e384_0);
        vlSelfRef.mkTb_COP__DOT__started = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state = 0U;
        vlSelfRef.mkTb_COP__DOT__cycle = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__start_cycle = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_done = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_valid = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx = 0U;
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_16 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_17 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_18 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_19 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_21 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_22 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_23 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_24 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_25 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_26 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_27 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_28 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_29 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_30 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_31 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_32 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_33 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_34 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_35 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_36 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_37 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_38 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_39 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_40 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_41 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_42 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_43 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_44 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_45 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_46 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_47 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_20 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_15 = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOA_R;
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_data 
            = ((0x8000U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s3_y) 
                           ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s3_x))) 
               | (((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s3_y)))) 
                   | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s3_x)))))
                   ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__final_exp_10___05Fh9406) 
                                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__final_exp_10___05Fh9406))))
                            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__final_exp_10___05Fh9406))
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__final_mant___05Fh9405)
                                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__final_exp_10___05Fh9406))
                                          ? ((0x7f80U 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__final_exp_10___05Fh9406) 
                                                 << 7U)) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__final_mant___05Fh9405))
                                          : 0x7f80U))));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__result_data 
            = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s3_new_exp) 
                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s3_new_man));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__result_data 
            = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s3_new_exp) 
                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s3_new_man));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__result_data 
            = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s3_new_exp) 
                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s3_new_man));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__result_data 
            = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s3_new_exp) 
                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s3_new_man));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__result_data 
            = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s3_new_exp) 
                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s3_new_man));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__result_data 
            = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s3_new_exp) 
                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s3_new_man));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__result_data 
            = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s3_new_exp) 
                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s3_new_man));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage4)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__result_data 
            = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s3_new_exp) 
                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s3_new_man));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R;
    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage4))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_is_special)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_special_result)
                : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_result_sign) 
                    << 0xfU) | (((IData)((0U == (0x7fffU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_x_new)))) 
                                 | (IData)((0U == (0x7fffU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_r_new)))))
                                 ? 0U : ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__final_exp_10___05Fh14573) 
                                                   >> 9U) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__final_exp_10___05Fh14573))))
                                          ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__final_exp_10___05Fh14573))
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__final_mant___05Fh14572)
                                              : 0U)
                                          : ((0xffU 
                                              > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__final_exp_10___05Fh14573))
                                              ? ((0x7f80U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__final_exp_10___05Fh14573) 
                                                     << 7U)) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__final_mant___05Fh14572))
                                              : 0x7f80U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R2 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R;
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_n;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage3)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s3_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_n;
    }
}
