// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT___024ROOT_H_
#define VERILATED_VDUT___024ROOT_H_  // guard

#include "verilated.h"

class Vdut__Syms;

class Vdut___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    CData/*0:0*/ top__DOT__branch_l;
    CData/*2:0*/ top__DOT__ALUctrl;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*0:0*/ top__DOT__ALUSrc;
    CData/*0:0*/ top__DOT__MemWrite;
    CData/*0:0*/ top__DOT__ResultSrc;
    CData/*0:0*/ top__DOT__PcOp;
    CData/*2:0*/ top__DOT__decode__DOT__ImmSrc;
    CData/*0:0*/ top__DOT__decode__DOT__control_unit__DOT__branch;
    CData/*1:0*/ top__DOT__decode__DOT__control_unit__DOT__ALUOp;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__ImmExt;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__ALUResult;
    IData/*31:0*/ top__DOT__WriteData;
    IData/*31:0*/ top__DOT__rs1;
    IData/*31:0*/ top__DOT__fetch__DOT__pc_next;
    IData/*31:0*/ top__DOT__execute__DOT__ALUop1;
    IData/*31:0*/ top__DOT__execute__DOT__ALUop2_f;
    IData/*31:0*/ top__DOT__memory__DOT__ReadData;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__inst_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__execute__DOT__reg_file__DOT__registers;
    VlUnpacked<CData/*7:0*/, 131072> top__DOT__memory__DOT__data_mem__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut___024root(Vdut__Syms* symsp, const char* name);
    ~Vdut___024root();
    VL_UNCOPYABLE(Vdut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
