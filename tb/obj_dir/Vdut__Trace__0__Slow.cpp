// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+67,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+67,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBus(c+4,"instr", false,-1, 31,0);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBit(c+8,"ALUSrc", false,-1);
    tracep->declBit(c+9,"MemWrite", false,-1);
    tracep->declBit(c+10,"ResultSrc", false,-1);
    tracep->declBus(c+11,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+12,"WriteData", false,-1, 31,0);
    tracep->declBus(c+13,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"instr", false,-1, 31,0);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBit(c+8,"ALUSrc", false,-1);
    tracep->declBit(c+9,"MemWrite", false,-1);
    tracep->declBit(c+10,"ResultSrc", false,-1);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBus(c+2,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+14,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+15,"unused_bits", false,-1, 19,15);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+16,"op", false,-1, 6,0);
    tracep->declBus(c+17,"funct3", false,-1, 2,0);
    tracep->declBit(c+18,"funct7_5", false,-1);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+14,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBit(c+8,"ALUSrc", false,-1);
    tracep->declBit(c+9,"MemWrite", false,-1);
    tracep->declBit(c+10,"ResultSrc", false,-1);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBit(c+19,"branch", false,-1);
    tracep->declBus(c+20,"ALUOp", false,-1, 1,0);
    tracep->pushNamePrefix("alu_decode ");
    tracep->declBus(c+17,"funct3", false,-1, 2,0);
    tracep->declBit(c+18,"funct7_5", false,-1);
    tracep->declBus(c+20,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+21,"Op_5", false,-1);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main_decode ");
    tracep->declBus(c+16,"op", false,-1, 6,0);
    tracep->declBus(c+14,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+20,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBit(c+8,"ALUSrc", false,-1);
    tracep->declBit(c+9,"MemWrite", false,-1);
    tracep->declBit(c+10,"ResultSrc", false,-1);
    tracep->declBit(c+19,"Branch", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"Imm_up", false,-1, 31,20);
    tracep->declBus(c+23,"Imm_down", false,-1, 11,7);
    tracep->declBus(c+14,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+2,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+15,"instr_19_15", false,-1, 19,15);
    tracep->declBus(c+24,"instr_24_20", false,-1, 24,20);
    tracep->declBus(c+23,"instr_11_7", false,-1, 11,7);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+8,"ALUSrc", false,-1);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBus(c+13,"Result", false,-1, 31,0);
    tracep->declBus(c+2,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+67,"a0", false,-1, 31,0);
    tracep->declBus(c+11,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->declBus(c+12,"WriteData", false,-1, 31,0);
    tracep->declBus(c+25,"RD1", false,-1, 31,0);
    tracep->declBus(c+26,"ALUop2", false,-1, 31,0);
    tracep->pushNamePrefix("ALuSrcSel ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"in0", false,-1, 31,0);
    tracep->declBus(c+2,"in1", false,-1, 31,0);
    tracep->declBit(c+8,"sel", false,-1);
    tracep->declBus(c+26,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+25,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+26,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+11,"ALUout", false,-1, 31,0);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+69,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+15,"AD1", false,-1, 4,0);
    tracep->declBus(c+24,"AD2", false,-1, 4,0);
    tracep->declBus(c+23,"AD3", false,-1, 4,0);
    tracep->declBus(c+13,"WD3", false,-1, 31,0);
    tracep->declBit(c+7,"WE3", false,-1);
    tracep->declBus(c+25,"RD1", false,-1, 31,0);
    tracep->declBus(c+12,"RD2", false,-1, 31,0);
    tracep->declBus(c+67,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+27+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBus(c+68,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBus(c+2,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+59,"pc_next", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+68,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+59,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_sel ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"in0", false,-1, 31,0);
    tracep->declBus(c+61,"in1", false,-1, 31,0);
    tracep->declBit(c+3,"sel", false,-1);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+68,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"addr", false,-1, 31,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+11,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+12,"WriteData", false,-1, 31,0);
    tracep->declBit(c+10,"ResultSrc", false,-1);
    tracep->declBit(c+9,"MemWrite", false,-1);
    tracep->declBus(c+13,"Result", false,-1, 31,0);
    tracep->declBus(c+62,"ReadData", false,-1, 31,0);
    tracep->pushNamePrefix("ResultSlc ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"in0", false,-1, 31,0);
    tracep->declBus(c+62,"in1", false,-1, 31,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+13,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+68,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+9,"wr_en", false,-1);
    tracep->declBus(c+11,"addr", false,-1, 31,0);
    tracep->declBus(c+12,"WriteData", false,-1, 31,0);
    tracep->declBus(c+62,"ReadData", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+63+i*1,"ram_array", true,(i+-1), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vdut___024root__trace_init_top(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_top\n"); );
    // Body
    Vdut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdut___024root__trace_register(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdut___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdut___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdut___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ImmExt),32);
    bufp->fullBit(oldp+3,(((1U == (7U & (vlSelf->top__DOT__instr 
                                         >> 0xcU)))
                            ? ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                               & (~ (IData)(vlSelf->top__DOT__EQ)))
                            : ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                               & (IData)(vlSelf->top__DOT__EQ)))));
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__instr),32);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__EQ));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__ALUctrl),3);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__ALUSrc));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__MemWrite));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__ResultSrc));
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__WriteData),32);
    bufp->fullIData(oldp+13,(((IData)(vlSelf->top__DOT__ResultSrc)
                               ? vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                              [(1U & ((IData)(1U) + vlSelf->top__DOT__ALUResult))]
                               : vlSelf->top__DOT__ALUResult)),32);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__decode__DOT__ImmSrc),2);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+17,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+18,((1U & (vlSelf->top__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch));
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__decode__DOT__control_unit__DOT__ALUOp),2);
    bufp->fullBit(oldp+21,((1U & (vlSelf->top__DOT__instr 
                                  >> 5U))));
    bufp->fullSData(oldp+22,((vlSelf->top__DOT__instr 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__execute__DOT__RD1),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__execute__DOT__ALUop2),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[0]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[1]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[2]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[3]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[4]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[5]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[6]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[7]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[8]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[9]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[10]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[11]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[12]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[13]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[14]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[15]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[16]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[17]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[18]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[19]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[20]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[21]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[22]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[23]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[24]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[25]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[26]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[27]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[28]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[29]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[30]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__execute__DOT__reg_file__DOT__registers[31]),32);
    bufp->fullIData(oldp+59,((((1U == (7U & (vlSelf->top__DOT__instr 
                                             >> 0xcU)))
                                ? ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                   & (~ (IData)(vlSelf->top__DOT__EQ)))
                                : ((IData)(vlSelf->top__DOT__decode__DOT__control_unit__DOT__branch) 
                                   & (IData)(vlSelf->top__DOT__EQ)))
                               ? (vlSelf->top__DOT__pc 
                                  + vlSelf->top__DOT__ImmExt)
                               : ((IData)(4U) + vlSelf->top__DOT__pc))),32);
    bufp->fullIData(oldp+60,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
    bufp->fullIData(oldp+61,((vlSelf->top__DOT__pc 
                              + vlSelf->top__DOT__ImmExt)),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array
                             [(1U & ((IData)(1U) + vlSelf->top__DOT__ALUResult))]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__memory__DOT__data_mem__DOT__ram_array[1]),32);
    bufp->fullBit(oldp+65,(vlSelf->clk));
    bufp->fullBit(oldp+66,(vlSelf->rst));
    bufp->fullIData(oldp+67,(vlSelf->a0),32);
    bufp->fullIData(oldp+68,(0x20U),32);
    bufp->fullIData(oldp+69,(5U),32);
    bufp->fullIData(oldp+70,(8U),32);
}
