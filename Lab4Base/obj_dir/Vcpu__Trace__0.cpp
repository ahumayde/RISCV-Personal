// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__PC),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__instr),32);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->cpu__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->cpu__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->cpu__DOT__instr 
                                         >> 7U))),5);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__ALU__DOT__ALUop1),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE
                               [(0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 0x14U))]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[1]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[2]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[3]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[4]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[5]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[6]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[7]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[8]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[9]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[10]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[11]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[12]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[13]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[14]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[15]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[16]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[17]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[18]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[19]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[20]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[21]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[22]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[23]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[24]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[25]),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[26]),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[27]),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[28]),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[29]),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[30]),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[31]),32);
        bufp->chgIData(oldp+40,((0xfffffU & vlSelf->cpu__DOT__PC)),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__ImmOp),32);
        bufp->chgBit(oldp+42,(vlSelf->cpu__DOT__RegWrite));
        bufp->chgCData(oldp+43,(vlSelf->cpu__DOT__ALUctrl),3);
        bufp->chgBit(oldp+44,(vlSelf->cpu__DOT__ALUsrc));
        bufp->chgCData(oldp+45,(vlSelf->cpu__DOT__ImmSrc),3);
        bufp->chgBit(oldp+46,(vlSelf->cpu__DOT__PCsrc));
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__ALU__DOT__ALUop2),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__PCT__DOT__branch_PC),32);
        bufp->chgIData(oldp+49,(vlSelf->cpu__DOT__PCT__DOT__inc_PC),32);
        bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__PCT__DOT__next_PC),32);
    }
    bufp->chgBit(oldp+51,(vlSelf->clk));
    bufp->chgBit(oldp+52,(vlSelf->rst));
    bufp->chgIData(oldp+53,(vlSelf->a0),32);
    bufp->chgBit(oldp+54,((vlSelf->cpu__DOT__ALU__DOT__ALUop1 
                           == vlSelf->cpu__DOT__ALU__DOT__ALUop2)));
    bufp->chgIData(oldp+55,(((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                              ? ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                  ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                           ? 0U : (vlSelf->cpu__DOT__ALU__DOT__ALUop1 
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
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
