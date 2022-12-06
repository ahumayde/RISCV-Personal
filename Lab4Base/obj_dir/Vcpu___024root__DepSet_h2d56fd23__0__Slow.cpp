// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0__PROF__RegFile__l20(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0__PROF__RegFile__l20\n"); );
    // Body
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[1U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[2U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[3U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[4U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[5U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[6U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[7U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[8U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[9U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0xaU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0xbU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0xcU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0xdU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0xeU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0xfU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x10U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x11U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x12U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x13U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x14U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x15U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x16U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x17U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x18U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x19U] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x1aU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x1bU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x1cU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x1dU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x1eU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[0x1fU] = 0U;
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vcpu___024root___initial__TOP__1__PROF__InstrMem__l11(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__1__PROF__InstrMem__l11\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h7a436e3a__0;
    // Body
    VL_WRITEF("Loading ROM\n");
    __Vtemp_h7a436e3a__0[0U] = 0x2e6d656dU;
    __Vtemp_h7a436e3a__0[1U] = 0x724d656dU;
    __Vtemp_h7a436e3a__0[2U] = 0x496e7374U;
    VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h7a436e3a__0)
                 ,  &(vlSelf->cpu__DOT__IM__DOT__ROM)
                 , 0, ~0ULL);
    VL_WRITEF("Instructions written to ROM successfully\n");
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0__PROF__RegFile__l20(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vcpu___024root___initial__TOP__1__PROF__InstrMem__l11(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcpu___024root___sequent__TOP__9__PROF__PCReg__l16(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__11__PROF__RegFile__l25(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__10__PROF__InstrMem__l17(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__12__PROF__RegFile__l25(Vcpu___024root* vlSelf);
void Vcpu___024root___combo__TOP__0__PROF__ALU__l11(Vcpu___024root* vlSelf);
void Vcpu___024root___combo__TOP__1__PROF__ControlUnit__l13(Vcpu___024root* vlSelf);
void Vcpu___024root___combo__TOP__2__PROF__SignExtend__l7(Vcpu___024root* vlSelf);
void Vcpu___024root___combo__TOP__3__PROF__ALUtop__l37(Vcpu___024root* vlSelf);
void Vcpu___024root___combo__TOP__4__PROF__PCtop__l17(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___sequent__TOP__9__PROF__PCReg__l16(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vcpu___024root___sequent__TOP__11__PROF__RegFile__l25(vlSelf);
    Vcpu___024root___sequent__TOP__10__PROF__InstrMem__l17(vlSelf);
    Vcpu___024root___sequent__TOP__12__PROF__RegFile__l25(vlSelf);
    Vcpu___024root___combo__TOP__0__PROF__ALU__l11(vlSelf);
    Vcpu___024root___combo__TOP__1__PROF__ControlUnit__l13(vlSelf);
    Vcpu___024root___combo__TOP__2__PROF__SignExtend__l7(vlSelf);
    Vcpu___024root___combo__TOP__3__PROF__ALUtop__l37(vlSelf);
    Vcpu___024root___combo__TOP__4__PROF__PCtop__l17(vlSelf);
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__PCT__DOT__branch_PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCT__DOT__inc_PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCT__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->cpu__DOT__IM__DOT__ROM[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__ALU__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ALU__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__ALU__DOT__rf__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vdlyvdim0__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0 = 0;
    vlSelf->__Vchglast__TOP__cpu__DOT__ALU__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
