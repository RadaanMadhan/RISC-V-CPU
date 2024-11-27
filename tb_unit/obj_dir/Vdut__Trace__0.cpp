// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


void Vdut___024root__trace_chg_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdut___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdut___024root__trace_chg_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__pc),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ImmExt),32);
        bufp->chgBit(oldp+2,(((((1U == (7U & (vlSelf->top__DOT__instr 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->top__DOT__instr 
                                                >> 0xcU)))) 
                               | (7U == (7U & (vlSelf->top__DOT__instr 
                                               >> 0xcU))))
                               ? ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                  & (~ (IData)(vlSelf->top__DOT__branch_l)))
                               : ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                  & (IData)(vlSelf->top__DOT__branch_l)))));
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__instr),32);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__branch_l));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__ALUctrl),3);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__RegWrite));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__ALUSrc));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__MemWrite));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__ResultSrc));
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ALUResult),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__WriteData),32);
        bufp->chgIData(oldp+12,(((IData)(vlSelf->top__DOT__ResultSrc)
                                  ? vlSelf->top__DOT__memory__DOT__ReadData
                                  : vlSelf->top__DOT__ALUResult)),32);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__decode__DOT__ImmSrc),3);
        bufp->chgCData(oldp+14,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgCData(oldp+15,((7U & (vlSelf->top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+16,((1U & (vlSelf->top__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch));
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+19,((1U & (vlSelf->top__DOT__instr 
                                     >> 5U))));
        bufp->chgIData(oldp+20,((vlSelf->top__DOT__instr 
                                 >> 7U)),25);
        bufp->chgCData(oldp+21,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+22,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+23,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__execute__DOT__RD1),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__execute__DOT__ALUop2),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[0]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[1]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[2]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[3]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[4]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[5]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[6]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[7]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[8]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[9]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[10]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[11]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[12]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[13]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[14]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[15]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[16]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[17]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[18]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[19]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[20]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[21]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[22]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[23]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[24]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[25]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[26]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[27]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[28]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[29]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[30]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[31]),32);
        bufp->chgIData(oldp+58,((((((1U == (7U & (vlSelf->top__DOT__instr 
                                                  >> 0xcU))) 
                                    | (5U == (7U & 
                                              (vlSelf->top__DOT__instr 
                                               >> 0xcU)))) 
                                   | (7U == (7U & (vlSelf->top__DOT__instr 
                                                   >> 0xcU))))
                                   ? ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                      & (~ (IData)(vlSelf->top__DOT__branch_l)))
                                   : ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                      & (IData)(vlSelf->top__DOT__branch_l)))
                                  ? (vlSelf->top__DOT__pc 
                                     + vlSelf->top__DOT__ImmExt)
                                  : ((IData)(4U) + vlSelf->top__DOT__pc))),32);
        bufp->chgIData(oldp+59,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
        bufp->chgIData(oldp+60,((vlSelf->top__DOT__pc 
                                 + vlSelf->top__DOT__ImmExt)),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__memory__DOT__ReadData),32);
    }
    bufp->chgBit(oldp+62,(vlSelf->clk));
    bufp->chgBit(oldp+63,(vlSelf->rst));
    bufp->chgIData(oldp+64,(vlSelf->a0),32);
}

void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_cleanup\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
