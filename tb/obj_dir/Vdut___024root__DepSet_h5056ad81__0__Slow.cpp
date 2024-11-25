// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___initial__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___initial__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hbdd2015e__0;
    VlWide<7>/*223:0*/ __Vtemp_ha75ec8e7__0;
    // Body
    VL_WRITEF("Loading instructions....\n");
    __Vtemp_hbdd2015e__0[0U] = 0x2e686578U;
    __Vtemp_hbdd2015e__0[1U] = 0x6772616dU;
    __Vtemp_hbdd2015e__0[2U] = 0x2f70726fU;
    __Vtemp_hbdd2015e__0[3U] = 0x2f72746cU;
    __Vtemp_hbdd2015e__0[4U] = 0x2e2eU;
    VL_READMEM_N(true, 8, 4096, 3217031168, VL_CVT_PACK_STR_NW(5, __Vtemp_hbdd2015e__0)
                 ,  &(vlSelf->top__DOT__inst_mem__DOT__rom_array)
                 , 3217031168, ~0ULL);
    VL_WRITEF("Finished Loading instructions!\nLoading Sine Coefficients\n");
    __Vtemp_ha75ec8e7__0[0U] = 0x2e6d656dU;
    __Vtemp_ha75ec8e7__0[1U] = 0x65726f6dU;
    __Vtemp_ha75ec8e7__0[2U] = 0x2f73696eU;
    __Vtemp_ha75ec8e7__0[3U] = 0x6d6f7279U;
    __Vtemp_ha75ec8e7__0[4U] = 0x6c2f6d65U;
    __Vtemp_ha75ec8e7__0[5U] = 0x2e2f7274U;
    __Vtemp_ha75ec8e7__0[6U] = 0x2eU;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_ha75ec8e7__0)
                 ,  &(vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array)
                 , 0, ~0ULL);
    VL_WRITEF("Finished Loading Sine Coefficients\n");
}

extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_ha3782434_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdut__ConstPool__TABLE_hb0e27960_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h22715379_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h29afd16c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h0e9a5afe_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vdut__ConstPool__TABLE_h13661086_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdut__ConstPool__TABLE_hfa1d3a6c_0;

VL_ATTR_COLD void Vdut___024root___settle__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    // Body
    vlSelf->a0 = vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers
        [0xaU];
    vlSelf->top__DOT__instr = ((vlSelf->top__DOT__inst_mem__DOT__rom_array
                                [(0xfffU & ((IData)(3U) 
                                            + vlSelf->top__DOT__pc))] 
                                << 0x18U) | ((vlSelf->top__DOT__inst_mem__DOT__rom_array
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__pc))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__inst_mem__DOT__rom_array
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__pc))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__inst_mem__DOT__rom_array
                                                [(0xfffU 
                                                  & vlSelf->top__DOT__pc)])));
    vlSelf->top__DOT__execute__DOT__RD1 = vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__WriteData = vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__instr);
    vlSelf->top__DOT__RegWrite = Vdut__ConstPool__TABLE_ha3782434_0
        [__Vtableidx1];
    vlSelf->top__DOT__decode__DOT__ImmSrc = Vdut__ConstPool__TABLE_hb0e27960_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrc = Vdut__ConstPool__TABLE_h22715379_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemWrite = Vdut__ConstPool__TABLE_h29afd16c_0
        [__Vtableidx1];
    vlSelf->top__DOT__ResultSrc = Vdut__ConstPool__TABLE_h0e9a5afe_0
        [__Vtableidx1];
    vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch 
        = Vdut__ConstPool__TABLE_h974edfa5_0[__Vtableidx1];
    vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp 
        = Vdut__ConstPool__TABLE_h13661086_0[__Vtableidx1];
    __Vtableidx2 = ((0x40U & (vlSelf->top__DOT__instr 
                              >> 0x18U)) | ((0x20U 
                                             & vlSelf->top__DOT__instr) 
                                            | ((0x1cU 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUctrl = Vdut__ConstPool__TABLE_hfa1d3a6c_0
        [__Vtableidx2];
    vlSelf->top__DOT__ImmExt = ((4U & (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
                                 ? ((2U & (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
                                     ? 0U : ((1U & (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
                                              ? (((- (IData)(
                                                             (vlSelf->top__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->top__DOT__instr) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 0x14U)))))
                                              : (0xfffff000U 
                                                 & vlSelf->top__DOT__instr)))
                                 : ((2U & (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
                                     ? ((1U & (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__instr 
                                                        >> 7U)))))
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 7U)))))
                                     : ((1U & (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->top__DOT__instr 
                                               >> 0x14U))
                                         : 0U)));
    vlSelf->top__DOT__execute__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUSrc)
                                               ? vlSelf->top__DOT__ImmExt
                                               : vlSelf->top__DOT__WriteData);
    vlSelf->top__DOT__EQ = 0U;
    if ((4U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUResult = ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUctrl))
                                                 ? 
                                                ((vlSelf->top__DOT__execute__DOT__RD1 
                                                  < vlSelf->top__DOT__execute__DOT__ALUop2)
                                                  ? 1U
                                                  : 0U)
                                                 : 0U));
    } else if ((2U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUResult = ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? (vlSelf->top__DOT__execute__DOT__RD1 
                                           | vlSelf->top__DOT__execute__DOT__ALUop2)
                                        : (vlSelf->top__DOT__execute__DOT__RD1 
                                           & vlSelf->top__DOT__execute__DOT__ALUop2));
    } else if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__execute__DOT__RD1 
                                       - vlSelf->top__DOT__execute__DOT__ALUop2);
        vlSelf->top__DOT__EQ = (0U == vlSelf->top__DOT__ALUResult);
    } else {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__execute__DOT__RD1 
                                       + vlSelf->top__DOT__execute__DOT__ALUop2);
    }
    vlSelf->top__DOT__fetch__DOT__pc_next = (((1U == 
                                               (7U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xcU)))
                                               ? ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                                  & (~ (IData)(vlSelf->top__DOT__EQ)))
                                               : ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                                  & (IData)(vlSelf->top__DOT__EQ)))
                                              ? (vlSelf->top__DOT__pc 
                                                 + vlSelf->top__DOT__ImmExt)
                                              : ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc));
}

VL_ATTR_COLD void Vdut___024root___eval_initial(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial\n"); );
    // Body
    Vdut___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vdut___024root___eval_settle(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_settle\n"); );
    // Body
    Vdut___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdut___024root___final(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___final\n"); );
}

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WriteData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fetch__DOT__pc_next = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__inst_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__decode__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__execute__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__execute__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
