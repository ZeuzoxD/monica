// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__128(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__128\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x4dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2429)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x4bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2429)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x47U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2429)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x45U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2429)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x41U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2429)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
           & ((0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2429)));
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
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2411) 
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[0U] 
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37201[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37201[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37201[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37201[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37201[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37201[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37201[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37201[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[0U] 
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39198[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39198[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39198[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39198[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39198[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39198[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39198[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39198[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[0U] 
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28275[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28275[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28275[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28275[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28275[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28275[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28275[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28275[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[0U] 
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30281[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30281[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30281[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30281[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30281[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30281[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30281[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30281[7U];
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FSEL_2) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_state__024write_1___05FSEL_18 
            = (0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_state__024write_1___05FSEL_18 = 0U;
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed__024D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[4U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[5U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[6U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[7U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[8U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[9U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xaU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xbU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xcU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xdU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xeU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xfU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[4U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[5U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[6U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[7U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[8U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[9U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xaU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xbU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xcU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xdU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xeU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xfU];
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[4U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[5U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[6U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[7U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[8U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[9U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xaU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xbU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xcU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xdU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xeU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xfU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[3U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[4U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[5U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[6U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[7U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[8U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[9U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xaU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xbU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xcU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xdU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xeU];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xfU];
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024EN_feed_input 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FSEL_2));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_state__024write_1___05FSEL_19 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FSEL_1) 
           & (0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024EN_get_e1 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1__024EN) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024EN));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_state__024write_1___05FSEL_22 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024EN) 
           & (0x5fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage__024D_IN 
        = (((QData)((IData)((((0x40U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__issue_index)) 
                              << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__issue_index)))) 
            << 0x20U) | (QData)((IData)((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_sign___05Fh12135) 
                                            ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_sign___05Fh12138)) 
                                           << 0x1fU) 
                                          | (((((0U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh12136)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_mant___05Fh12137))) 
                                               | ((0U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh12139)) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_mant___05Fh12140))))
                                               ? 0U
                                               : ((IData)(
                                                          (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh19122) 
                                                            >> 9U) 
                                                           | (0U 
                                                              == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh19122))))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh19122))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_mant___05Fh19121)
                                                    : 0U)
                                                   : 
                                                  ((0xffU 
                                                    > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh19122))
                                                    ? 
                                                   ((0x7f80U 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh19122) 
                                                        << 7U)) 
                                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_mant___05Fh19121))
                                                    : 0x7f80U))) 
                                             << 0x10U)) 
                                         | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_sign___05Fh19821) 
                                              ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_sign___05Fh19824)) 
                                             << 0xfU) 
                                            | ((((0U 
                                                  == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh19822)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_mant___05Fh19823))) 
                                                | ((0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh19825)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_mant___05Fh19826))))
                                                ? 0U
                                                : ((IData)(
                                                           (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh26805) 
                                                             >> 9U) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh26805))))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh26805))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_mant___05Fh26804)
                                                     : 0U)
                                                    : 
                                                   ((0xffU 
                                                     > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh26805))
                                                     ? 
                                                    ((0x7f80U 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_exp_10___05Fh26805) 
                                                         << 7U)) 
                                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__final_mant___05Fh26804))
                                                     : 0x7f80U))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage__024D_IN 
        = (((QData)((IData)((((0x40U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index)) 
                              << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index)))) 
            << 0x20U) | (QData)((IData)((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_sign___05Fh12135) 
                                            ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_sign___05Fh12138)) 
                                           << 0x1fU) 
                                          | (((((0U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137))) 
                                               | ((0U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139)) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140))))
                                               ? 0U
                                               : ((IData)(
                                                          (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh19122) 
                                                            >> 9U) 
                                                           | (0U 
                                                              == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh19122))))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh19122))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_mant___05Fh19121)
                                                    : 0U)
                                                   : 
                                                  ((0xffU 
                                                    > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh19122))
                                                    ? 
                                                   ((0x7f80U 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh19122) 
                                                        << 7U)) 
                                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_mant___05Fh19121))
                                                    : 0x7f80U))) 
                                             << 0x10U)) 
                                         | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_sign___05Fh19821) 
                                              ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_sign___05Fh19824)) 
                                             << 0xfU) 
                                            | ((((0U 
                                                  == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823))) 
                                                | ((0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826))))
                                                ? 0U
                                                : ((IData)(
                                                           (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh26805) 
                                                             >> 9U) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh26805))))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh26805))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_mant___05Fh26804)
                                                     : 0U)
                                                    : 
                                                   ((0xffU 
                                                     > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh26805))
                                                     ? 
                                                    ((0x7f80U 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_exp_10___05Fh26805) 
                                                         << 7U)) 
                                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__final_mant___05Fh26804))
                                                     : 0x7f80U))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage__024D_IN 
        = (((QData)((IData)((((0x40U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index)) 
                              << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index)))) 
            << 0x20U) | (QData)((IData)((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_sign___05Fh12135) 
                                            ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_sign___05Fh12138)) 
                                           << 0x1fU) 
                                          | (((((0U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137))) 
                                               | ((0U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139)) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140))))
                                               ? 0U
                                               : ((IData)(
                                                          (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh19122) 
                                                            >> 9U) 
                                                           | (0U 
                                                              == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh19122))))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh19122))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_mant___05Fh19121)
                                                    : 0U)
                                                   : 
                                                  ((0xffU 
                                                    > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh19122))
                                                    ? 
                                                   ((0x7f80U 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh19122) 
                                                        << 7U)) 
                                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_mant___05Fh19121))
                                                    : 0x7f80U))) 
                                             << 0x10U)) 
                                         | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_sign___05Fh19821) 
                                              ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_sign___05Fh19824)) 
                                             << 0xfU) 
                                            | ((((0U 
                                                  == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823))) 
                                                | ((0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826))))
                                                ? 0U
                                                : ((IData)(
                                                           (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh26805) 
                                                             >> 9U) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh26805))))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh26805))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_mant___05Fh26804)
                                                     : 0U)
                                                    : 
                                                   ((0xffU 
                                                     > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh26805))
                                                     ? 
                                                    ((0x7f80U 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_exp_10___05Fh26805) 
                                                         << 7U)) 
                                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__final_mant___05Fh26804))
                                                     : 0x7f80U))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage__024D_IN 
        = (((QData)((IData)((((0x40U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index)) 
                              << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index)))) 
            << 0x20U) | (QData)((IData)((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_sign___05Fh12135) 
                                            ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_sign___05Fh12138)) 
                                           << 0x1fU) 
                                          | (((((0U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137))) 
                                               | ((0U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139)) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140))))
                                               ? 0U
                                               : ((IData)(
                                                          (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh19122) 
                                                            >> 9U) 
                                                           | (0U 
                                                              == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh19122))))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh19122))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_mant___05Fh19121)
                                                    : 0U)
                                                   : 
                                                  ((0xffU 
                                                    > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh19122))
                                                    ? 
                                                   ((0x7f80U 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh19122) 
                                                        << 7U)) 
                                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_mant___05Fh19121))
                                                    : 0x7f80U))) 
                                             << 0x10U)) 
                                         | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_sign___05Fh19821) 
                                              ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_sign___05Fh19824)) 
                                             << 0xfU) 
                                            | ((((0U 
                                                  == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823))) 
                                                | ((0U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826))))
                                                ? 0U
                                                : ((IData)(
                                                           (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh26805) 
                                                             >> 9U) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh26805))))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh26805))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_mant___05Fh26804)
                                                     : 0U)
                                                    : 
                                                   ((0xffU 
                                                     > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh26805))
                                                     ? 
                                                    ((0x7f80U 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_exp_10___05Fh26805) 
                                                         << 7U)) 
                                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__final_mant___05Fh26804))
                                                     : 0x7f80U))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage_BIT_31_9_EQ_pipeline_stage_BIT___05FETC___05F_d21)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__smaller_m___05Fh7246))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT___0b1_CONCAT_IF_pipeline_stage_BITS_30_TO_23_ULT_ETC___05F_d33)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__smaller_m___05Fh7246) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__smaller_m___05Fh7246)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__issue_index__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__MUX_issue_index__024write_1___05FSEL_1)
            ? (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__issue_index)))
            : 0U);
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__MUX_complete_count__024write_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__complete_count__024D_IN 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__complete_count)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__MUX_active__024write_1___05FSEL_1 
            = (0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__complete_count));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__complete_count__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__MUX_active__024write_1___05FSEL_1 = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage_BIT_31_9_EQ_pipeline_stage_BIT___05FETC___05F_d21)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__smaller_m___05Fh7246))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT___0b1_CONCAT_IF_pipeline_stage_BITS_30_TO_23_ULT_ETC___05F_d33)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__smaller_m___05Fh7246) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__smaller_m___05Fh7246)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__MUX_issue_index__024write_1___05FSEL_1)
            ? (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index)))
            : 0U);
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__MUX_complete_count__024write_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__complete_count__024D_IN 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__complete_count)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__MUX_active__024write_1___05FSEL_1 
            = (0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__complete_count));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__complete_count__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__MUX_active__024write_1___05FSEL_1 = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage_BIT_31_9_EQ_pipeline_stage_BIT___05FETC___05F_d21)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__smaller_m___05Fh7246))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT___0b1_CONCAT_IF_pipeline_stage_BITS_30_TO_23_ULT_ETC___05F_d33)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__smaller_m___05Fh7246) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__smaller_m___05Fh7246)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__MUX_issue_index__024write_1___05FSEL_1)
            ? (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index)))
            : 0U);
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__MUX_complete_count__024write_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__complete_count__024D_IN 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__complete_count)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__MUX_active__024write_1___05FSEL_1 
            = (0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__complete_count));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__complete_count__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__MUX_active__024write_1___05FSEL_1 = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage_BIT_31_9_EQ_pipeline_stage_BIT___05FETC___05F_d21)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__smaller_m___05Fh7246))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0b1_CONCAT_IF_pipeline_stage_BITS_30_TO_23_ULT_ETC___05F_d33)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__smaller_m___05Fh7246) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__IF_pipeline_stage_BITS_30_TO_23_ULT_pipeline_s_ETC___05F_d24)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__smaller_m___05Fh7246)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__MUX_issue_index__024write_1___05FSEL_1)
            ? (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index)))
            : 0U);
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__MUX_complete_count__024write_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__complete_count__024D_IN 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__complete_count)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__MUX_active__024write_1___05FSEL_1 
            = (0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__complete_count));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__complete_count__024D_IN = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__MUX_active__024write_1___05FSEL_1 = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__MUX_state__024write_1___05FPSEL_1 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024RDY_get_result) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024RDY_get_result) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024RDY_get_result) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024RDY_get_result) 
                    & (2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state))))));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_mant___05Fh2203 
            = ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 6U : 0xcU) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x12U : 0x18U))
                : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                        ? 0x1fU : 0x26U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                             ? 0x2eU
                                             : 0x35U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_mant___05Fh2203 
            = ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                    ? 0x3dU : 0x46U) : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                                         ? 0x4eU : 0x57U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_mant___05Fh2203 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))
                ? 0x61U : 0x6bU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7eU;
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_mant___05Fh2203 = 0x75U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_mant___05Fh2203 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__b_exp___05Fh2202 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260 
        = (0xffffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_n__024D_IN) 
                      - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc_ETC___05F_d259)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0U] 
        = ((((0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x170U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x170U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x170U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[1U] 
        = ((((0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x171U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x171U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x171U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[2U] 
        = ((((0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x172U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x172U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x172U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[3U] 
        = ((((0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x173U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x173U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x173U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10915[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__final_mant___05Fh9405 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___theResult___05F_snd___05Fh9553)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___0_CONCAT_NOT_s3_y_063_BITS_14_TO_7_068_EQ_0_06_ETC___05F_d1085) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_30_TO_23_137_EQ_0___05FETC___05F_d7261 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_673)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_31_149_EQ_sa_get_resul_ETC___05F_d7151)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5597633)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_30_TO_2_ETC___05F_d7163)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_30_TO_23_137_ULT_sa_g_ETC___05F_d7152)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5597633))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5597657)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5597657) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_381)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2009)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2011)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2013)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2015)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2017)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2019)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2021)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_381)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2009)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2011)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2013)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2015)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2017)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2019)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2021)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5597580)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_30_TO_23_0651_EQ_0_ETC___05F_d10767 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_673)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_31_0657_EQ_sa_get_resu_ETC___05F_d10658)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5749896)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_30_TO_2_ETC___05F_d10669)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_30_TO_23_0651_ULT_sa___05FETC___05F_d10659)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5749896))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5749920)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5749920) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_397)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2233)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2235)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2237)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2239)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2241)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2243)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2245)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_397)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2233)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2235)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2237)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2239)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2241)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2243)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2245)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5749843)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_174_TO_167_007_EQ___05FETC___05F_d6131 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_631)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_175_019_EQ_sa_get_resu_ETC___05F_d6021)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5589830)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_174_TO___05FETC___05F_d6033)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_174_TO_167_007_ULT_sa_ETC___05F_d6022)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5589830))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5589854)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5589854) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_372)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1883)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1885)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1887)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1889)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1891)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1893)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1895)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_372)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1883)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1885)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1887)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1889)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1891)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1893)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1895)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5589777)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_174_TO_167_593_EQ___05FETC___05F_d9709 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_631)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_175_599_EQ_sa_get_resu_ETC___05F_d9600)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5742093)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_174_TO___05FETC___05F_d9611)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_174_TO_167_593_ULT_sa_ETC___05F_d9601)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5742093))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5742117)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5742117) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_388)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2107)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2109)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2111)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2113)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2115)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2117)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2119)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_388)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2107)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2109)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2111)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2113)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2115)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2117)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2119)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742040)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_190_TO_183_882_EQ___05FETC___05F_d6006 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_638)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_191_894_EQ_sa_get_resu_ETC___05F_d5896)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588963)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_190_TO___05FETC___05F_d5908)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_190_TO_183_882_ULT_sa_ETC___05F_d5897)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588963))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588987)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588987) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_371)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1869)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1871)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1873)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1875)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1877)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1879)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1881)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_371)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1869)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1871)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1873)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1875)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1877)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1879)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1881)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588910)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_190_TO_183_476_EQ___05FETC___05F_d9592 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_638)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_191_482_EQ_sa_get_resu_ETC___05F_d9483)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5741226)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_190_TO___05FETC___05F_d9494)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_190_TO_183_476_ULT_sa_ETC___05F_d9484)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5741226))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5741250)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5741250) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_387)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2093)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2095)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2097)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2099)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2101)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2103)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2105)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_387)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2093)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2095)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2097)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2099)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2101)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2103)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2105)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5741173)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_206_TO_199_756_EQ___05FETC___05F_d5880 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_645)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_207_768_EQ_sa_get_resu_ETC___05F_d5770)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588096)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_206_TO___05FETC___05F_d5782)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_206_TO_199_756_ULT_sa_ETC___05F_d5771)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588096))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588120)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588120) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_370)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1855)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1857)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1859)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1861)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1863)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1865)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1867)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_370)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1855)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1857)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1859)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1861)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1863)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1865)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1867)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5588043)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_206_TO_199_358_EQ___05FETC___05F_d9474 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_645)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_207_364_EQ_sa_get_resu_ETC___05F_d9365)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5740359)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_206_TO___05FETC___05F_d9376)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_206_TO_199_358_ULT_sa_ETC___05F_d9366)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5740359))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5740383)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5740383) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_386)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2079)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2081)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2083)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2085)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2087)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2089)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2091)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_386)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2079)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2081)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2083)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2085)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2087)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2089)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2091)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5740306)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_222_TO_215_631_EQ___05FETC___05F_d5755 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_652)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_223_643_EQ_sa_get_resu_ETC___05F_d5645)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5587229)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_222_TO___05FETC___05F_d5657)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_222_TO_215_631_ULT_sa_ETC___05F_d5646)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5587229))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5587253)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5587253) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_369)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1841)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1843)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1845)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1847)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1849)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1851)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1853)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_369)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1841)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1843)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1845)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1847)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1849)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1851)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1853)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5587176)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_222_TO_215_241_EQ___05FETC___05F_d9357 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_652)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_223_247_EQ_sa_get_resu_ETC___05F_d9248)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5739492)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_222_TO___05FETC___05F_d9259)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_222_TO_215_241_ULT_sa_ETC___05F_d9249)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5739492))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5739516)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5739516) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_385)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2065)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2067)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2069)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2071)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2073)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2075)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2077)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_385)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2065)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2067)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2069)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2071)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2073)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2075)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2077)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5739439)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_238_TO_231_505_EQ___05FETC___05F_d5629 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_659)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_239_517_EQ_sa_get_resu_ETC___05F_d5519)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5586362)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_238_TO___05FETC___05F_d5531)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_238_TO_231_505_ULT_sa_ETC___05F_d5520)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5586362))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5586386)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5586386) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_368)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1827)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1829)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1831)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1833)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1835)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1837)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1839)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_368)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1827)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1829)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1831)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1833)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1835)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1837)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1839)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5586309)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_238_TO_231_123_EQ___05FETC___05F_d9239 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_659)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_239_129_EQ_sa_get_resu_ETC___05F_d9130)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5738625)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_238_TO___05FETC___05F_d9141)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_238_TO_231_123_ULT_sa_ETC___05F_d9131)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5738625))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5738649)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5738649) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_384)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2051)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2053)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2055)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2057)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2059)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2061)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2063)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_384)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2051)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2053)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2055)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2057)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2059)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2061)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2063)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5738572)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_254_TO_247_379_EQ___05FETC___05F_d5504 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_666)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_255_392_EQ_sa_get_resu_ETC___05F_d5394)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5585495)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_254_TO___05FETC___05F_d5406)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_254_TO_247_379_ULT_sa_ETC___05F_d5395)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5585495))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5585519)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5585519) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_367)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1813)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1815)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1817)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1819)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1821)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1823)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1825)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_367)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1813)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1815)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1817)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1819)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1821)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1823)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1825)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5585442)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_254_TO_247_006_EQ___05FETC___05F_d9122 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_666)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_255_012_EQ_sa_get_resu_ETC___05F_d9013)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5737758)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_254_TO___05FETC___05F_d9024)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_254_TO_247_006_ULT_sa_ETC___05F_d9014)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5737758))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5737782)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5737782) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_383)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2037)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2039)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2041)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2043)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2045)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2047)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2049)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_383)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2037)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2039)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2041)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2043)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2045)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2047)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2049)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5737705)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_46_TO_39_011_EQ_0___05FETC___05F_d7135 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_679)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_47_023_EQ_sa_get_resul_ETC___05F_d7025)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5596766)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_46_TO_3_ETC___05F_d7037)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_46_TO_39_011_ULT_sa_g_ETC___05F_d7026)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5596766))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5596790)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5596790) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_380)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1995)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1997)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1999)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2001)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2003)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2005)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2007)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_380)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1995)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1997)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1999)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2001)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2003)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2005)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2007)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5596713)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_46_TO_39_0533_EQ_0_ETC___05F_d10649 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_679)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_47_0539_EQ_sa_get_resu_ETC___05F_d10540)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5749029)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_46_TO_3_ETC___05F_d10551)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_46_TO_39_0533_ULT_sa___05FETC___05F_d10541)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5749029))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5749053)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5749053) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_396)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2219)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2221)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2223)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2225)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2227)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2229)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2231)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_396)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2219)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2221)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2223)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2225)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2227)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2229)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2231)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748976)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_62_TO_55_886_EQ_0___05FETC___05F_d7010 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_686)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_63_898_EQ_sa_get_resul_ETC___05F_d6900)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5595899)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_62_TO_5_ETC___05F_d6912)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_62_TO_55_886_ULT_sa_g_ETC___05F_d6901)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5595899))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5595923)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5595923) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_379)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1981)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1983)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1985)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1987)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1989)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1991)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1993)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_379)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1981)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1983)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1985)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1987)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1989)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1991)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1993)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5595846)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_62_TO_55_0416_EQ_0_ETC___05F_d10532 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_686)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_63_0422_EQ_sa_get_resu_ETC___05F_d10423)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5748162)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_62_TO_5_ETC___05F_d10434)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_62_TO_55_0416_ULT_sa___05FETC___05F_d10424)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5748162))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5748186)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5748186) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_395)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2205)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2207)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2209)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2211)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2213)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2215)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2217)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_395)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2205)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2207)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2209)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2211)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2213)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2215)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2217)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5748109)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_78_TO_71_760_EQ_0___05FETC___05F_d6884 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_693)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_79_772_EQ_sa_get_resul_ETC___05F_d6774)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5595032)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_78_TO_7_ETC___05F_d6786)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_78_TO_71_760_ULT_sa_g_ETC___05F_d6775)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5595032))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5595056)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5595056) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_378)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1967)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1969)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1971)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1973)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1975)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1977)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1979)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_378)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1967)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1969)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1971)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1973)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1975)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1977)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1979)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594979)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_78_TO_71_0298_EQ_0_ETC___05F_d10414 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_693)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_79_0304_EQ_sa_get_resu_ETC___05F_d10305)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5747295)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_78_TO_7_ETC___05F_d10316)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_78_TO_71_0298_ULT_sa___05FETC___05F_d10306)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5747295))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5747319)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5747319) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_394)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2191)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2193)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2195)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2197)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2199)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2201)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2203)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_394)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2191)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2193)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2195)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2197)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2199)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2201)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2203)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5747242)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_94_TO_87_635_EQ_0___05FETC___05F_d6759 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_700)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_95_647_EQ_sa_get_resul_ETC___05F_d6649)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5594165)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_94_TO_8_ETC___05F_d6661)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_94_TO_87_635_ULT_sa_g_ETC___05F_d6650)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5594165))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5594189)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5594189) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_377)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1953)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1955)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1957)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1959)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1961)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1963)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1965)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_377)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1953)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1955)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1957)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1959)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1961)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1963)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1965)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5594112)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_94_TO_87_0181_EQ_0_ETC___05F_d10297 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_700)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_95_0187_EQ_sa_get_resu_ETC___05F_d10188)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5746428)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_94_TO_8_ETC___05F_d10199)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_94_TO_87_0181_ULT_sa___05FETC___05F_d10189)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5746428))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5746452)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5746452) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_393)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2177)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2179)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2181)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2183)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2185)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2187)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2189)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_393)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2177)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2179)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2181)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2183)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2185)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2187)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2189)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5746375)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_110_TO_103_509_EQ___05FETC___05F_d6633 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_597)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_111_521_EQ_sa_get_resu_ETC___05F_d6523)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5593298)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_110_TO___05FETC___05F_d6535)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_110_TO_103_509_ULT_sa_ETC___05F_d6524)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5593298))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5593322)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5593322) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_376)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1939)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1941)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1943)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1945)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1947)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1949)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1951)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_376)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1939)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1941)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1943)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1945)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1947)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1949)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1951)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5593245)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_110_TO_103_0063_EQ_ETC___05F_d10179 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_597)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_111_0069_EQ_sa_get_res_ETC___05F_d10070)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5745561)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_110_TO___05FETC___05F_d10081)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_110_TO_103_0063_ULT_s_ETC___05F_d10071)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5745561))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5745585)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5745585) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_392)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2163)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2165)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2167)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2169)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2171)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2173)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2175)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_392)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2163)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2165)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2167)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2169)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2171)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2173)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2175)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5745508)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_126_TO_119_384_EQ___05FETC___05F_d6508 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_604)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_127_396_EQ_sa_get_resu_ETC___05F_d6398)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5592431)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_126_TO___05FETC___05F_d6410)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_126_TO_119_384_ULT_sa_ETC___05F_d6399)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5592431))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5592455)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5592455) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_375)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1925)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1927)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1929)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1931)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1933)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1935)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1937)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_375)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1925)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1927)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1929)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1931)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1933)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1935)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1937)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5592378)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_126_TO_119_946_EQ___05FETC___05F_d10062 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_604)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_127_952_EQ_sa_get_resu_ETC___05F_d9953)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5744694)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_126_TO___05FETC___05F_d9964)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_126_TO_119_946_ULT_sa_ETC___05F_d9954)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5744694))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5744718)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5744718) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_391)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2149)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2151)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2153)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2155)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2157)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2159)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2161)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_391)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2149)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2151)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2153)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2155)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2157)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2159)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2161)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5744641)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_142_TO_135_258_EQ___05FETC___05F_d6382 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_611)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_143_270_EQ_sa_get_resu_ETC___05F_d6272)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5591564)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_142_TO___05FETC___05F_d6284)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_142_TO_135_258_ULT_sa_ETC___05F_d6273)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5591564))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5591588)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5591588) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_374)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1911)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1913)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1915)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1917)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1919)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1921)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1923)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_374)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1911)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1913)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1915)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1917)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1919)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1921)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1923)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5591511)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_142_TO_135_828_EQ___05FETC___05F_d9944 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_611)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_143_834_EQ_sa_get_resu_ETC___05F_d9835)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5743827)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_142_TO___05FETC___05F_d9846)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_142_TO_135_828_ULT_sa_ETC___05F_d9836)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5743827))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5743851)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5743851) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_390)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2135)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2137)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2139)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2141)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2143)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2145)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2147)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_390)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2135)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2137)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2139)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2141)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2143)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2145)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2147)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5743774)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_158_TO_151_133_EQ___05FETC___05F_d6257 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_624)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_159_145_EQ_sa_get_resu_ETC___05F_d6147)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5590697)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_158_TO___05FETC___05F_d6159)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_158_TO_151_133_ULT_sa_ETC___05F_d6148)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5590697))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5590721)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5590721) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_373)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1897)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1899)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1901)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1903)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1905)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1907)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1909)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_373)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1897)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1899)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1901)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1903)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1905)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1907)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_1909)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5590644)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_158_TO_151_711_EQ___05FETC___05F_d9827 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_624)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_159_717_EQ_sa_get_resu_ETC___05F_d9718)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5742960)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_158_TO___05FETC___05F_d9729)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_158_TO_151_711_ULT_sa_ETC___05F_d9719)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5742960))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5742984)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5742984) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_389)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2121)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2123)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2125)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2127)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2129)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2131)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2133)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_389)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2121)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2123)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2125)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2127)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2129)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2131)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2133)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5742907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_14_TO_7_262_EQ_0_2_ETC___05F_d7386 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_618)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BIT_15_274_EQ_sa_get_resul_ETC___05F_d7276)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5598500)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa1_accumulator_378_BITS_14_TO_7_ETC___05F_d7288)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_14_TO_7_262_ULT_sa_ge_ETC___05F_d7277)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5598500))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5598524)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5598524) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_382)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2023)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2025)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2027)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2029)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2031)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2033)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2035)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_382)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2023)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2025)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2027)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2029)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2031)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2033)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2035)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5598447)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_14_TO_7_0768_EQ_0___05FETC___05F_d10884 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_618)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BIT_15_0774_EQ_sa_get_resu_ETC___05F_d10775)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5750763)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_005_BITS_14_TO_7_ETC___05F_d10786)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_14_TO_7_0768_ULT_sa_g_ETC___05F_d10776)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5750763))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5750787)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5750787) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_398)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2247)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2249)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2251)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2253)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2255)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2257)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2259)
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
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_398)
                                                  ? 
                                                 (0x1feU 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2247)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2249)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2251)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2253)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2255)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2257)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2259)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5750710)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__final_mant___05Fh14572 
        = (0x7fU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s3_x_new_06_BITS_14_TO_7_07_EQ_0___05FETC___05F_d625)
                     ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s3_x_new_06_BITS_14_TO_7_07_EQ_0___05FETC___05F_d625 
                        >> 8U) : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s3_x_new_06_BITS_14_TO_7_07_EQ_0___05FETC___05F_d625)
                                   ? (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s3_x_new_06_BITS_14_TO_7_07_EQ_0___05FETC___05F_d625 
                                      >> 7U) : (0x1ffU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_2_2)
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___theResult___05F_snd___05Fh14720)
                                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s3_x_new_06_BITS_14_TO_7_07_EQ_0___05FETC___05F_d625) 
                                                   >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__IF_s2_y_new_80_BITS_14_TO_7_81_ULE_128_88_THEN_ETC___05F_d496 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__bigger_m___05Fh13682) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__smaller_m___05Fh13683));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[0U] 
        = ((((0x2f8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15569[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15569[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15569[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15569[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[0U] 
        = ((((0x2f8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17491[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17491[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17491[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17491[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[0U] 
        = ((((0x2f8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12887[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12887[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12887[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12887[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[0U] 
        = ((((0x2f8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21335[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21335[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21335[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21335[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0U] 
        = ((((0xa5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xa4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[1U] 
        = ((((0xa7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xa6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[2U] 
        = ((((0xa9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xa8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[3U] 
        = ((((0xabU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xaaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[4U] 
        = ((((0xadU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xacU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xfU] 
        = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46500[0xaU]);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[0U] 
        = ((((0x2f8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19413[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19413[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19413[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19413[3U];
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
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
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
}
