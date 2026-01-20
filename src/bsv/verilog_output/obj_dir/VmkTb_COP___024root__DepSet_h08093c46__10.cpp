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

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__13(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__13\n"); );
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x3eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x3eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x3eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x3eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x3fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x3fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x3fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x3fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x40U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x40U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x40U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x40U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x41U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x41U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x41U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x41U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x42U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x42U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x42U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x42U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xabU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xabU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xabU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xabU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x43U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x43U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x43U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x43U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xacU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xacU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xacU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xacU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x44U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x44U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x44U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x44U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xadU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xadU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xadU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xadU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x45U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x45U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x45U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x45U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x46U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x46U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x46U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x46U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xafU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xafU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xafU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xafU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x47U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x47U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x47U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x47U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x48U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x48U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x48U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x48U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x49U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x49U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x49U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x49U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x3eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x3eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x3eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x3eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x3fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x3fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x3fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x3fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x40U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x40U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x40U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x40U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xa9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xa9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x41U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x41U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x41U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x41U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x42U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x42U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x42U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x42U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xabU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xabU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xabU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xabU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x43U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x43U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x43U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x43U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xacU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xacU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xacU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xacU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x44U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x44U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x44U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x44U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xadU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xadU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xadU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xadU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x45U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x45U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x45U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x45U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x46U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x46U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x46U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x46U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xafU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xafU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xafU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xafU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x47U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x47U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x47U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x47U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x48U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x48U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x48U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x48U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x49U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x49U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x49U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x49U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x64U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x64U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x64U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x64U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_100__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x65U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x65U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x65U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x65U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xceU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xceU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xceU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_101__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xceU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x66U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x66U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x66U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x66U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_102__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x67U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x67U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x67U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x67U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xd0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xd0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xd0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_103__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xd0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x68U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x68U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x68U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x68U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xd1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xd1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xd1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_104__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xd1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x50U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x50U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x50U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x50U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x51U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x51U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x51U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x51U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x52U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x52U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x52U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x52U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x53U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x53U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x53U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x53U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x54U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x54U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x54U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x54U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x55U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x55U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x55U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x55U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_85__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x56U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x56U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x56U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x56U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_86__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x57U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x57U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x57U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x57U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_87__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x58U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x58U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x58U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x58U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_88__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x59U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x59U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x59U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x59U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_89__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_90__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_91__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_92__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_93__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_94__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_95__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x60U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x60U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x60U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x60U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_96__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x61U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x61U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x61U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x61U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_97__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x62U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x62U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x62U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x62U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_98__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x63U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x63U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x63U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x63U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xccU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xccU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xccU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_99__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xccU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x64U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x64U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x64U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x64U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_100__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x65U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x65U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x65U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x65U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xceU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xceU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xceU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_101__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xceU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x66U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x66U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x66U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x66U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_102__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x67U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x67U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x67U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x67U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xd0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xd0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xd0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_103__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xd0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x68U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x68U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x68U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x68U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xd1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xd1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xd1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_104__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xd1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x50U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x50U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x50U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x50U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xb9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xb9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x51U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x51U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x51U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x51U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x52U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x52U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x52U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x52U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x53U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x53U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x53U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x53U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x54U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x54U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x54U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x54U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x55U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x55U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x55U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x55U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_85__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x56U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x56U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x56U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x56U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_86__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x57U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x57U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x57U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x57U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc0U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_87__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc0U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x58U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x58U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x58U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x58U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_88__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x59U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x59U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x59U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x59U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_89__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_90__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_91__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_92__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_93__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_94__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x5fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x5fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_95__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x60U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x60U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x60U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x60U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xc9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_96__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xc9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x61U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x61U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x61U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x61U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_97__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x62U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x62U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x62U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x62U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_98__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x63U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x63U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x63U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x63U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xccU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xccU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xccU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_99__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xccU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.RST_N) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage4 
            = ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage3))
                ? (1ULL | ((QData)((IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage3 
                                            >> 1U))) 
                           << 1U)) : 0ULL);
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__activation_out_reg;
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage4 = 0ULL;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__activation_out_reg = 0U;
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
    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage3))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_result_sign 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_result_sign;
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_is_special) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_is_special = 1U;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_special_result 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_special_result;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_x_new = 0U;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_r_new = 0U;
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_is_special = 0U;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_special_result = 0U;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_x_new 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_x_new;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s3_r_new 
                = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_y_new))))
                    ? 0x4000U : ((((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_y_new))
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_sign___05Fh13742)
                                    : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__IF_s2_y_new_80_BITS_14_TO_7_81_ULE_128_88_THEN_ETC___05F_d496)
                                        ? ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_y_new) 
                                               >> 0xfU)) 
                                           & (0x80U 
                                              >= (0xffU 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_y_new) 
                                                     >> 7U))))
                                        : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_sign___05Fh13742))) 
                                  << 0xfU) | ((0x100U 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689))
                                               ? ((0x7f80U 
                                                   & (((IData)(1U) 
                                                       + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___theResult___05F_fst_exp___05Fh13766)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                                        >> 1U)))
                                               : ((0x7f80U 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___theResult___05F_fst_exp___05Fh13766) 
                                                       - 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_0)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_2)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_4)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_6)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_8)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_10)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_12)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_14)
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
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_0)
                                                         ? 
                                                        (0x1feU 
                                                         & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_2)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_4)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_6)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_8)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_10)
                                                                  ? 
                                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_12)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_6_14)
                                                                    ? 0U
                                                                    : 
                                                                   (0xc0U 
                                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                                                       << 6U)))
                                                                   : 
                                                                  (0xe0U 
                                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                                                      << 5U)))
                                                                  : 
                                                                 (0xf0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                                                     << 4U)))
                                                                 : 
                                                                (0xf8U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                                                    << 3U)))
                                                                : 
                                                               (0xfcU 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                                                   << 2U)))
                                                               : 
                                                              (0xfeU 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689) 
                                                                  << 1U)))
                                                              : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689)) 
                                                            << 1U))
                                                         : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689)))))));
        }
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024EN) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024WE)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024DI)
                : ((0x2ffU >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024ADDR))
                    ? vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__RAM
                   [vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024ADDR]
                    : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024EN) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024WE)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024DI)
                : ((0x2ffU >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024ADDR))
                    ? vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__RAM
                   [vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024ADDR]
                    : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024EN) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024WE)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024DI)
                : ((0x2ffU >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024ADDR))
                    ? vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__RAM
                   [vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024ADDR]
                    : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024EN) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024WE)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024DI)
                : ((0x2ffU >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024ADDR))
                    ? vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__RAM
                   [vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024ADDR]
                    : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024EN) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R 
            = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024WE)
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024DI)
                : ((0x2ffU >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024ADDR))
                    ? vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__RAM
                   [vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024ADDR]
                    : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95__024EN) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_94[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_93[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x5cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_92[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x5bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_91[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x5aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_90[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x59U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_89[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_88[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_87[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_86[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x55U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_85[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x54U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_84[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x53U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_83[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x52U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_82[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x51U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_81[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x50U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_80[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_79[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x4eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_78[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x4dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_77[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x4cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_76[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x4bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_75[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x4aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_74[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x49U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_73[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x48U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_72[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x47U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_71[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x46U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_70[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x45U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_69[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x44U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_68[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x43U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_67[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x42U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_66[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x41U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_65[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x40U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_64[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_63[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x3eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_62[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x3dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_61[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x3cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_60[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x3bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_59[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x3aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_58[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x39U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_57[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x38U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_56[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x37U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_55[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x36U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_54[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x35U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_53[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x34U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_52[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x33U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_51[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x32U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_50[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x31U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_49[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x30U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_48[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_47[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x2eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_46[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_45[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_44[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_43[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x2aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_42[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x29U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_41[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_40[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_39[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_38[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_37[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_36[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_35[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_34[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_33[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_32[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_31[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_30[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_29[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_28[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_27[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_26[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_25[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_24[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_23[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_22[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_21[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_20[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_19[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_18[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_17[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0x10U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_16[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0xfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_15[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_14[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_13[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_12[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_11[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_10[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_9[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_8[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_7[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_6[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_5[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_4[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_3[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_2[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_1[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
         & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[0U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[0U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[1U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[1U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[2U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[2U];
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[3U] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0__024D_IN[3U];
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter__024D_IN 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024D_IN 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__baseElement___05Fh49095 
        = (0x3ffffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter) 
                        << 8U) + (0x1c0U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount) 
                                             - (IData)(1U)) 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__baseElement___05Fh49095 
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete_6353_AND_readback_values_642_ETC___05F_d49271 
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
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U]);
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U]);
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U]);
    }
}
