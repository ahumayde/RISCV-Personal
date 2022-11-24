// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+57,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBus(c+42,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBus(c+44,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+45,"ALUsrc", false,-1);
    tracep->declBus(c+46,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->declBit(c+55,"EQ", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+58,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+45,"ALUsrc", false,-1);
    tracep->declBus(c+44,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBus(c+42,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+55,"EQ", false,-1);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->declBus(c+7,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+48,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+8,"regOp2", false,-1, 31,0);
    tracep->declBus(c+56,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+57,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+7,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+48,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+56,"ALUout", false,-1, 31,0);
    tracep->declBit(c+55,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rf ");
    tracep->declBus(c+58,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+43,"WE3", false,-1);
    tracep->declBus(c+4,"AD1", false,-1, 4,0);
    tracep->declBus(c+5,"AD2", false,-1, 4,0);
    tracep->declBus(c+6,"AD3", false,-1, 4,0);
    tracep->declBus(c+56,"WD3", false,-1, 31,0);
    tracep->declBus(c+7,"RD1", false,-1, 31,0);
    tracep->declBus(c+8,"RD2", false,-1, 31,0);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+9+i*1,"REG_FILE", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+57,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBit(c+55,"EQ", false,-1);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBus(c+44,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+45,"ALUsrc", false,-1);
    tracep->declBus(c+46,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IM ");
    tracep->declBus(c+59,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+41,"A", false,-1, 19,0);
    tracep->declBus(c+3,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCT ");
    tracep->declBus(c+57,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->declBus(c+42,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+49,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+50,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+51,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBus(c+57,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+51,"next_PC", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SE ");
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBus(c+46,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+42,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__PC),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__instr),32);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->cpu__DOT__instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelf->cpu__DOT__instr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+6,((0x1fU & (vlSelf->cpu__DOT__instr 
                                      >> 7U))),5);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__ALU__DOT__ALUop1),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE
                            [(0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0x14U))]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[1]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[2]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[3]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[4]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[5]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[6]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[7]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[8]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[9]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[10]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[11]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[12]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[13]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[14]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[15]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[16]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[17]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[18]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[19]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[20]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[21]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[22]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[23]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[24]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[25]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[26]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[27]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[28]),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[29]),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[30]),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[31]),32);
    bufp->fullIData(oldp+41,((0xfffffU & vlSelf->cpu__DOT__PC)),20);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__ImmOp),32);
    bufp->fullBit(oldp+43,(vlSelf->cpu__DOT__RegWrite));
    bufp->fullCData(oldp+44,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__ImmSrc),3);
    bufp->fullBit(oldp+47,(vlSelf->cpu__DOT__PCsrc));
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__ALU__DOT__ALUop2),32);
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__PCT__DOT__branch_PC),32);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__PCT__DOT__inc_PC),32);
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__PCT__DOT__next_PC),32);
    bufp->fullBit(oldp+52,(vlSelf->clk));
    bufp->fullBit(oldp+53,(vlSelf->rst));
    bufp->fullIData(oldp+54,(vlSelf->a0),32);
    bufp->fullBit(oldp+55,((vlSelf->cpu__DOT__ALU__DOT__ALUop1 
                            == vlSelf->cpu__DOT__ALU__DOT__ALUop2)));
    bufp->fullIData(oldp+56,(((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                               ? ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                   ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                            ? 0U : 
                                           (vlSelf->cpu__DOT__ALU__DOT__ALUop1 
                                            < vlSelf->cpu__DOT__ALU__DOT__ALUop2)))
                               : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                       ? (vlSelf->cpu__DOT__ALU__DOT__ALUop1 
                                          | vlSelf->cpu__DOT__ALU__DOT__ALUop2)
                                       : (vlSelf->cpu__DOT__ALU__DOT__ALUop1 
                                          & vlSelf->cpu__DOT__ALU__DOT__ALUop2))
                                   : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                       ? (vlSelf->cpu__DOT__ALU__DOT__ALUop1 
                                          - vlSelf->cpu__DOT__ALU__DOT__ALUop2)
                                       : (vlSelf->cpu__DOT__ALU__DOT__ALUop1 
                                          + vlSelf->cpu__DOT__ALU__DOT__ALUop2))))),32);
    bufp->fullIData(oldp+57,(0x20U),32);
    bufp->fullIData(oldp+58,(5U),32);
    bufp->fullIData(oldp+59,(0x14U),32);
    bufp->fullIData(oldp+60,(8U),32);
}
