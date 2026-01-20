// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTb_COP__Syms.h"


VL_ATTR_COLD void VmkTb_COP___024root__trace_full_0_sub_29(VmkTb_COP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root__trace_full_0_sub_29\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+954648,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x67U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954649,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady));
    bufp->fullSData(oldp+954650,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954651,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954652,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954653,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x4dU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954654,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954655,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954656,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(3U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954657,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x4dU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady));
    bufp->fullSData(oldp+954659,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954660,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954661,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x1eU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954662,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x68U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954663,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954664,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954665,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x1eU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954666,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x68U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954667,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady));
    bufp->fullSData(oldp+954668,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954669,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954670,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x1fU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954671,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x69U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954672,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954673,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954674,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x1fU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954675,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x69U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady));
    bufp->fullSData(oldp+954677,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954678,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954679,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x20U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954680,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x6aU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954681,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954682,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954683,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x20U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954684,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x6aU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954685,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady));
    bufp->fullSData(oldp+954686,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954687,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954688,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x21U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954689,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x6bU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954690,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954691,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954692,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x21U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954693,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x6bU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954694,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady));
    bufp->fullSData(oldp+954695,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954696,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954697,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x22U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954698,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x6cU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954699,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954700,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954701,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x22U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954702,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x6cU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954703,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady));
    bufp->fullSData(oldp+954704,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954705,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954706,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x23U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954707,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x6dU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954708,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954709,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954710,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x23U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954711,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x6dU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954712,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady));
    bufp->fullSData(oldp+954713,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954714,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954715,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x24U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954716,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x6eU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954717,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954718,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954719,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x24U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954720,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x6eU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954721,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady));
    bufp->fullSData(oldp+954722,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954723,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954724,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x25U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954725,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x6fU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954726,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954727,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954728,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x25U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954729,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x6fU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954730,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady));
    bufp->fullSData(oldp+954731,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954732,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954733,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x26U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954734,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x70U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954735,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954736,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954737,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x26U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954738,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x70U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954739,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady));
    bufp->fullSData(oldp+954740,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954741,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954742,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x27U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954743,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x71U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954744,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954745,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954746,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x27U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954747,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x71U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954748,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady));
    bufp->fullSData(oldp+954749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954750,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954751,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(4U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954752,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x4eU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954753,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954754,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954755,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(4U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954756,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x4eU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954757,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady));
    bufp->fullSData(oldp+954758,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954759,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954760,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x28U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954761,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x72U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954762,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954763,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954764,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x28U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954765,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x72U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady));
    bufp->fullSData(oldp+954767,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954768,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954769,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x29U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954770,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x73U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954771,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954772,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954773,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x29U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954774,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x73U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954775,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady));
    bufp->fullSData(oldp+954776,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954777,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954778,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x2aU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954779,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x74U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954780,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954781,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954782,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x2aU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954783,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x74U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954784,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady));
    bufp->fullSData(oldp+954785,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954786,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954787,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x2bU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954788,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x75U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954789,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954790,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954791,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x2bU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954792,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x75U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954793,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady));
    bufp->fullSData(oldp+954794,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954795,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954796,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x2cU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954797,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x76U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954798,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954799,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954800,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x2cU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954801,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x76U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954802,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady));
    bufp->fullSData(oldp+954803,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954804,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954805,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x2dU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954806,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x77U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954807,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954808,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954809,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x2dU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954810,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x77U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954811,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady));
    bufp->fullSData(oldp+954812,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954813,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954814,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x2eU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954815,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x78U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954816,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954817,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954818,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x2eU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954819,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x78U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954820,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady));
    bufp->fullSData(oldp+954821,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954822,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954823,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x2fU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954824,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x79U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954825,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954827,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x2fU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954828,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x79U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954829,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady));
    bufp->fullSData(oldp+954830,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954831,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954832,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x30U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954833,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x7aU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954834,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954835,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954836,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x30U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954837,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x7aU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954838,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady));
    bufp->fullSData(oldp+954839,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954840,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954841,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x31U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954842,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x7bU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954843,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954844,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954845,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x31U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954846,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x7bU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954847,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady));
    bufp->fullSData(oldp+954848,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954849,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954850,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(5U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954851,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x4fU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954852,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954853,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954854,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(5U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954855,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x4fU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954856,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady));
    bufp->fullSData(oldp+954857,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954858,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954859,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x32U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954860,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x7cU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954861,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954862,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954863,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x32U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954864,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x7cU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954865,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady));
    bufp->fullSData(oldp+954866,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954867,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954868,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x33U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954869,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x7dU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954870,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954871,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954872,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x33U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954873,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x7dU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954874,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady));
    bufp->fullSData(oldp+954875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954876,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954877,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x34U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954878,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x7eU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954879,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954880,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954881,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x34U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954882,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x7eU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954883,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady));
    bufp->fullSData(oldp+954884,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954885,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954886,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x35U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954887,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x7fU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954888,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954889,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954890,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x35U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954891,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x7fU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954892,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady));
    bufp->fullSData(oldp+954893,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954894,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954895,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x36U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954896,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x80U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954897,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954898,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954899,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x36U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954900,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x80U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954901,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady));
    bufp->fullSData(oldp+954902,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954903,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954904,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x37U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954905,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x81U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954906,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954907,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954908,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x37U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954909,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x81U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954910,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady));
    bufp->fullSData(oldp+954911,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954912,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954913,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x38U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954914,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x82U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954915,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954916,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954917,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x38U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954918,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x82U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954919,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady));
    bufp->fullSData(oldp+954920,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954921,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954922,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x39U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954923,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x83U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954924,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954925,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954926,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x39U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954927,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x83U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954928,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady));
    bufp->fullSData(oldp+954929,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954930,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954931,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x3aU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954932,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x84U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954933,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954934,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954935,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x3aU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954936,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x84U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954937,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady));
    bufp->fullSData(oldp+954938,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954939,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954940,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x3bU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954941,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x85U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954942,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954943,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954944,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x3bU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954945,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x85U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954946,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady));
    bufp->fullSData(oldp+954947,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954948,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954949,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(6U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954950,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x50U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954951,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954952,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954953,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(6U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954954,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x50U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954955,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady));
    bufp->fullSData(oldp+954956,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954957,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954958,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x3cU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954959,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x86U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954960,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954961,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954962,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x3cU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954963,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x86U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954964,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady));
    bufp->fullSData(oldp+954965,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954966,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954967,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x3dU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954968,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x87U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954969,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954970,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954971,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x3dU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954972,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x87U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954973,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady));
    bufp->fullSData(oldp+954974,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954975,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954976,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x3eU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954977,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x88U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954978,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954979,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954980,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x3eU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954981,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x88U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954982,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady));
    bufp->fullSData(oldp+954983,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954984,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954985,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x3fU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954986,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x89U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954987,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954988,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954989,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x3fU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954990,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x89U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954991,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady));
    bufp->fullSData(oldp+954992,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+954993,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+954994,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x40U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+954995,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x8aU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+954996,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+954997,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+954998,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x40U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+954999,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x8aU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955000,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady));
    bufp->fullSData(oldp+955001,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955002,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955003,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x41U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955004,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x8bU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955005,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955006,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955007,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x41U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955008,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x8bU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955009,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady));
    bufp->fullSData(oldp+955010,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955011,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955012,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x42U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955013,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x8cU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955014,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955015,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955016,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x42U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955017,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x8cU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955018,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady));
    bufp->fullSData(oldp+955019,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955020,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955021,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x43U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955022,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x8dU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955023,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955024,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955025,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x43U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955026,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x8dU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955027,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady));
    bufp->fullSData(oldp+955028,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955029,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955030,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x44U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955031,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x8eU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955032,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955033,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955034,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x44U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955035,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x8eU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955036,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady));
    bufp->fullSData(oldp+955037,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955038,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955039,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x45U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955040,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x8fU) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955041,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955042,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955043,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x45U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955044,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x8fU) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955045,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady));
    bufp->fullSData(oldp+955046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955047,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955048,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(7U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955049,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x51U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955050,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955051,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955052,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(7U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955053,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x51U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955054,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady));
    bufp->fullSData(oldp+955055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955056,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955057,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x46U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955058,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x90U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955059,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955060,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955061,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x46U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955062,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x90U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955063,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady));
    bufp->fullSData(oldp+955064,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955065,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955066,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x47U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955067,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x91U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955068,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955069,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955070,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x47U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955071,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x91U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955072,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady));
    bufp->fullSData(oldp+955073,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955074,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955075,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x48U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955076,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x92U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955077,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955078,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955079,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x48U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955080,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x92U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955081,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady));
    bufp->fullSData(oldp+955082,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955083,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955084,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x49U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955085,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x93U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955086,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955087,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955088,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x49U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955089,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x93U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955090,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady));
    bufp->fullSData(oldp+955091,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955092,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955093,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(8U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955094,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x52U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955095,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955096,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955097,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(8U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955098,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x52U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955099,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady));
    bufp->fullSData(oldp+955100,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOA_R),16);
    bufp->fullSData(oldp+955101,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOB_R),16);
    bufp->fullSData(oldp+955102,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(9U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullSData(oldp+955103,((0xfffU & VL_DIV_III(18, 
                                                      (0x3ffffU 
                                                       & ((IData)(0x53U) 
                                                          + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),12);
    bufp->fullBit(oldp+955104,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__024ENA));
    bufp->fullBit(oldp+955105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__024ENB));
    bufp->fullBit(oldp+955106,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(9U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955107,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses) 
                                & (0x23fffU >= (0x3ffffU 
                                                & ((IData)(0x53U) 
                                                   + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))))));
    bufp->fullBit(oldp+955108,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady));
    bufp->fullBit(oldp+955109,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses));
    bufp->fullBit(oldp+955110,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_doReading));
    bufp->fullCData(oldp+955111,((7U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount)))),3);
    bufp->fullBit(oldp+955112,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__MUX_cycleCount__024write_1___05FSEL_1));
    bufp->fullBit(oldp+955113,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__MUX_state__024write_1___05FSEL_1));
    bufp->fullIData(oldp+955114,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268),18);
    bufp->fullIData(oldp+955115,((0x3ffffU & ((IData)(6U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955116,((0x3ffffU & ((IData)(7U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955117,((0x3ffffU & ((IData)(8U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955118,((0x3ffffU & ((IData)(9U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955119,((0x3ffffU & ((IData)(0xaU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955120,((0x3ffffU & ((IData)(0xbU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955121,((0x3ffffU & ((IData)(0xcU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955122,((0x3ffffU & ((IData)(0xdU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955123,((0x3ffffU & ((IData)(0xeU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955124,((0x3ffffU & ((IData)(0xfU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955125,((0x3ffffU & ((IData)(0x10U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955126,((0x3ffffU & ((IData)(0x11U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955127,((0x3ffffU & ((IData)(0x12U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955128,((0x3ffffU & ((IData)(0x13U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955129,((0x3ffffU & ((IData)(0x14U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955130,((0x3ffffU & ((IData)(0x15U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955131,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104),18);
    bufp->fullIData(oldp+955132,((0x3ffffU & ((IData)(1U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955133,((0x3ffffU & ((IData)(2U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955134,((0x3ffffU & ((IData)(0x16U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955135,((0x3ffffU & ((IData)(3U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955136,((0x3ffffU & ((IData)(4U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955137,((0x3ffffU & ((IData)(5U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955138,((0x3ffffU & ((IData)(6U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955139,((0x3ffffU & ((IData)(7U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955140,((0x3ffffU & ((IData)(0x17U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955141,((0x3ffffU & ((IData)(8U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955142,((0x3ffffU & ((IData)(9U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955143,((0x3ffffU & ((IData)(0xaU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955144,((0x3ffffU & ((IData)(0xbU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955145,((0x3ffffU & ((IData)(0xcU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955146,((0x3ffffU & ((IData)(0xdU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955147,((0x3ffffU & ((IData)(0x18U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955148,((0x3ffffU & ((IData)(0xeU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955149,((0x3ffffU & ((IData)(0xfU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955150,((0x3ffffU & ((IData)(0x10U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955151,((0x3ffffU & ((IData)(0x11U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955152,((0x3ffffU & ((IData)(0x12U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955153,((0x3ffffU & ((IData)(0x13U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955154,((0x3ffffU & ((IData)(0x19U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955155,((0x3ffffU & ((IData)(0x14U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955156,((0x3ffffU & ((IData)(0x15U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955157,((0x3ffffU & ((IData)(0x16U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955158,((0x3ffffU & ((IData)(0x17U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955159,((0x3ffffU & ((IData)(0x18U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955160,((0x3ffffU & ((IData)(0x1aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955161,((0x3ffffU & ((IData)(0x19U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955162,((0x3ffffU & ((IData)(0x1aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955163,((0x3ffffU & ((IData)(0x1bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955164,((0x3ffffU & ((IData)(0x1cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955165,((0x3ffffU & ((IData)(0x1dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955166,((0x3ffffU & ((IData)(0x1eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955167,((0x3ffffU & ((IData)(0x1bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955168,((0x3ffffU & ((IData)(0x1fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955169,((0x3ffffU & ((IData)(0x20U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955170,((0x3ffffU & ((IData)(0x21U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955171,((0x3ffffU & ((IData)(0x22U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955172,((0x3ffffU & ((IData)(0x23U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955173,((0x3ffffU & ((IData)(0x24U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955174,((0x3ffffU & ((IData)(0x1cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955175,((0x3ffffU & ((IData)(0x25U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955176,((0x3ffffU & ((IData)(0x26U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955177,((0x3ffffU & ((IData)(0x27U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955178,((0x3ffffU & ((IData)(0x28U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955179,((0x3ffffU & ((IData)(0x29U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955180,((0x3ffffU & ((IData)(0x2aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955181,((0x3ffffU & ((IData)(0x1dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955182,((0x3ffffU & ((IData)(0x2bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955183,((0x3ffffU & ((IData)(0x2cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955184,((0x3ffffU & ((IData)(0x2dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955185,((0x3ffffU & ((IData)(0x2eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955186,((0x3ffffU & ((IData)(0x2fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955187,((0x3ffffU & ((IData)(0x1eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955188,((0x3ffffU & ((IData)(0x30U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955189,((0x3ffffU & ((IData)(0x31U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955190,((0x3ffffU & ((IData)(0x32U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955191,((0x3ffffU & ((IData)(0x33U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955192,((0x3ffffU & ((IData)(0x34U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955193,((0x3ffffU & ((IData)(0x35U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955194,((0x3ffffU & ((IData)(0x1fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955195,((0x3ffffU & ((IData)(0x36U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955196,((0x3ffffU & ((IData)(0x37U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955197,((0x3ffffU & ((IData)(0x38U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955198,((0x3ffffU & ((IData)(0x39U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955199,((0x3ffffU & ((IData)(0x3aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955200,((0x3ffffU & ((IData)(0x3bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955201,((0x3ffffU & ((IData)(0x20U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955202,((0x3ffffU & ((IData)(0x3cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955203,((0x3ffffU & ((IData)(0x3dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955204,((0x3ffffU & ((IData)(0x3eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955205,((0x3ffffU & ((IData)(0x3fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955206,((0x3ffffU & ((IData)(0x40U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955207,((0x3ffffU & ((IData)(0x21U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955208,((0x3ffffU & ((IData)(0x41U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955209,((0x3ffffU & ((IData)(0x42U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955210,((0x3ffffU & ((IData)(0x43U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955211,((0x3ffffU & ((IData)(0x44U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955212,((0x3ffffU & ((IData)(0x45U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955213,((0x3ffffU & ((IData)(0x46U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955214,((0x3ffffU & ((IData)(0x22U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955215,((0x3ffffU & ((IData)(0x47U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955216,((0x3ffffU & ((IData)(0x48U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955217,((0x3ffffU & ((IData)(0x49U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955218,((0x3ffffU & ((IData)(0x23U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955219,((0x3ffffU & ((IData)(0x24U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955220,((0x3ffffU & ((IData)(0x25U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955221,((0x3ffffU & ((IData)(0x26U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955222,((0x3ffffU & ((IData)(0x27U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955223,((0x3ffffU & ((IData)(0x28U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955224,((0x3ffffU & ((IData)(0x29U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955225,((0x3ffffU & ((IData)(0x2aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955226,((0x3ffffU & ((IData)(0x2bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955227,((0x3ffffU & ((IData)(0x2cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955228,((0x3ffffU & ((IData)(0x2dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955229,((0x3ffffU & ((IData)(0x2eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955230,((0x3ffffU & ((IData)(0x2fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955231,((0x3ffffU & ((IData)(0x30U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955232,((0x3ffffU & ((IData)(0x31U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955233,((0x3ffffU & ((IData)(0x32U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955234,((0x3ffffU & ((IData)(0x33U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955235,((0x3ffffU & ((IData)(0x34U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955236,((0x3ffffU & ((IData)(1U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955237,((0x3ffffU & ((IData)(0x35U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955238,((0x3ffffU & ((IData)(0x36U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955239,((0x3ffffU & ((IData)(0x37U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955240,((0x3ffffU & ((IData)(0x38U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955241,((0x3ffffU & ((IData)(0x39U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955242,((0x3ffffU & ((IData)(0x3aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955243,((0x3ffffU & ((IData)(0x3bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955244,((0x3ffffU & ((IData)(0x3cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955245,((0x3ffffU & ((IData)(0x3dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955246,((0x3ffffU & ((IData)(0x3eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955247,((0x3ffffU & ((IData)(2U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955248,((0x3ffffU & ((IData)(0x3fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955249,((0x3ffffU & ((IData)(0x40U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955250,((0x3ffffU & ((IData)(0x41U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955251,((0x3ffffU & ((IData)(0x42U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955252,((0x3ffffU & ((IData)(0x43U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955253,((0x3ffffU & ((IData)(0x44U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955254,((0x3ffffU & ((IData)(0x45U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955255,((0x3ffffU & ((IData)(0x46U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955256,((0x3ffffU & ((IData)(0x47U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955257,((0x3ffffU & ((IData)(0x48U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955258,((0x3ffffU & ((IData)(3U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955259,((0x3ffffU & ((IData)(0x49U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955260,((0x3ffffU & ((IData)(4U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955261,((0x3ffffU & ((IData)(5U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955262,((0x3ffffU & ((IData)(0x50U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955263,((0x3ffffU & ((IData)(0x51U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955264,((0x3ffffU & ((IData)(0x52U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955265,((0x3ffffU & ((IData)(0x53U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955266,((0x3ffffU & ((IData)(0x54U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955267,((0x3ffffU & ((IData)(0x55U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955268,((0x3ffffU & ((IData)(0x56U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955269,((0x3ffffU & ((IData)(0x57U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955270,((0x3ffffU & ((IData)(0x58U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955271,((0x3ffffU & ((IData)(0x59U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955272,((0x3ffffU & ((IData)(0x5aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955273,((0x3ffffU & ((IData)(0x5bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955274,((0x3ffffU & ((IData)(0x5cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955275,((0x3ffffU & ((IData)(0x5dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955276,((0x3ffffU & ((IData)(0x5eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955277,((0x3ffffU & ((IData)(0x5fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955278,((0x3ffffU & ((IData)(0x4aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955279,((0x3ffffU & ((IData)(0x4bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955280,((0x3ffffU & ((IData)(0x4cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955281,((0x3ffffU & ((IData)(0x60U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955282,((0x3ffffU & ((IData)(0x4dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955283,((0x3ffffU & ((IData)(0x4eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955284,((0x3ffffU & ((IData)(0x4fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955285,((0x3ffffU & ((IData)(0x50U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955286,((0x3ffffU & ((IData)(0x51U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955287,((0x3ffffU & ((IData)(0x61U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955288,((0x3ffffU & ((IData)(0x52U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955289,((0x3ffffU & ((IData)(0x53U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955290,((0x3ffffU & ((IData)(0x54U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955291,((0x3ffffU & ((IData)(0x55U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955292,((0x3ffffU & ((IData)(0x56U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955293,((0x3ffffU & ((IData)(0x57U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955294,((0x3ffffU & ((IData)(0x62U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955295,((0x3ffffU & ((IData)(0x58U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955296,((0x3ffffU & ((IData)(0x59U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955297,((0x3ffffU & ((IData)(0x5aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955298,((0x3ffffU & ((IData)(0x5bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955299,((0x3ffffU & ((IData)(0x5cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955300,((0x3ffffU & ((IData)(0x5dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955301,((0x3ffffU & ((IData)(0x63U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955302,((0x3ffffU & ((IData)(0x5eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955303,((0x3ffffU & ((IData)(0x5fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955304,((0x3ffffU & ((IData)(0x60U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955305,((0x3ffffU & ((IData)(0x61U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955306,((0x3ffffU & ((IData)(0x62U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955307,((0x3ffffU & ((IData)(0x64U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955308,((0x3ffffU & ((IData)(0x63U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955309,((0x3ffffU & ((IData)(0x64U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955310,((0x3ffffU & ((IData)(0x65U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955311,((0x3ffffU & ((IData)(0x66U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955312,((0x3ffffU & ((IData)(0x67U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955313,((0x3ffffU & ((IData)(0x68U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955314,((0x3ffffU & ((IData)(0x65U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955315,((0x3ffffU & ((IData)(0x69U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955316,((0x3ffffU & ((IData)(0x6aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955317,((0x3ffffU & ((IData)(0x6bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955318,((0x3ffffU & ((IData)(0x6cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955319,((0x3ffffU & ((IData)(0x6dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955320,((0x3ffffU & ((IData)(0x6eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955321,((0x3ffffU & ((IData)(0x66U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955322,((0x3ffffU & ((IData)(0x6fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955323,((0x3ffffU & ((IData)(0x70U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955324,((0x3ffffU & ((IData)(0x71U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955325,((0x3ffffU & ((IData)(0x72U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955326,((0x3ffffU & ((IData)(0x73U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955327,((0x3ffffU & ((IData)(0x74U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955328,((0x3ffffU & ((IData)(0x67U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955329,((0x3ffffU & ((IData)(0x75U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955330,((0x3ffffU & ((IData)(0x76U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955331,((0x3ffffU & ((IData)(0x77U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955332,((0x3ffffU & ((IData)(0x78U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955333,((0x3ffffU & ((IData)(0x79U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955334,((0x3ffffU & ((IData)(0x68U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955335,((0x3ffffU & ((IData)(0x7aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955336,((0x3ffffU & ((IData)(0x7bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955337,((0x3ffffU & ((IData)(0x7cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955338,((0x3ffffU & ((IData)(0x7dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955339,((0x3ffffU & ((IData)(0x7eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955340,((0x3ffffU & ((IData)(0x7fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955341,((0x3ffffU & ((IData)(0x69U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955342,((0x3ffffU & ((IData)(0x80U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955343,((0x3ffffU & ((IData)(0x81U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955344,((0x3ffffU & ((IData)(0x82U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955345,((0x3ffffU & ((IData)(0x83U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955346,((0x3ffffU & ((IData)(0x84U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955347,((0x3ffffU & ((IData)(0x85U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955348,((0x3ffffU & ((IData)(0x6aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955349,((0x3ffffU & ((IData)(0x86U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955350,((0x3ffffU & ((IData)(0x87U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955351,((0x3ffffU & ((IData)(0x88U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955352,((0x3ffffU & ((IData)(0x89U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955353,((0x3ffffU & ((IData)(0x8aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955354,((0x3ffffU & ((IData)(0x6bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955355,((0x3ffffU & ((IData)(0x8bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955356,((0x3ffffU & ((IData)(0x8cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955357,((0x3ffffU & ((IData)(0x8dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955358,((0x3ffffU & ((IData)(0x8eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955359,((0x3ffffU & ((IData)(0x8fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955360,((0x3ffffU & ((IData)(0x90U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955361,((0x3ffffU & ((IData)(0x6cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955362,((0x3ffffU & ((IData)(0x91U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955363,((0x3ffffU & ((IData)(0x92U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955364,((0x3ffffU & ((IData)(0x93U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104))),18);
    bufp->fullIData(oldp+955365,((0x3ffffU & ((IData)(0x4aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955366,((0x3ffffU & ((IData)(0x6dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955367,((0x3ffffU & ((IData)(0x6eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955368,((0x3ffffU & ((IData)(0x6fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955369,((0x3ffffU & ((IData)(0x70U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955370,((0x3ffffU & ((IData)(0x71U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955371,((0x3ffffU & ((IData)(0x72U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955372,((0x3ffffU & ((IData)(0x73U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955373,((0x3ffffU & ((IData)(0x74U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955374,((0x3ffffU & ((IData)(0x75U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955375,((0x3ffffU & ((IData)(0x76U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955376,((0x3ffffU & ((IData)(0x77U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955377,((0x3ffffU & ((IData)(0x78U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955378,((0x3ffffU & ((IData)(0x79U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955379,((0x3ffffU & ((IData)(0x7aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955380,((0x3ffffU & ((IData)(0x7bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955381,((0x3ffffU & ((IData)(0x7cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955382,((0x3ffffU & ((IData)(0x7dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955383,((0x3ffffU & ((IData)(0x7eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955384,((0x3ffffU & ((IData)(0x4bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955385,((0x3ffffU & ((IData)(0x7fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955386,((0x3ffffU & ((IData)(0x80U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955387,((0x3ffffU & ((IData)(0x81U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955388,((0x3ffffU & ((IData)(0x82U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955389,((0x3ffffU & ((IData)(0x83U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955390,((0x3ffffU & ((IData)(0x84U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955391,((0x3ffffU & ((IData)(0x85U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955392,((0x3ffffU & ((IData)(0x86U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955393,((0x3ffffU & ((IData)(0x87U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955394,((0x3ffffU & ((IData)(0x88U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955395,((0x3ffffU & ((IData)(0x4cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955396,((0x3ffffU & ((IData)(0x89U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955397,((0x3ffffU & ((IData)(0x8aU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955398,((0x3ffffU & ((IData)(0x8bU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955399,((0x3ffffU & ((IData)(0x8cU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955400,((0x3ffffU & ((IData)(0x8dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955401,((0x3ffffU & ((IData)(0x8eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955402,((0x3ffffU & ((IData)(0x8fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955403,((0x3ffffU & ((IData)(0x90U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955404,((0x3ffffU & ((IData)(0x91U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955405,((0x3ffffU & ((IData)(0x92U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955406,((0x3ffffU & ((IData)(0x4dU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955407,((0x3ffffU & ((IData)(0x93U) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955408,((0x3ffffU & ((IData)(0x4eU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955409,((0x3ffffU & ((IData)(0x4fU) 
                                              + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268))),18);
    bufp->fullIData(oldp+955410,((0x3ffffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104, (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955411,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x4aU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955412,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955413,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x4bU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955414,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(2U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955415,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x4cU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955416,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(3U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955417,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x4dU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955418,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(4U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955419,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x4eU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955420,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(5U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955421,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x4fU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955422,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(6U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955423,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x50U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955424,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(7U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955425,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x51U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955426,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(8U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955427,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x52U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955428,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(9U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955429,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x53U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955430,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0xaU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955431,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x54U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955432,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0xbU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955433,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x55U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955434,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0xcU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955435,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x56U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955436,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0xdU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955437,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x57U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955438,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0xeU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955439,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x58U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955440,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0xfU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955441,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x59U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955442,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x10U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955443,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x5aU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955444,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x11U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955445,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x5bU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955446,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x12U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955447,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x5cU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955448,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x13U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955449,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x5dU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955450,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x14U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955451,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x5eU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955452,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x15U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955453,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x5fU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955454,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x16U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955455,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x60U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955456,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x17U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955457,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x61U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955458,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x18U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955459,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x62U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955460,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x19U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955461,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x63U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955462,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x1aU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955463,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x64U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955464,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x1bU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955465,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x65U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955466,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x1cU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955467,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x66U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955468,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x1dU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955469,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x67U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955470,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x1eU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955471,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x68U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955472,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x1fU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955473,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x69U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955474,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x20U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955475,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x6aU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955476,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x21U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955477,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x6bU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955478,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x22U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955479,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x6cU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955480,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x23U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955481,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x6dU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955482,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x24U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955483,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x6eU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955484,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x25U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955485,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x6fU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955486,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x26U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955487,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x70U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955488,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x27U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955489,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x71U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955490,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x28U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955491,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x72U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955492,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x29U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955493,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x73U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955494,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x2aU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955495,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x74U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955496,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x2bU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955497,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x75U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955498,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x2cU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955499,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x76U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955500,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x2dU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955501,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x77U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955502,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x2eU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955503,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x78U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955504,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x2fU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955505,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x79U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955506,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x30U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955507,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x7aU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955508,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x31U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955509,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x7bU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955510,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x32U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955511,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x7cU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955512,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x33U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955513,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x7dU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955514,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x34U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955515,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x7eU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955516,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x35U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955517,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x7fU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955518,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x36U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955519,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x80U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955520,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x37U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955521,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x81U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955522,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x38U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955523,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x82U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955524,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x39U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955525,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x83U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955526,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x3aU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955527,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x84U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955528,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x3bU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955529,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x85U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955530,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x3cU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955531,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x86U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955532,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x3dU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955533,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x87U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955534,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x3eU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955535,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x88U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955536,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x3fU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955537,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x89U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955538,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x40U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955539,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x8aU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955540,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x41U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955541,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x8bU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955542,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x42U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955543,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x8cU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955544,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x43U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955545,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x8dU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955546,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x44U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955547,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x8eU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955548,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x45U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955549,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x8fU) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955550,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x46U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955551,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x90U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955552,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x47U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955553,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x91U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955554,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x48U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955555,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x92U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955556,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x49U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955557,((0x3ffffU & VL_DIV_III(18, 
                                                        (0x3ffffU 
                                                         & ((IData)(0x93U) 
                                                            + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh26104)), (IData)(0x4aU)))),18);
    bufp->fullIData(oldp+955558,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter) 
                                  << 8U)),18);
    bufp->fullIData(oldp+955559,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount) 
                                  << 6U)),18);
    bufp->fullIData(oldp+955560,((0x1c0U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount) 
                                             - (IData)(1U)) 
                                            << 6U))),18);
    bufp->fullCData(oldp+955561,((7U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount) 
                                        - (IData)(1U)))),3);
    bufp->fullBit(oldp+955562,(((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady))))))) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955563,((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady))))))) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady))))))) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955564,(((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady))))))) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady))))))) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady))))))) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955565,((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady))))))) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady))))))) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady))))))) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady))))))) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955566,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955567,((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955568,(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955569,((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955570,(((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955571,((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955572,(((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955573,((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady))))))) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady))))))) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady))))))) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955574,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955575,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955576,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955577,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955578,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1_RDY_requestB___05F53_AND_brams_2_RDY_reque_ETC___05F_d441));
    bufp->fullBit(oldp+955579,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955580,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955581,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955582,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955583,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955584,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955585,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955586,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955587,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955588,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))))))))));
    bufp->fullBit(oldp+955589,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955590,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))))))))));
    bufp->fullBit(oldp+955591,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))));
    bufp->fullBit(oldp+955592,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))))))))));
    bufp->fullBit(oldp+955593,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))));
    bufp->fullBit(oldp+955594,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))))))))));
    bufp->fullBit(oldp+955595,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))));
    bufp->fullBit(oldp+955596,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady))))));
    bufp->fullBit(oldp+955597,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady) 
                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady) 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady) 
                                                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+955598,((4U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount))));
    bufp->fullBit(oldp+955599,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x52U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955600,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(9U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955601,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x53U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955602,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0xaU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955603,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x54U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955604,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0xbU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955605,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x55U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955606,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0xcU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955607,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x56U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955608,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0xdU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955609,((0x23fffU >= vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)));
    bufp->fullBit(oldp+955610,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x57U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955611,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0xeU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955612,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x58U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955613,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0xfU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955614,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x59U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955615,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x10U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955616,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x5aU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955617,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x11U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955618,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x5bU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955619,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x12U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955620,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x4aU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955621,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x5cU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955622,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x13U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955623,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x5dU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955624,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x14U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955625,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x5eU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955626,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x15U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955627,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x5fU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955628,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x16U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955629,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x60U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955630,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x17U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955631,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(1U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955632,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x61U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955633,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x18U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955634,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x62U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955635,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x19U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955636,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x63U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955637,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x1aU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955638,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x64U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955639,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x1bU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955640,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x65U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955641,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x1cU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955642,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x4bU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955643,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x66U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955644,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x1dU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955645,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x67U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955646,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x1eU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955647,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x68U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955648,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x1fU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955649,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x69U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955650,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x20U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955651,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x6aU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955652,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x21U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955653,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(2U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955654,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x6bU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955655,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x22U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955656,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x6cU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955657,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x23U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955658,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x6dU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955659,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x24U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955660,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x6eU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955661,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x25U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955662,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x6fU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955663,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x26U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955664,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x4cU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955665,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x70U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955666,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x27U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955667,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x71U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955668,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x28U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955669,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x72U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955670,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x29U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955671,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x73U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955672,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x2aU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955673,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x74U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955674,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x2bU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955675,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(3U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955676,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x75U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955677,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x2cU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955678,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x76U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955679,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x2dU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955680,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x77U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955681,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x2eU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955682,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x78U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955683,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x2fU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955684,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x79U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955685,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x30U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955686,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x4dU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955687,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x7aU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955688,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x31U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955689,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x7bU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955690,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x32U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955691,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x7cU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955692,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x33U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955693,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x7dU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955694,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x34U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955695,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x7eU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955696,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x35U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955697,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(4U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955698,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x7fU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955699,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x36U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955700,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x80U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955701,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x37U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955702,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x81U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955703,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x38U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955704,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x82U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955705,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x39U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955706,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x83U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955707,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x3aU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955708,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x4eU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955709,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x84U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955710,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x3bU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955711,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x85U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955712,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x3cU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955713,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x86U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955714,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x3dU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955715,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x87U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955716,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x3eU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955717,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x88U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955718,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x3fU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955719,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(5U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955720,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x89U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955721,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x40U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955722,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x8aU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955723,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x41U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955724,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x8bU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955725,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x42U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955726,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x8cU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955727,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x43U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955728,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x8dU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955729,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x44U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955730,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x4fU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955731,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x8eU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955732,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x45U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955733,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x8fU) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955734,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x46U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955735,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x90U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955736,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x47U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955737,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x91U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955738,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x48U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955739,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x92U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955740,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x49U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955741,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(6U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955742,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x93U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955743,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x50U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955744,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(7U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955745,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(0x51U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullBit(oldp+955746,((0x23fffU >= (0x3ffffU 
                                             & ((IData)(8U) 
                                                + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh39268)))));
    bufp->fullSData(oldp+955747,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955748,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955750,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955751,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955752,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955753,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955754,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955755,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955756,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955757,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955758,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955759,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955760,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955761,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955762,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955763,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955764,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955765,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955766,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955767,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955768,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955769,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955770,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955771,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955772,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955773,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955774,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955775,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955776,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955777,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955778,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955779,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955780,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955781,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955782,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955783,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955784,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955785,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955786,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955787,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955788,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955789,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955790,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955791,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955792,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955793,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955794,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955795,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955796,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955797,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955798,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955799,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955800,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955801,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955802,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955803,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955804,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955805,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955806,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955807,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955808,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955809,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955810,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955811,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955812,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955813,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955814,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955816,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955817,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955818,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955819,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955820,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955821,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955822,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955823,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955824,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955825,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955826,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955827,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955828,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955829,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955830,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955831,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955832,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955833,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955834,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955835,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955836,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955837,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955838,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955839,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955840,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955841,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955842,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955843,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955844,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955845,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955846,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955847,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955848,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955849,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955850,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955851,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955852,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955853,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955854,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955855,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955856,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955857,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955858,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955859,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955860,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955861,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955862,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955863,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955864,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955865,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955866,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955867,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955868,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955869,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955870,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955871,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955872,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955873,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955874,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955876,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955877,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955878,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955879,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955880,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955881,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955882,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955883,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955884,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955885,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955886,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955887,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955888,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955889,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955891,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955892,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955893,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955894,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955895,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955896,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955897,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955898,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955899,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955900,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955901,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955902,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955903,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955904,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955905,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955906,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955907,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955908,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955909,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955910,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955911,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955912,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955913,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955914,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955915,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955916,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955917,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955918,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955919,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955920,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955921,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955922,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955923,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955924,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955925,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955926,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955927,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955928,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955929,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955930,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955931,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955932,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955933,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955934,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955935,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955936,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955937,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955938,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955939,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955940,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955941,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955942,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955943,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955944,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955945,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955946,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955947,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955948,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955949,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955950,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955951,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955952,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955953,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955954,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955955,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955956,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955957,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955958,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955959,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955960,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955961,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955962,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955963,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955964,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955965,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955966,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955967,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955968,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955969,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955970,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955971,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955972,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955973,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955974,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955975,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955976,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955977,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955978,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955979,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955980,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955981,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955982,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955983,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955984,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955985,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955986,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955987,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955988,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955989,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955990,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955991,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955992,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955993,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+955994,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+955995,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+955996,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+955997,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+955998,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+955999,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956000,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956001,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956002,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956003,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956004,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956005,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956006,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956007,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956008,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956009,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956010,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956011,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956012,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956013,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956014,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956015,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956016,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956017,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956018,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956019,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956020,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956021,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956022,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956023,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956024,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956025,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956026,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956027,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956028,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956029,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956030,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956031,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956032,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956033,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956034,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956035,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956036,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956037,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956038,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956039,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956040,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956041,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956042,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956043,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956044,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956045,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956047,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956048,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956049,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956050,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956051,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956052,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956053,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956054,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956056,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956057,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956058,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956059,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956060,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956061,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956062,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956063,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956064,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956065,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956066,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956067,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956068,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956069,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956070,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956071,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956072,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956073,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956074,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956075,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956076,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956077,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956078,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956079,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956080,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956081,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956082,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956083,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956084,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956085,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956086,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956087,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956088,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956089,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956090,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956091,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956092,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956093,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956094,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956095,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956096,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956097,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956098,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956099,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956100,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956101,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956102,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956103,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956104,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956106,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956107,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956108,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956109,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956110,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956111,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956112,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956113,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956114,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956115,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956116,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956118,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956119,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956120,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956121,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956122,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956123,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956124,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956125,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956126,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956127,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956128,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956129,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956130,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956131,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956132,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956133,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956134,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956135,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956136,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956137,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956138,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956139,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956140,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956141,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956142,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956143,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956144,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956145,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956146,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956147,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956148,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956149,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956150,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956151,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956152,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956153,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956154,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956155,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956156,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956157,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956158,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956159,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956161,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956162,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956163,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956164,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956165,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956166,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956167,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956168,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956169,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956170,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956171,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956172,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956173,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956174,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956175,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956176,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956177,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956178,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956179,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956180,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956181,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956182,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956183,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956184,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullSData(oldp+956185,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_initDelay),10);
    bufp->fullSData(oldp+956186,((0x3ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_initDelay)))),10);
    bufp->fullBit(oldp+956187,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_initDelay__024EN));
    bufp->fullBit(oldp+956188,(((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_initDelay__024EN) 
                                & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_initDelay)))));
    bufp->fullSData(oldp+956189,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOA_R2),16);
    bufp->fullSData(oldp+956190,(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOB_R2),16);
    bufp->fullBit(oldp+956191,(vlSelfRef.CLK));
    bufp->fullBit(oldp+956192,(vlSelfRef.RST_N));
}
