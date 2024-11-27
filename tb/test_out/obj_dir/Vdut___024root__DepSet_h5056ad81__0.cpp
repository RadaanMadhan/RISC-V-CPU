// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_ha3782434_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdut__ConstPool__TABLE_hb0e27960_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h22715379_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h29afd16c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h0e9a5afe_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_he5f8a891_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vdut__ConstPool__TABLE_h0bdb7809_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h6d7fd7e2_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdut__ConstPool__TABLE_h928f895b_0;

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
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v4;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v5;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v6;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v8;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v9;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v10;
    // Body
    __Vdlyvset__top__DOT__execute__DOT__reg_file__DOT__registers__v0 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7 = 0U;
    if (((IData)(vlSelf->top__DOT__RegWrite) & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__instr 
                                                    >> 7U))))) {
        __Vdlyvval__top__DOT__execute__DOT__reg_file__DOT__registers__v0 
            = ((IData)(vlSelf->top__DOT__ResultSrc)
                ? vlSelf->top__DOT__memory__DOT__ReadData
                : vlSelf->top__DOT__ALUResult);
        __Vdlyvset__top__DOT__execute__DOT__reg_file__DOT__registers__v0 = 1U;
        __Vdlyvdim0__top__DOT__execute__DOT__reg_file__DOT__registers__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    vlSelf->top__DOT__pc = ((IData)(vlSelf->rst) ? 0U
                             : (((0x67U == (0x7fU & vlSelf->top__DOT__instr))
                                  ? 1U : 0U) ? (vlSelf->top__DOT__ImmExt 
                                                + vlSelf->top__DOT__rs1)
                                 : vlSelf->top__DOT__fetch__DOT__pc_next));
    if (vlSelf->top__DOT__MemWrite) {
        if ((0U == (7U & (vlSelf->top__DOT__instr >> 0xcU)))) {
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0 
                = (0xffU & vlSelf->top__DOT__WriteData);
            __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0 = 1U;
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0 
                = (0x1ffffU & vlSelf->top__DOT__ALUResult);
        } else if ((1U == (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU)))) {
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1 
                = (0xffU & vlSelf->top__DOT__WriteData);
            __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1 = 1U;
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult));
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v2 
                = (0xffU & (vlSelf->top__DOT__WriteData 
                            >> 8U));
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v2 
                = (0x1ffffU & vlSelf->top__DOT__ALUResult);
        } else if ((2U == (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU)))) {
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3 
                = (0xffU & vlSelf->top__DOT__WriteData);
            __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3 = 1U;
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResult));
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v4 
                = (0xffU & (vlSelf->top__DOT__WriteData 
                            >> 8U));
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v4 
                = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResult));
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v5 
                = (0xffU & (vlSelf->top__DOT__WriteData 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v5 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult));
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v6 
                = (vlSelf->top__DOT__WriteData >> 0x18U);
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v6 
                = (0x1ffffU & vlSelf->top__DOT__ALUResult);
        } else {
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7 
                = (0xffU & vlSelf->top__DOT__WriteData);
            __Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7 = 1U;
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7 
                = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResult));
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v8 
                = (0xffU & (vlSelf->top__DOT__WriteData 
                            >> 8U));
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v8 
                = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResult));
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v9 
                = (0xffU & (vlSelf->top__DOT__WriteData 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v9 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult));
            __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v10 
                = (vlSelf->top__DOT__WriteData >> 0x18U);
            __Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v10 
                = (0x1ffffU & vlSelf->top__DOT__ALUResult);
        }
    }
    if (__Vdlyvset__top__DOT__execute__DOT__reg_file__DOT__registers__v0) {
        vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[__Vdlyvdim0__top__DOT__execute__DOT__reg_file__DOT__registers__v0] 
            = __Vdlyvval__top__DOT__execute__DOT__reg_file__DOT__registers__v0;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0) {
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v0;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1) {
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v1;
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v2] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v2;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3) {
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v3;
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v4] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v4;
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v5] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v5;
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v6] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v6;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7) {
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v7;
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v8] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v8;
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v9] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v9;
        vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[__Vdlyvdim0__top__DOT__memory__DOT__data_mem__DOT__ram_array__v10] 
            = __Vdlyvval__top__DOT__memory__DOT__data_mem__DOT__ram_array__v10;
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
    vlSelf->top__DOT__rs1 = vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers
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
        = Vdut__ConstPool__TABLE_he5f8a891_0[__Vtableidx1];
    vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp 
        = Vdut__ConstPool__TABLE_h0bdb7809_0[__Vtableidx1];
    vlSelf->top__DOT__PcOp = Vdut__ConstPool__TABLE_h6d7fd7e2_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x40U & (vlSelf->top__DOT__instr 
                              >> 0x18U)) | ((0x20U 
                                             & vlSelf->top__DOT__instr) 
                                            | ((0x1cU 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUctrl = Vdut__ConstPool__TABLE_h928f895b_0
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
    if (vlSelf->top__DOT__PcOp) {
        vlSelf->top__DOT__execute__DOT__ALUop1 = vlSelf->top__DOT__pc;
        vlSelf->top__DOT__execute__DOT__ALUop2_f = 4U;
    } else {
        vlSelf->top__DOT__execute__DOT__ALUop1 = vlSelf->top__DOT__rs1;
        vlSelf->top__DOT__execute__DOT__ALUop2_f = 
            ((IData)(vlSelf->top__DOT__ALUSrc) ? vlSelf->top__DOT__ImmExt
              : vlSelf->top__DOT__WriteData);
    }
    if ((4U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        if ((2U & (IData)(vlSelf->top__DOT__ALUctrl))) {
            if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
                vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__execute__DOT__ALUop1 
                                               & vlSelf->top__DOT__execute__DOT__ALUop2_f);
                vlSelf->top__DOT__branch_l = 0U;
            } else {
                vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__execute__DOT__ALUop1 
                                               | vlSelf->top__DOT__execute__DOT__ALUop2_f);
                vlSelf->top__DOT__branch_l = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
            vlSelf->top__DOT__ALUResult = ((0x1fU >= vlSelf->top__DOT__execute__DOT__ALUop2_f)
                                            ? (vlSelf->top__DOT__execute__DOT__ALUop1 
                                               >> vlSelf->top__DOT__execute__DOT__ALUop2_f)
                                            : 0U);
            vlSelf->top__DOT__branch_l = 0U;
        } else {
            vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__execute__DOT__ALUop1 
                                           ^ vlSelf->top__DOT__execute__DOT__ALUop2_f);
            vlSelf->top__DOT__branch_l = 0U;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
            vlSelf->top__DOT__ALUResult = ((0x1fU >= vlSelf->top__DOT__execute__DOT__ALUop2_f)
                                            ? (vlSelf->top__DOT__execute__DOT__ALUop1 
                                               << vlSelf->top__DOT__execute__DOT__ALUop2_f)
                                            : 0U);
            vlSelf->top__DOT__branch_l = 0U;
        } else {
            vlSelf->top__DOT__ALUResult = ((vlSelf->top__DOT__execute__DOT__ALUop1 
                                            < vlSelf->top__DOT__execute__DOT__ALUop2_f)
                                            ? 1U : 0U);
            vlSelf->top__DOT__branch_l = (1U & vlSelf->top__DOT__ALUResult);
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__execute__DOT__ALUop1 
                                       - vlSelf->top__DOT__execute__DOT__ALUop2_f);
        vlSelf->top__DOT__branch_l = ((0U == vlSelf->top__DOT__ALUResult)
                                       ? 1U : 0U);
    } else {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__execute__DOT__ALUop1 
                                       + vlSelf->top__DOT__execute__DOT__ALUop2_f);
        vlSelf->top__DOT__branch_l = 0U;
    }
    vlSelf->top__DOT__memory__DOT__ReadData = ((0x4000U 
                                                & vlSelf->top__DOT__instr)
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->top__DOT__ALUResult))] 
                                                     << 0x18U) 
                                                    | ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(2U) 
                                                            + vlSelf->top__DOT__ALUResult))] 
                                                        << 0x10U) 
                                                       | ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                           [
                                                           (0x1ffffU 
                                                            & ((IData)(1U) 
                                                               + vlSelf->top__DOT__ALUResult))] 
                                                           << 8U) 
                                                          | vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & vlSelf->top__DOT__ALUResult)])))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr)
                                                     ? 
                                                    ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->top__DOT__ALUResult))] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                     [
                                                     (0x1ffffU 
                                                      & vlSelf->top__DOT__ALUResult)])
                                                     : 
                                                    vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                    [
                                                    (0x1ffffU 
                                                     & vlSelf->top__DOT__ALUResult)]))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr)
                                                     ? 
                                                    ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->top__DOT__ALUResult))] 
                                                      << 0x18U) 
                                                     | ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->top__DOT__ALUResult))] 
                                                         << 0x10U) 
                                                        | ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                            [
                                                            (0x1ffffU 
                                                             & ((IData)(1U) 
                                                                + vlSelf->top__DOT__ALUResult))] 
                                                            << 8U) 
                                                           | vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                           [
                                                           (0x1ffffU 
                                                            & vlSelf->top__DOT__ALUResult)])))
                                                     : 
                                                    ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->top__DOT__ALUResult))] 
                                                      << 0x18U) 
                                                     | ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->top__DOT__ALUResult))] 
                                                         << 0x10U) 
                                                        | ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                            [
                                                            (0x1ffffU 
                                                             & ((IData)(1U) 
                                                                + vlSelf->top__DOT__ALUResult))] 
                                                            << 8U) 
                                                           | vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                           [
                                                           (0x1ffffU 
                                                            & vlSelf->top__DOT__ALUResult)]))))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                                     [
                                                                     (0x1ffffU 
                                                                      & ((IData)(1U) 
                                                                         + vlSelf->top__DOT__ALUResult))] 
                                                                     >> 7U)))) 
                                                      << 0x10U) 
                                                     | ((vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->top__DOT__ALUResult))] 
                                                         << 8U) 
                                                        | vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                        [
                                                        (0x1ffffU 
                                                         & vlSelf->top__DOT__ALUResult)]))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                                     [
                                                                     (0x1ffffU 
                                                                      & vlSelf->top__DOT__ALUResult)] 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                                                     [
                                                     (0x1ffffU 
                                                      & vlSelf->top__DOT__ALUResult)]))));
    vlSelf->top__DOT__fetch__DOT__pc_next = (((((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 0xcU))) 
                                                | (5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 0xcU)))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__instr 
                                                      >> 0xcU))))
                                               ? ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                                  & (~ (IData)(vlSelf->top__DOT__branch_l)))
                                               : ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                                  & ((IData)(vlSelf->top__DOT__branch_l) 
                                                     | (IData)(vlSelf->top__DOT__PcOp))))
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
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
