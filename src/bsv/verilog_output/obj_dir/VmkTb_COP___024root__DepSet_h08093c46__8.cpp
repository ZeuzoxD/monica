// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

extern const VlUnpacked<SData/*9:0*/, 4> VmkTb_COP__ConstPool__TABLE_h5e3a9629_0;
extern const VlUnpacked<CData/*3:0*/, 16> VmkTb_COP__ConstPool__TABLE_h719cd722_0;
extern const VlUnpacked<CData/*7:0*/, 16> VmkTb_COP__ConstPool__TABLE_h9c487252_0;
extern const VlUnpacked<CData/*6:0*/, 16> VmkTb_COP__ConstPool__TABLE_hdcfb05ea_0;
extern const VlUnpacked<CData/*7:0*/, 16> VmkTb_COP__ConstPool__TABLE_he629c574_0;
extern const VlUnpacked<CData/*6:0*/, 16> VmkTb_COP__ConstPool__TABLE_hf26bbeb1_0;
extern const VlUnpacked<CData/*7:0*/, 16> VmkTb_COP__ConstPool__TABLE_hfe85cd56_0;
extern const VlUnpacked<CData/*6:0*/, 16> VmkTb_COP__ConstPool__TABLE_h1180610b_0;

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__11(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__11\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*1:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__activation_out_reg;
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_9__DOT__activation_out_reg = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter__024D_IN 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024D_IN 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh36732 
        = (0x3ffffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter) 
                        << 8U) + (0x1c0U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount) 
                                             - (IData)(1U)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh36732 
        = (0x3ffffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter) 
                        << 8U) + (0x1c0U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount) 
                                             - (IData)(1U)) 
                                            << 6U))));
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s2_n__024D_IN;
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage2)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_n 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s2_n__024D_IN;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count__024D_IN 
        = ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count__024D_IN 
        = ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count__024D_IN 
        = ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__chunks_processed__024D_IN 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__chunks_processed)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter__024D_IN 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__outputs_collected__024D_IN 
        = ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__outputs_collected);
    __Vtableidx8 = vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_readback_chunk_id_0_0_1_256_2_512_3_0_0___05Fq1 
        = VmkTb_COP__ConstPool__TABLE_h5e3a9629_0[__Vtableidx8];
    __Vtableidx7 = vlSelfRef.mkTb_COP__DOT__current_bram;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FVAL_3 
        = VmkTb_COP__ConstPool__TABLE_h719cd722_0[__Vtableidx7];
    __Vtableidx1 = vlSelfRef.mkTb_COP__DOT__current_bram;
    vlSelfRef.mkTb_COP__DOT__CASE_current_bram_1_131_2_131_3_131_4_132_5_13_ETC___05Fq1 
        = VmkTb_COP__ConstPool__TABLE_h9c487252_0[__Vtableidx1];
    __Vtableidx2 = vlSelfRef.mkTb_COP__DOT__current_bram;
    vlSelfRef.mkTb_COP__DOT__CASE_current_bram_1_0_2_16_3_32_4_16_5_32_6_48_ETC___05Fq2 
        = VmkTb_COP__ConstPool__TABLE_hdcfb05ea_0[__Vtableidx2];
    __Vtableidx3 = vlSelfRef.mkTb_COP__DOT__current_bram;
    vlSelfRef.mkTb_COP__DOT__CASE_current_bram_0_127_1_128_2_128_3_129_4_12_ETC___05Fq3 
        = VmkTb_COP__ConstPool__TABLE_he629c574_0[__Vtableidx3];
    __Vtableidx4 = vlSelfRef.mkTb_COP__DOT__current_bram;
    vlSelfRef.mkTb_COP__DOT__CASE_current_bram_0_0_1_0_2_64_3_0_4_32_5_0_6___05FETC___05Fq4 
        = VmkTb_COP__ConstPool__TABLE_hf26bbeb1_0[__Vtableidx4];
    __Vtableidx5 = vlSelfRef.mkTb_COP__DOT__current_bram;
    vlSelfRef.mkTb_COP__DOT__CASE_current_bram_0_132_1_132_2_132_3_132_4_13_ETC___05Fq5 
        = VmkTb_COP__ConstPool__TABLE_hfe85cd56_0[__Vtableidx5];
    __Vtableidx6 = vlSelfRef.mkTb_COP__DOT__current_bram;
    vlSelfRef.mkTb_COP__DOT__CASE_current_bram_0_24_1_40_2_56_3_72_4_8_5_24_ETC___05Fq6 
        = VmkTb_COP__ConstPool__TABLE_h1180610b_0[__Vtableidx6];
    vlSelfRef.mkTb_COP__DOT____VdfgRegularize_h33c78acf_0_1 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_ready) 
           & (0xdU > (IData)(vlSelfRef.mkTb_COP__DOT__current_bram)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_started) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_issued)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_load_weights_from_bram 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__computing)) 
           & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state)) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weights_ready)) 
                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_batch_ready))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete_5907_AND_readback_values_598_ETC___05F_d48825 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete) 
           & (IData)(((((((((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0x3f803f80U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0U]) 
                                                                                & (0x3f803f80U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U])) 
                                                                                & (0x41603f80U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U])) 
                                                                                & (0x41604160U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])) 
                                                                                & (0x41604160U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])) 
                                                                                & (0x42184218U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])) 
                                                                                & (0x42184218U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U])) 
                                                                                & (0x40004218U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[7U])) 
                                                                                & (0x40004000U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U])) 
                                                                                & (0x40004000U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U])) 
                                                                                & (0x41804180U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])) 
                                                                                & (0x41804180U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU])) 
                                                                                & (0x42284180U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xcU])) 
                                                                                & (0x42284228U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU])) 
                                                                                & (0x42284228U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU])) 
                                                                                & (0x40404040U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])) 
                                                                                & (0x40404040U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U])) 
                                                                                & (0x41904040U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x11U])) 
                                                                                & (0x41904190U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U])) 
                                                                                & (0x41904190U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U])) 
                                                                                & (0x42384238U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])) 
                                                                                & (0x42384238U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U])) 
                                                                                & (0x40804238U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x16U])) 
                                                                                & (0x40804080U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U])) 
                                                                                & (0x40804080U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U])) 
                                                                                & (0x41a041a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])) 
                                                                                & (0x41a041a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU])) 
                                                                                & (0x424841a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1bU])) 
                                                                                & (0x42484248U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU])) 
                                                                                & (0x42484248U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU])) 
                                                                                & (0x40a040a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])) 
                                                                                & (0x40a040a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU])) 
                                                                                & (0x421040a0U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x20U])) 
                                                                                & (0x42104210U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U])) 
                                                                                & (0x42104210U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U])) 
                                                                                & (0x42884288U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])) 
                                                                                & (0x42884288U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U])) 
                                                                                & (0x41004288U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U])) 
                                                                                & (0x41004100U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U])) 
                                                                                & (0x41004100U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U])) 
                                                                               & (0x42204220U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])) 
                                                                              & (0x42204220U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U])) 
                                                                             & (0x42984220U 
                                                                                == 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2aU])) 
                                                                            & (0x42984298U 
                                                                               == 
                                                                               vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2bU])) 
                                                                           & (0x42984298U 
                                                                              == 
                                                                              vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2cU])) 
                                                                          & (0x41104110U 
                                                                             == 
                                                                             vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2dU])) 
                                                                         & (0x41104110U 
                                                                            == 
                                                                            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2eU])) 
                                                                        & (0x42304110U 
                                                                           == 
                                                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2fU])) 
                                                                       & (0x42304230U 
                                                                          == 
                                                                          vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x30U])) 
                                                                      & (0x42304230U 
                                                                         == 
                                                                         vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x31U])) 
                                                                     & (0x42a042a0U 
                                                                        == 
                                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x32U])) 
                                                                    & (0x42a042a0U 
                                                                       == 
                                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x33U])) 
                                                                   & (0x412042a0U 
                                                                      == 
                                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x34U])) 
                                                                  & (0x41204120U 
                                                                     == 
                                                                     vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x35U])) 
                                                                 & (0x41204120U 
                                                                    == 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x36U])) 
                                                                & (0x42404240U 
                                                                   == 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x37U])) 
                                                               & (0x42404240U 
                                                                  == 
                                                                  vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x38U])) 
                                                              & (0x42a84240U 
                                                                 == 
                                                                 vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x39U])) 
                                                             & (0x42a842a8U 
                                                                == 
                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3aU])) 
                                                            & (0x42a842a8U 
                                                               == 
                                                               vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3bU])) 
                                                           & (0x41304130U 
                                                              == 
                                                              vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3cU])) 
                                                          & (0x41304130U 
                                                             == 
                                                             vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3dU])) 
                                                         & (0x42504130U 
                                                            == 
                                                            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3eU])) 
                                                        & (0x42504250U 
                                                           == 
                                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3fU])) 
                                                       & (0x42504250U 
                                                          == 
                                                          vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x40U])) 
                                                      & (0x42b042b0U 
                                                         == 
                                                         vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x41U])) 
                                                     & (0x42b042b0U 
                                                        == 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x42U])) 
                                                    & (0x414042b0U 
                                                       == 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U])) 
                                                   & (0x41404140U 
                                                      == 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U])) 
                                                  & (0x41404140U 
                                                     == 
                                                     vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U])) 
                                                 & (0x42604260U 
                                                    == 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U])) 
                                                & (0x42604260U 
                                                   == 
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U])) 
                                               & (0x42b84260U 
                                                  == 
                                                  vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U])) 
                                              & (0x42b842b8U 
                                                 == 
                                                 vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U])) 
                                             & (0x42b842b8U 
                                                == 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU])) 
                                            & (0x41504150U 
                                               == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU])) 
                                           & (0x41504150U 
                                              == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU])) 
                                          & (0x42704150U 
                                             == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU])) 
                                         & (0x42704270U 
                                            == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU])) 
                                        & (0x42704270U 
                                           == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU])) 
                                       & (0x42c042c0U 
                                          == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U])) 
                                      & (0x42c042c0U 
                                         == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U])) 
                                     & (0x40a042c0U 
                                        == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U])) 
                                    & (0x40a040a0U 
                                       == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U])) 
                                   & (0x40a040a0U == 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U])) 
                                  & (0x41b041b0U == 
                                     vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U])) 
                                 & (0x41b041b0U == 
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U])) 
                                & (0x426041b0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x57U])) 
                               & (0x42604260U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x58U])) 
                              & (0x42604260U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x59U])) 
                             & (0x40c040c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5aU])) 
                            & (0x40c040c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5bU])) 
                           & (0x420040c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU])) 
                          & (0x42004200U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU])) 
                         & (0x42004200U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU])) 
                        & (0x42684268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU])) 
                       & (0x42684268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U])) 
                      & (0x4268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x61U]))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_3 = ((3U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state)) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state)));
    vlSelfRef.mkTb_COP__DOT__cycle__024D_IN = ((IData)(1U) 
                                               + vlSelfRef.mkTb_COP__DOT__cycle);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown__024D_IN 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown))
            ? 3U : (7U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown) 
                          - (IData)(1U))));
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                                    >> 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                                    >> 0x1fU))))));
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & 0x2aU);
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U]);
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                                    >> 0xfU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                                    >> 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                                    >> 0x1fU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                                    >> 0xfU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                                    >> 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                                    >> 0x1fU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                                    >> 0xfU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                                    >> 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                                    >> 0x1fU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                                    >> 0xfU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                                    >> 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                                    >> 0x1fU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                                    >> 0xfU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                                    >> 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                                    >> 0x1fU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                                    >> 0xfU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                                    >> 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                                    >> 0x1fU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                                    >> 0xfU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                                    >> 0x1fU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                                                    >> 0x1fU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                               >> 2U))) && (1U & ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                                                    >> 0xfU))))));
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U]);
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U]);
    }
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U] 
                                                      >> 0x1fU))))))));
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & 0x2aU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU]);
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U]);
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x177U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x167U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x157U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x147U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x137U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x127U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x117U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x107U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x176U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x166U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x156U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x146U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x136U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x126U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x116U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10eU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x106U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x175U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x165U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x155U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x145U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x135U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x125U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x115U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10dU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x105U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x174U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x164U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x154U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x144U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x134U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x124U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x114U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x104U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x173U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x163U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x153U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x143U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x133U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x12bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x123U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x113U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x103U] 
                                                      >> 0xfU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xffU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfeU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfdU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfcU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfbU]);
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf7U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf6U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf5U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf4U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xefU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xedU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xecU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xebU]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe6U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe5U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe3U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdfU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xddU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdcU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdbU]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd6U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd5U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd3U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcfU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xceU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcdU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xccU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcbU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc7U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc3U]);
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbfU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbcU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbbU]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb6U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb5U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb3U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xafU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xaeU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xadU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xacU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xabU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa7U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa3U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x9bU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x97U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x96U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x95U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x94U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x93U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x8bU]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x87U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x86U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x85U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x84U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x83U]);
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x7bU]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x77U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x76U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x75U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x74U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x73U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x6bU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x67U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x66U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x65U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x64U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x63U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x5bU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x57U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x56U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x55U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x54U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x53U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x4bU]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x47U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x46U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x45U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x44U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x43U]);
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x3bU]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x37U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x36U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x35U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x34U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x33U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x2bU]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x27U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x26U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x25U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x24U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x23U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x1bU]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x17U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x16U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x15U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x14U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x13U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xfU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xeU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xdU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xcU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xbU]);
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[3U]);
    }
}
