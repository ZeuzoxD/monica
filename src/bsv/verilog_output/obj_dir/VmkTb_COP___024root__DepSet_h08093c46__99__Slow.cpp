// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h6e0f3f36_0;
extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h410dc175_0;
extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h4d280442_0;

VL_ATTR_COLD void VmkTb_COP___024root___stl_sequent__TOP__99(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___stl_sequent__TOP__99\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    VlWide<128>/*4095:0*/ __Vtemp_4;
    VlWide<128>/*4095:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    VlWide<128>/*4095:0*/ __Vtemp_11;
    VlWide<128>/*4095:0*/ __Vtemp_13;
    VlWide<128>/*4095:0*/ __Vtemp_15;
    VlWide<128>/*4095:0*/ __Vtemp_17;
    VlWide<128>/*4095:0*/ __Vtemp_19;
    VlWide<128>/*4095:0*/ __Vtemp_21;
    VlWide<128>/*4095:0*/ __Vtemp_23;
    VlWide<128>/*4095:0*/ __Vtemp_24;
    VlWide<128>/*4095:0*/ __Vtemp_25;
    VlWide<128>/*4095:0*/ __Vtemp_26;
    VlWide<128>/*4095:0*/ __Vtemp_27;
    VlWide<128>/*4095:0*/ __Vtemp_28;
    VlWide<128>/*4095:0*/ __Vtemp_29;
    VlWide<128>/*4095:0*/ __Vtemp_30;
    VlWide<128>/*4095:0*/ __Vtemp_31;
    VlWide<128>/*4095:0*/ __Vtemp_33;
    VlWide<128>/*4095:0*/ __Vtemp_35;
    VlWide<128>/*4095:0*/ __Vtemp_37;
    VlWide<128>/*4095:0*/ __Vtemp_39;
    VlWide<128>/*4095:0*/ __Vtemp_41;
    VlWide<128>/*4095:0*/ __Vtemp_43;
    VlWide<128>/*4095:0*/ __Vtemp_44;
    VlWide<128>/*4095:0*/ __Vtemp_46;
    VlWide<128>/*4095:0*/ __Vtemp_47;
    VlWide<128>/*4095:0*/ __Vtemp_48;
    VlWide<128>/*4095:0*/ __Vtemp_50;
    VlWide<128>/*4095:0*/ __Vtemp_51;
    VlWide<128>/*4095:0*/ __Vtemp_52;
    VlWide<128>/*4095:0*/ __Vtemp_53;
    VlWide<128>/*4095:0*/ __Vtemp_54;
    VlWide<128>/*4095:0*/ __Vtemp_55;
    VlWide<128>/*4095:0*/ __Vtemp_56;
    VlWide<128>/*4095:0*/ __Vtemp_57;
    VlWide<128>/*4095:0*/ __Vtemp_58;
    VlWide<128>/*4095:0*/ __Vtemp_59;
    VlWide<128>/*4095:0*/ __Vtemp_60;
    VlWide<128>/*4095:0*/ __Vtemp_61;
    VlWide<128>/*4095:0*/ __Vtemp_63;
    VlWide<128>/*4095:0*/ __Vtemp_65;
    VlWide<128>/*4095:0*/ __Vtemp_67;
    VlWide<128>/*4095:0*/ __Vtemp_68;
    VlWide<128>/*4095:0*/ __Vtemp_70;
    VlWide<128>/*4095:0*/ __Vtemp_72;
    VlWide<128>/*4095:0*/ __Vtemp_73;
    VlWide<128>/*4095:0*/ __Vtemp_74;
    VlWide<128>/*4095:0*/ __Vtemp_76;
    VlWide<128>/*4095:0*/ __Vtemp_77;
    VlWide<128>/*4095:0*/ __Vtemp_78;
    VlWide<128>/*4095:0*/ __Vtemp_79;
    VlWide<128>/*4095:0*/ __Vtemp_80;
    VlWide<128>/*4095:0*/ __Vtemp_81;
    VlWide<128>/*4095:0*/ __Vtemp_82;
    VlWide<128>/*4095:0*/ __Vtemp_83;
    VlWide<128>/*4095:0*/ __Vtemp_85;
    VlWide<128>/*4095:0*/ __Vtemp_86;
    VlWide<128>/*4095:0*/ __Vtemp_87;
    VlWide<128>/*4095:0*/ __Vtemp_88;
    VlWide<128>/*4095:0*/ __Vtemp_89;
    VlWide<128>/*4095:0*/ __Vtemp_90;
    VlWide<128>/*4095:0*/ __Vtemp_91;
    VlWide<128>/*4095:0*/ __Vtemp_92;
    VlWide<128>/*4095:0*/ __Vtemp_93;
    VlWide<128>/*4095:0*/ __Vtemp_94;
    VlWide<128>/*4095:0*/ __Vtemp_95;
    VlWide<128>/*4095:0*/ __Vtemp_96;
    VlWide<128>/*4095:0*/ __Vtemp_97;
    VlWide<128>/*4095:0*/ __Vtemp_98;
    VlWide<128>/*4095:0*/ __Vtemp_99;
    VlWide<128>/*4095:0*/ __Vtemp_100;
    VlWide<128>/*4095:0*/ __Vtemp_101;
    VlWide<128>/*4095:0*/ __Vtemp_103;
    VlWide<128>/*4095:0*/ __Vtemp_105;
    VlWide<128>/*4095:0*/ __Vtemp_107;
    VlWide<128>/*4095:0*/ __Vtemp_109;
    VlWide<128>/*4095:0*/ __Vtemp_111;
    VlWide<384>/*12287:0*/ __Vtemp_114;
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_254_TO_247_560_EQ___05FETC___05F_d8676 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_665)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BIT_255_566_EQ_sa_get_resu_ETC___05F_d8567)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5715466)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_559_BITS_254_TO___05FETC___05F_d8578)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_254_TO_247_560_ULT_sa_ETC___05F_d8568)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5715466))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5715490)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5715490) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_382)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2046)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2048)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2050)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2052)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2054)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2056)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2058)
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
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2046)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2048)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2050)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2052)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2054)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2056)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2058)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5715413)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_30_TO_23_0205_EQ_0_ETC___05F_d10321 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_672)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BIT_31_0211_EQ_sa_get_resu_ETC___05F_d10212)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5727604)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_559_BITS_30_TO_2_ETC___05F_d10223)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_30_TO_23_0205_ULT_sa___05FETC___05F_d10213)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5727604))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5727628)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5727628) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_396)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2242)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2244)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2246)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2248)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2250)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2252)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2254)
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
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2242)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2244)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2246)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2248)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2250)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2252)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2254)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5727551)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_46_TO_39_0087_EQ_0_ETC___05F_d10203 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_678)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BIT_47_0093_EQ_sa_get_resu_ETC___05F_d10094)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5726737)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_559_BITS_46_TO_3_ETC___05F_d10105)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_46_TO_39_0087_ULT_sa___05FETC___05F_d10095)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5726737))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5726761)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5726761) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_395)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2228)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2230)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2232)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2234)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2236)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2238)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2240)
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
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2228)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2230)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2232)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2234)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2236)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2238)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2240)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5726684)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_62_TO_55_970_EQ_0___05FETC___05F_d10086 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_685)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BIT_63_976_EQ_sa_get_resul_ETC___05F_d9977)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5725870)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_559_BITS_62_TO_5_ETC___05F_d9988)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_62_TO_55_970_ULT_sa_g_ETC___05F_d9978)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5725870))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5725894)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5725894) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_394)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2214)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2216)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2218)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2220)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2222)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2224)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2226)
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
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2214)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2216)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2218)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2220)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2222)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2224)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2226)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5725817)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_78_TO_71_852_EQ_0___05FETC___05F_d9968 
        = (0xffffU & ((IData)((0U == (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_692)
                           ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BIT_79_858_EQ_sa_get_resul_ETC___05F_d9859)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5725003)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_559_BITS_78_TO_7_ETC___05F_d9870)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_78_TO_71_852_ULT_sa_g_ETC___05F_d9860)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5725003))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5725027)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5725027) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_393)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2200)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2202)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2204)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2206)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2208)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2210)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2212)
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
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2200)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2202)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2204)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2206)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2208)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2210)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2212)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724950)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_559_BITS_94_TO_87_735_EQ_0___05FETC___05F_d9851 
        = (0xffffU & ((IData)((0U == (0x7fff0000U & 
                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U])))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5)
                       : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_699)
                           ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                               << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                            >> 0x10U))
                           : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BIT_95_741_EQ_sa_get_resul_ETC___05F_d9742)
                                            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5724136)
                                            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___0b1_CONCAT_IF_sa2_accumulator_559_BITS_94_TO_8_ETC___05F_d9753)
                                                ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_559_BITS_94_TO_87_735_ULT_sa_g_ETC___05F_d9743)
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                    >> 0xfU))
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5724136))) 
                                          << 0xfU)) 
                              | ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083))
                                  ? ((0x7f80U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5724160)) 
                                                 << 7U)) 
                                     | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083) 
                                                 >> 1U)))
                                  : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5724160) 
                                                  - 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_392)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2186)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2188)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2190)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2192)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2194)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2196)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2198)
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
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2186)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2188)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2190)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2192)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2194)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2196)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2198)
                                                             ? 0U
                                                             : 
                                                            (0xc0U 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083) 
                                                                << 6U)))
                                                            : 
                                                           (0xe0U 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083) 
                                                               << 5U)))
                                                           : 
                                                          (0xf0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083) 
                                                              << 4U)))
                                                          : 
                                                         (0xf8U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083) 
                                                             << 3U)))
                                                         : 
                                                        (0xfcU 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083) 
                                                            << 2U)))
                                                        : 
                                                       (0xfeU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083) 
                                                           << 1U)))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083)) 
                                                     << 1U))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tmp___05Fh5724083)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__x___05Fh4179 
        = (0x7ffU & ((0x400U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460))
                      : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_load_and_step_v_t_BIT_15_25_THEN_SEXT___05F0_CO_ETC___05F_d460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0U] 
        = ((((0x91U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x90U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[1U] 
        = ((((0x93U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x92U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[2U] 
        = ((((0x95U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x94U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[3U] 
        = ((((0x97U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x96U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[4U] 
        = ((((0x99U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x98U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x19U] 
        = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46124[0x14U]);
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__MUX_state__024write_1___05FSEL_1)
            ? 3U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__MUX_state__024write_1___05FSEL_2)
                     ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state))
                         ? 1U : 2U) : 2U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__a___05Fh2557 
        = (0xffffU & ((IData)((0ULL == (0xfffe00000ULL 
                                        & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data)))
                       ? (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                  >> 5U)) : ((IData)(
                                                     (0ULL 
                                                      == 
                                                      (0xfffe0ULL 
                                                       & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data)))
                                              ? (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                         >> 0x15U))
                                              : ((0x8000U 
                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__result_sign___05Fh2962)
                                                       : 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260)
                                                         ? (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                                    >> 0x24U))
                                                         : (IData)(
                                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                                    >> 0x14U)))
                                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__result_sign___05Fh2962))) 
                                                     << 0xfU)) 
                                                 | ((0x100U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907))
                                                     ? 
                                                    ((0x7f80U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986)) 
                                                         << 7U)) 
                                                     | (0x7fU 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x7f80U 
                                                      & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986) 
                                                          - 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
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
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14)
                                                            ? 
                                                           (0x1feU 
                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37)
                                                                    ? 
                                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41)
                                                                      ? 
                                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43)
                                                                       ? 0U
                                                                       : 
                                                                      (0xc0U 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                                                          << 6U)))
                                                                      : 
                                                                     (0xe0U 
                                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                                                         << 5U)))
                                                                     : 
                                                                    (0xf0U 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                                                        << 4U)))
                                                                    : 
                                                                   (0xf8U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                                                       << 3U)))
                                                                   : 
                                                                  (0xfcU 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                                                      << 2U)))
                                                                  : 
                                                                 (0xfeU 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907) 
                                                                     << 1U)))
                                                                 : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907)) 
                                                               << 1U))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907)))))))));
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x176U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x176U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x176U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27835[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x176U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x176U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x176U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29840[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x176U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x176U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x176U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36761[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x176U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x176U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x176U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38757[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15133[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17055[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12455[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18977[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[0U] 
        = ((((0x2f4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x179U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x179U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x179U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20899[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    VL_SEL_WWII(4096,12288, __Vtemp_1, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_2, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_3, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_4, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_5, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_6, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, 0x2000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_7, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1), vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_3___05FVAL_1, VmkTb_COP__ConstPool__CONST_h6e0f3f36_0);
    VL_COND_WIWW(4096, __Vtemp_9, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)), __Vtemp_6, __Vtemp_7);
    VL_COND_WIWW(4096, __Vtemp_11, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21)), __Vtemp_5, __Vtemp_9);
    VL_COND_WIWW(4096, __Vtemp_13, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)), __Vtemp_4, __Vtemp_11);
    VL_COND_WIWW(4096, __Vtemp_15, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2)), __Vtemp_3, __Vtemp_13);
    VL_COND_WIWW(4096, __Vtemp_17, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1)), __Vtemp_2, __Vtemp_15);
    if (((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1)) 
            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2)) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0)) 
          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1)) 
         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2))) {
        VL_ASSIGN_W(4096,__Vtemp_21, VmkTb_COP__ConstPool__CONST_h410dc175_0);
        VL_ASSIGN_W(4096,__Vtemp_46, VmkTb_COP__ConstPool__CONST_h410dc175_0);
    } else {
        VL_ASSIGN_W(4096,__Vtemp_21, VmkTb_COP__ConstPool__CONST_h4d280442_0);
        VL_ASSIGN_W(4096,__Vtemp_46, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    }
    VL_COND_WIWW(4096, __Vtemp_19, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0)), __Vtemp_1, __Vtemp_17);
    VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__024start_computation_c, 
                 (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0)) 
                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1))) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2))) 
                      | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20))) 
                     | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22))) 
                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1)) 
                  | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0) 
                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1)) 
                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2))), __Vtemp_19, __Vtemp_21);
    VL_SEL_WWII(4096,12288, __Vtemp_23, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_24, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_25, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_26, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_27, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_28, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_29, vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_30, vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r, 0x1000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_31, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0), __Vtemp_29, __Vtemp_30);
    VL_COND_WIWW(4096, __Vtemp_33, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)), __Vtemp_28, __Vtemp_31);
    VL_COND_WIWW(4096, __Vtemp_35, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21)), __Vtemp_27, __Vtemp_33);
    VL_COND_WIWW(4096, __Vtemp_37, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)), __Vtemp_26, __Vtemp_35);
    VL_COND_WIWW(4096, __Vtemp_39, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2)), __Vtemp_25, __Vtemp_37);
    VL_COND_WIWW(4096, __Vtemp_41, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1)), __Vtemp_24, __Vtemp_39);
    VL_COND_WIWW(4096, __Vtemp_43, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0)), __Vtemp_23, __Vtemp_41);
    VL_SEL_WWII(4096,12288, __Vtemp_44, vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r, 0x2000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_47, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1), vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FVAL_1, __Vtemp_46);
    VL_COND_WIWW(4096, __Vtemp_48, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2), __Vtemp_44, __Vtemp_47);
    VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__024start_computation_a, 
                 (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0)) 
                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1))) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2))) 
                      | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20))) 
                     | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22))) 
                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0)) 
                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1)), __Vtemp_43, __Vtemp_48);
    VL_SEL_WWII(4096,12288, __Vtemp_50, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_51, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_52, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_53, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_54, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_55, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_56, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_57, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, 0x1000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_58, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0), __Vtemp_56, __Vtemp_57);
    VL_COND_WIWW(4096, __Vtemp_59, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2), __Vtemp_55, __Vtemp_58);
    VL_COND_WIWW(4096, __Vtemp_60, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1), __Vtemp_54, __Vtemp_59);
    VL_COND_WIWW(4096, __Vtemp_61, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww), __Vtemp_53, __Vtemp_60);
    VL_COND_WIWW(4096, __Vtemp_63, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)), __Vtemp_52, __Vtemp_61);
    VL_COND_WIWW(4096, __Vtemp_65, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21)), __Vtemp_51, __Vtemp_63);
    VL_SEL_WWII(4096,12288, __Vtemp_68, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, 0x2000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_70, ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1)) 
                                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2)) 
                                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30)) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31)) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32)), VmkTb_COP__ConstPool__CONST_h410dc175_0, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    VL_COND_WIWW(4096, __Vtemp_72, (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1)) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2)), VmkTb_COP__ConstPool__CONST_h6e0f3f36_0, __Vtemp_70);
    VL_COND_WIWW(4096, __Vtemp_73, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1), vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_4___05FVAL_1, __Vtemp_72);
    VL_COND_WIWW(4096, __Vtemp_67, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)), __Vtemp_50, __Vtemp_65);
    VL_COND_WIWW(4096, __Vtemp_74, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2), __Vtemp_68, __Vtemp_73);
    VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__024start_computation_d, 
                 (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)) 
                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1) 
                           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22))) 
                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww)) 
                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1)) 
                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2)) 
                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0)) 
                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1)), __Vtemp_67, __Vtemp_74);
    VL_SEL_WWII(4096,12288, __Vtemp_76, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_77, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_78, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_79, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_80, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_81, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_82, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_83, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, 0x1000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_85, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)), __Vtemp_82, __Vtemp_83);
    VL_COND_WIWW(4096, __Vtemp_86, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2), __Vtemp_81, __Vtemp_85);
    VL_COND_WIWW(4096, __Vtemp_87, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1), __Vtemp_80, __Vtemp_86);
    VL_COND_WIWW(4096, __Vtemp_88, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0), __Vtemp_79, __Vtemp_87);
    VL_COND_WIWW(4096, __Vtemp_89, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2), __Vtemp_78, __Vtemp_88);
    VL_COND_WIWW(4096, __Vtemp_90, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1), __Vtemp_77, __Vtemp_89);
    VL_COND_WIWW(4096, __Vtemp_91, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww), __Vtemp_76, __Vtemp_90);
    VL_SEL_WWII(4096,12288, __Vtemp_92, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_93, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_94, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_95, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_96, vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_97, vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_98, vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, 0x2000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_99, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2), __Vtemp_98, vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_2___05FVAL_1);
    VL_COND_WIWW(4096, __Vtemp_100, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1), __Vtemp_97, __Vtemp_99);
    VL_COND_WIWW(4096, __Vtemp_101, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0), __Vtemp_96, __Vtemp_100);
    VL_COND_WIWW(4096, __Vtemp_103, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32)), __Vtemp_95, __Vtemp_101);
    VL_COND_WIWW(4096, __Vtemp_105, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31)), __Vtemp_94, __Vtemp_103);
    VL_COND_WIWW(4096, __Vtemp_107, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30)), __Vtemp_93, __Vtemp_105);
    VL_COND_WIWW(4096, __Vtemp_109, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)), __Vtemp_92, __Vtemp_107);
    VL_COND_WIWW(4096, __Vtemp_111, (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                                            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)) 
                                           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30))) 
                                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31))) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                                            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32))) 
                                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0)) 
                                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1)) 
                                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2)) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1)), __Vtemp_109, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__024start_computation_b, 
                 ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww) 
                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1)) 
                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2)) 
                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0)) 
                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1)) 
                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2)) 
                   | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20))) 
                  | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1) 
                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))), __Vtemp_91, __Vtemp_111);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                                | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20) 
                                   | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                                      | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                                            | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22) 
                                               | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0) 
                                                  | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1) 
                                                     | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2) 
                                                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww) 
                                                           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1) 
                                                              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2) 
                                                                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0) 
                                                                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1) 
                                                                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2))))))))))))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_352) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k__024EN) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k__024EN)
            ? 0U : (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load)
                               ? ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                               : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data)
                                   ? 1U : 0x2aaU))));
    VL_COND_WIWW(12288, __Vtemp_114, (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)), vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v, vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r);
    VL_COND_WIWW(12288, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input__024D_IN, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_sa1_accumulator__024write_1___05FSEL_2), __Vtemp_114, vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024D_IN);
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_344 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_sa1_accumulator__024write_1___05FSEL_2) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_collect_result));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_31_TO_16_41_ULE_findMax_vec_ETC___05F_d443)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_31_TO_16_41_ULE_findMax_vec_ETC___05F_d443)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_15_TO_0_55_ULE_findMax_vec___05FETC___05F_d457)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_15_TO_0_55_ULE_findMax_vec___05FETC___05F_d457)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[1U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_63_TO_48_12_ULE_findMax_vec_ETC___05F_d414)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_63_TO_48_12_ULE_findMax_vec_ETC___05F_d414)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_47_TO_32_26_ULE_findMax_vec_ETC___05F_d428)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_47_TO_32_26_ULE_findMax_vec_ETC___05F_d428)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[2U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_95_TO_80_83_ULE_findMax_vec_ETC___05F_d385)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_95_TO_80_83_ULE_findMax_vec_ETC___05F_d385)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_79_TO_64_97_ULE_findMax_vec_ETC___05F_d399)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_79_TO_64_97_ULE_findMax_vec_ETC___05F_d399)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[3U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_127_TO_112_54_ULE_findMax_v_ETC___05F_d356)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_127_TO_112_54_ULE_findMax_v_ETC___05F_d356)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_111_TO_96_68_ULE_findMax_ve_ETC___05F_d370)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_111_TO_96_68_ULE_findMax_ve_ETC___05F_d370)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[4U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_159_TO_144_25_ULE_findMax_v_ETC___05F_d327)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_159_TO_144_25_ULE_findMax_v_ETC___05F_d327)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_143_TO_128_39_ULE_findMax_v_ETC___05F_d341)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_143_TO_128_39_ULE_findMax_v_ETC___05F_d341)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[5U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_191_TO_176_96_ULE_findMax_v_ETC___05F_d298)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_191_TO_176_96_ULE_findMax_v_ETC___05F_d298)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_175_TO_160_10_ULE_findMax_v_ETC___05F_d312)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_175_TO_160_10_ULE_findMax_v_ETC___05F_d312)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[6U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_223_TO_208_67_ULE_findMax_v_ETC___05F_d269)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_223_TO_208_67_ULE_findMax_v_ETC___05F_d269)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_207_TO_192_81_ULE_findMax_v_ETC___05F_d283)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_207_TO_192_81_ULE_findMax_v_ETC___05F_d283)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[7U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_255_TO_240_38_ULE_findMax_v_ETC___05F_d240)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_255_TO_240_38_ULE_findMax_v_ETC___05F_d240)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_239_TO_224_52_ULE_findMax_v_ETC___05F_d254)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_239_TO_224_52_ULE_findMax_v_ETC___05F_d254)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[8U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_287_TO_272_09_ULE_findMax_v_ETC___05F_d211)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_287_TO_272_09_ULE_findMax_v_ETC___05F_d211)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_271_TO_256_23_ULE_findMax_v_ETC___05F_d225)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_271_TO_256_23_ULE_findMax_v_ETC___05F_d225)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[9U] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_319_TO_304_80_ULE_findMax_v_ETC___05F_d182)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_319_TO_304_80_ULE_findMax_v_ETC___05F_d182)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_303_TO_288_94_ULE_findMax_v_ETC___05F_d196)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_303_TO_288_94_ULE_findMax_v_ETC___05F_d196)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xaU] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_351_TO_336_51_ULE_findMax_v_ETC___05F_d153)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_351_TO_336_51_ULE_findMax_v_ETC___05F_d153)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_335_TO_320_65_ULE_findMax_v_ETC___05F_d167)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_335_TO_320_65_ULE_findMax_v_ETC___05F_d167)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xbU] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_383_TO_368_22_ULE_findMax_v_ETC___05F_d124)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_383_TO_368_22_ULE_findMax_v_ETC___05F_d124)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_367_TO_352_36_ULE_findMax_v_ETC___05F_d138)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_367_TO_352_36_ULE_findMax_v_ETC___05F_d138)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xcU] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_415_TO_400_3_ULE_findMax_ve_ETC___05F_d95)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_415_TO_400_3_ULE_findMax_ve_ETC___05F_d95)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_399_TO_384_07_ULE_findMax_v_ETC___05F_d109)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_399_TO_384_07_ULE_findMax_v_ETC___05F_d109)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xdU] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_447_TO_432_4_ULE_findMax_ve_ETC___05F_d66)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_447_TO_432_4_ULE_findMax_ve_ETC___05F_d66)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_431_TO_416_8_ULE_findMax_ve_ETC___05F_d80)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_431_TO_416_8_ULE_findMax_ve_ETC___05F_d80)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xeU] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_479_TO_464_5_ULE_findMax_ve_ETC___05F_d37)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_479_TO_464_5_ULE_findMax_ve_ETC___05F_d37)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_463_TO_448_9_ULE_findMax_ve_ETC___05F_d51)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_463_TO_448_9_ULE_findMax_ve_ETC___05F_d51)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xfU] 
        = (((((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
               | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU]) 
              >> 0x1fU) ? (((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU]) 
                            >> 0x1fU) ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_511_TO_496_ULE_findMax_vec___05FETC___05F_d8)
                                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                                >> 0x10U))
                                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
                                                >> 0x10U)))
                            : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                >> 0x1fU) ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
                                                >> 0x10U))
                                : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                    << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                                 >> 0x10U))))
              : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_511_TO_496_ULE_findMax_vec___05FETC___05F_d8)
                  ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
                      << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
                                   >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                                    >> 0x10U)))) 
            << 0x10U) | (0xffffU & ((0x8000U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                                | vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU]))
                                     ? ((0x8000U & 
                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
                                          & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU]))
                                         ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_495_TO_480_0_ULE_findMax_ve_ETC___05F_d22)
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU])
                                         : ((0x8000U 
                                             & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU])
                                             ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU]
                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU]))
                                     : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_495_TO_480_0_ULE_findMax_ve_ETC___05F_d22)
                                         ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU]
                                         : vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU]))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_9 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_185 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_187 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_189 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_191 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_193 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_195 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_197 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_0 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_73 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_75 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_77 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_79 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_81 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_83 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_85 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_7 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_199 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_201 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_203 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_205 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_207 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_209 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_211 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_2 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_87 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_89 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_91 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_93 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_95 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_97 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_99 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_5 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_213 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_215 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_217 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_219 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_221 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_223 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_225 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_101 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_103 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_105 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_107 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_109 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_111 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_113 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_3 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_227 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_229 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_231 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_233 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_235 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_237 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_239 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_6 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_115 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_117 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_119 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_121 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_123 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_125 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_127 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_1 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_241 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_243 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_245 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_247 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_249 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_251 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_253 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_8 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_129 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_131 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_133 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_135 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_137 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_139 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_141 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_15 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_255 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_257 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_259 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_261 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_263 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_265 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_267 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_10 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_143 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_145 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_147 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_149 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_151 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_153 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_155 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_269 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_271 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_273 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_275 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_277 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_279 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_281 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_11 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_157 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_159 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_161 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_163 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_165 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_167 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_169 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_13 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_283 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_285 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_287 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_289 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_291 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_293 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_295 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_12 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_171 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_173 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_175 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_177 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_179 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_181 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_183 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                              << 6U))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FPSEL_2 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_td) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tf) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_pp) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_bb) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_aa) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_f) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_e) 
                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_d) 
                                | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_state) 
                                   | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmr) 
                                      | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmv) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmk) 
                                            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_x)))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_readback_issue_read 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_issued)) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_started) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete)) 
                 & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_td)) 
                    & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tf)) 
                       & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_pp)) 
                          & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_bb)) 
                             & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_aa)) 
                                & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_f)) 
                                   & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_e)) 
                                      & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_d)) 
                                         & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_state)) 
                                            & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmr)) 
                                               & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmv)) 
                                                  & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmk)) 
                                                     & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_x)) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2401) 
                                                           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r2_load)) 
                                                              & ((0x21U 
                                                                  != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2413))))))))))))))))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.__VdfgRegularize_h6171c202_0_2 = ((3U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                                                & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_vv)) 
                                                   & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_data_loaded__024EN))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_108)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_109 
        = (IData)(((0U == (0xc0U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_108)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0U] 
        = ((((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7432[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7427[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x155U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x155U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x155U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[1U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x156U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x156U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x156U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[2U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x157U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x157U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x157U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[3U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x158U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x158U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x158U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x26U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x27U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x28U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x24U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x29U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x25U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40816[0x2aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40796[0x26U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0U] 
        = ((((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[1U] 
        = ((((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[2U] 
        = ((((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[3U] 
        = ((((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15fU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15fU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x15fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10592[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10571[0x1fU];
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d376 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) <= (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf 
                                                  >> 0x2bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d377 
        = ((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__a___05Fh2557) 
                     >> 7U)) < (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf 
                                                 >> 0x2bU))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x175U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x175U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x175U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27840[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x175U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x175U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x175U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29845[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x175U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x175U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x175U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36766[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x175U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x175U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x175U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38762[9U];
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__result_vector__024EN)
            ? 3U : ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state))
                     ? 0U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a__024EN)
                              ? 1U : 2U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__result_vector__024EN) 
           | ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a__024EN) 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a__024EN))));
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
}
