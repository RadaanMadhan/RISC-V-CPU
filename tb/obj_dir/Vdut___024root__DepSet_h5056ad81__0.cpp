// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h7949c905_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vdut__ConstPool__TABLE_h2ef1ac52_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h2f3cf051_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h29afd16c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h0e9a5afe_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vdut__ConstPool__TABLE_h090a41b9_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdut__ConstPool__TABLE_hfa1d3a6c_0;

VL_INLINE_OPT void Vdut___024root___sequent__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__execute__DOT__reg_file__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__execute__DOT__reg_file__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__execute__DOT__reg_file__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0;
    // Body
    __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top__DOT__execute__DOT__reg_file__DOT__registers__v0 = 0U;
    if (vlSelf->top__DOT__MemWrite) {
        __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0 
            = vlSelf->top__DOT__WriteData;
        __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0 
            = (1U & ((IData)(1U) + vlSelf->top__DOT__ALUResult));
    }
    if (vlSelf->top__DOT__RegWrite) {
        __Vdlyvval__top__DOT__execute__DOT__reg_file__DOT__registers__v0 
            = ((IData)(vlSelf->top__DOT__ResultSrc)
                ? vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
               [(1U & ((IData)(1U) + vlSelf->top__DOT__ALUResult))]
                : vlSelf->top__DOT__ALUResult);
        __Vdlyvset__top__DOT__execute__DOT__reg_file__DOT__registers__v0 = 1U;
        __Vdlyvdim0__top__DOT__execute__DOT__reg_file__DOT__registers__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    vlSelf->top__DOT__pc = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__fetch__DOT__pc_next);
    if (__Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0) {
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0;
    }
    if (__Vdlyvset__top__DOT__execute__DOT__reg_file__DOT__registers__v0) {
        vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[__Vdlyvdim0__top__DOT__execute__DOT__reg_file__DOT__registers__v0] 
            = __Vdlyvval__top__DOT__execute__DOT__reg_file__DOT__registers__v0;
    }
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
    vlSelf->top__DOT__RegWrite = Vdut__ConstPool__TABLE_h7949c905_0
        [__Vtableidx1];
    vlSelf->top__DOT__decode__DOT__ImmSrc = Vdut__ConstPool__TABLE_h2ef1ac52_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrc = Vdut__ConstPool__TABLE_h2f3cf051_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemWrite = Vdut__ConstPool__TABLE_h29afd16c_0
        [__Vtableidx1];
    vlSelf->top__DOT__ResultSrc = Vdut__ConstPool__TABLE_h0e9a5afe_0
        [__Vtableidx1];
    vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch 
        = Vdut__ConstPool__TABLE_h974edfa5_0[__Vtableidx1];
    vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp 
        = Vdut__ConstPool__TABLE_h090a41b9_0[__Vtableidx1];
    __Vtableidx2 = ((0x40U & (vlSelf->top__DOT__instr 
                              >> 0x18U)) | ((0x20U 
                                             & vlSelf->top__DOT__instr) 
                                            | ((0x1cU 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUctrl = Vdut__ConstPool__TABLE_hfa1d3a6c_0
        [__Vtableidx2];
    vlSelf->top__DOT__ImmExt = ((0U == (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
                                 ? (((- (IData)((vlSelf->top__DOT__instr 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSelf->top__DOT__instr 
                                                 >> 0x14U))
                                 : ((1U == (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
                                     ? (((- (IData)(
                                                    (vlSelf->top__DOT__instr 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0xfe0U & 
                                          (vlSelf->top__DOT__instr 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelf->top__DOT__instr 
                                             >> 7U))))
                                     : ((2U == (IData)(vlSelf->top__DOT__decode__DOT__ImmSrc))
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

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdut___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
