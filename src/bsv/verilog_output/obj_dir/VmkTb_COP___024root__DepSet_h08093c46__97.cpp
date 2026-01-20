// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__100(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__100\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[0U] 
        = ((((0x2f8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20889[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20889[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20889[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20894[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20889[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[0U] 
        = ((((0xa5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xa4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[1U] 
        = ((((0xa7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xa6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[2U] 
        = ((((0xa9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xa8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[3U] 
        = ((((0xabU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xaaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[4U] 
        = ((((0xadU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xacU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46089[0xfU] 
        = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46054[0xaU]);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[0U] 
        = ((((0x2f8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18967[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18967[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18967[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18972[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18967[3U];
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_9__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_107 
        = (IData)(((0U == (0xc00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_106)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0U] 
        = ((((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7422[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x159U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x159U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x159U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[1U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[2U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[3U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x15cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x26U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40776[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0U] 
        = ((((0x2d7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2d6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[1U] 
        = ((((0x2d9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16cU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16cU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2d8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[2U] 
        = ((((0x2dbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2daU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[3U] 
        = ((((0x2ddU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16eU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16eU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2dcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[4U] 
        = ((((0x2dfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2deU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x16fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4785[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4750[0xfU];
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
    vlSelfRef.__VdfgRegularize_h6171c202_0_7 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
            = ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                ? 0xaU : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                           ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_47)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_46))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_45)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_44)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_43)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_42))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_41)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_40))))
                           : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_39)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_38))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_37)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_36)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_35)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_34))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_33)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_32))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index) 
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
                                                      >> 0xfU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_31;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31) 
                                     >> 0xfU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_30;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30) 
                                     >> 0xfU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_29;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_28;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28) 
                                 >> 0xfU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_27;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_26;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_25;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_24;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24) 
                             >> 0xfU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_23;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_22;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_21;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_20;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_19;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_18;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_17;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_16;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16) 
                         >> 0xfU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_15;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_14;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_13;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_12;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_11;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_10;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_9;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_8;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8) 
                         >> 0xfU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_7;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_6;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_5;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_4;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4) 
                         >> 0xfU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_3;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_2;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2) 
                         >> 0xfU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_1;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1) 
                     >> 0xfU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__refr_0;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0) 
                     >> 0xfU));
    }
    if ((0x200U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
            = (1U & ((1U & (~ (3U & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U) 
                                     >> 8U)))) && (1U 
                                                   & ((0x80U 
                                                       & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                       ? 
                                                      ((0x40U 
                                                        & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                        ? 
                                                       ((0x20U 
                                                         & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                         ? 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                              >> 0xfU))))))
                                                         : 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                              >> 0xfU)))))))
                                                        : 
                                                       ((0x20U 
                                                         & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                         ? 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                              >> 0xfU))))))
                                                         : 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                                              >> 0xfU))))))))
                                                       : 
                                                      ((0x40U 
                                                        & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                        ? 
                                                       ((0x20U 
                                                         & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                         ? 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                              >> 0xfU))))))
                                                         : 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                                              >> 0xfU)))))))
                                                        : 
                                                       ((0x20U 
                                                         & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                         ? 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                                              >> 0xfU))))))
                                                         : 
                                                        ((0x10U 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                          ? 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                                              >> 0xfU)))))
                                                          : 
                                                         ((8U 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                           ? 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                              >> 0xfU))))
                                                           : 
                                                          ((4U 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                            ? 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                                              >> 0xfU)))
                                                            : 
                                                           ((2U 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                             ? 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                                              >> 0xfU))
                                                             : 
                                                            ((1U 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                              ? 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                                              >> 0xfU))))))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
            = (0x7fU & ((0x100U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                         ? 0x2aU : ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                     ? ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                         ? ((0x20U 
                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                             ? ((0x10U 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                 ? 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17dU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x179U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x178U]))))
                                                 : 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x175U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x171U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x170U])))))
                                             : ((0x10U 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                 ? 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16dU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x169U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x168U]))))
                                                 : 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x165U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x161U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x160U]))))))
                                         : ((0x20U 
                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                             ? ((0x10U 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                 ? 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15dU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x159U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x158U]))))
                                                 : 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x155U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x151U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x150U])))))
                                             : ((0x10U 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                 ? 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14dU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x149U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x148U]))))
                                                 : 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x145U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x141U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x140U])))))))
                                     : ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                         ? ((0x20U 
                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                             ? ((0x10U 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                 ? 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13dU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x139U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x138U]))))
                                                 : 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x135U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x131U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x130U])))))
                                             : ((0x10U 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                 ? 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12dU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x129U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x128U]))))
                                                 : 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x125U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x121U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x120U]))))))
                                         : ((0x20U 
                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                             ? ((0x10U 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                 ? 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11dU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x119U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x118U]))))
                                                 : 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x115U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x111U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x110U])))))
                                             : ((0x10U 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                 ? 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10dU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x109U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x108U]))))
                                                 : 
                                                ((8U 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                  ? 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x105U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U])))
                                                  : 
                                                 ((4U 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                   ? 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U]))
                                                   : 
                                                  ((2U 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                    ? 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x101U])
                                                    : 
                                                   ((1U 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))
                                                     ? 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U] 
                                                        >> 0x10U))
                                                     : 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x100U]))))))))));
    } else if ((0x100U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                            = (1U & 
                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                >> 0x1fU));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                            = (0x7fU 
                                               & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                     >> 0x10U)));
                                    } else {
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                            = (1U & 
                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                                >> 0xfU));
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                            = (0x7fU 
                                               & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU]);
                                    }
                                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                                 >> 0x1fU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                                 >> 0xfU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU]);
                                }
                            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                                 >> 0x1fU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU] 
                                                 >> 0xfU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfdU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU]);
                            }
                        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                                 >> 0x1fU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                                 >> 0xfU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf9U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf8U]);
                        }
                    } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                                 >> 0x1fU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                                 >> 0xfU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf5U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf1U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf0U]);
                    }
                } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                                 >> 0x1fU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                                 >> 0xfU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xedU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe9U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe8U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe5U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe1U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe0U]);
                }
            } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                                 >> 0x1fU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                                 >> 0xfU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xddU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd9U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd8U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd5U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd1U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd0U]);
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcdU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc9U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc8U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc5U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc1U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc0U]);
            }
        } else if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                                 >> 0x1fU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                                 >> 0xfU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbdU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb9U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb8U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb5U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb1U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb0U]);
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xadU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa9U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa8U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa5U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa1U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa0U]);
            }
        } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x99U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x98U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x95U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x91U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x90U]);
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x89U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x88U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x85U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x81U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x80U]);
        }
    } else if ((0x80U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                                 >> 0x1fU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                               >> 0x10U)));
                                } else {
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                                 >> 0xfU));
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                        = (0x7fU & 
                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU]);
                                }
                            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU]);
                            }
                        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7dU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU]);
                        }
                    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x79U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x78U]);
                    }
                } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x75U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x71U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x70U]);
                }
            } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x69U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x68U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x65U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x61U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x60U]);
            }
        } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x59U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x58U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x55U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x51U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x50U]);
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x49U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x48U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x45U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x41U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x40U]);
        }
    } else if ((0x40U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                             >> 0x1fU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                 << 0x10U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                                   >> 0x10U)));
                            } else {
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU]);
                            }
                        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU]);
                        }
                    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3dU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU]);
                    }
                } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x39U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x38U]);
                }
            } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x35U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x31U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x30U]);
            }
        } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x29U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x28U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x25U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x21U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x20U]);
        }
    } else if ((0x20U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                         >> 0x1fU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                               >> 0x10U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU]);
                        }
                    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU]);
                    }
                } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1dU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU]);
                }
            } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x19U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x18U]);
            }
        } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10U]);
        }
    } else if ((0x10U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                           >> 0x10U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU]);
                    }
                } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU]);
                }
            } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdU]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU]);
            }
        } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[9U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[8U]);
        }
    } else if ((8U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U]);
                }
            } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U]);
            }
        } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[5U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U]);
        }
    } else if ((4U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U]);
            }
        } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U]);
        }
    } else if ((2U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[1U]);
        }
    } else if ((1U & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed), 4U))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                                      >> 0x10U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq562 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2171741_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq564 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U]);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
}
