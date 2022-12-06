// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__4__PROF__RegFile__l33(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__4__PROF__RegFile__l33\n"); );
    // Body
    vlSelf->__Vdlyvset__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0 = 0U;
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__5__PROF__PCReg__l11(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__5__PROF__PCReg__l11\n"); );
    // Body
    vlSelf->cpu__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->cpu__DOT__PCT__DOT__next_PC);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__6__PROF__RegFile__l32(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__6__PROF__RegFile__l32\n"); );
    // Body
    if (vlSelf->cpu__DOT__RegWrite) {
        vlSelf->__Vdlyvval__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0 
            = ((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
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
                           + vlSelf->cpu__DOT__ALU__DOT__ALUop2))));
        vlSelf->__Vdlyvset__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0 = 1U;
        vlSelf->__Vdlyvdim0__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0 
            = (0x1fU & (vlSelf->cpu__DOT__instr >> 7U));
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__8__PROF__RegFile__l33(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__8__PROF__RegFile__l33\n"); );
    // Body
    if (vlSelf->__Vdlyvset__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0) {
        vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE[vlSelf->__Vdlyvdim0__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0] 
            = vlSelf->__Vdlyvval__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0;
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__9__PROF__PCReg__l16(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__9__PROF__PCReg__l16\n"); );
    // Body
    VL_WRITEF("\n\n\n\nProgram Counter: %10#\n",32,
              vlSelf->cpu__DOT__PC);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__10__PROF__InstrMem__l17(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__10__PROF__InstrMem__l17\n"); );
    // Body
    vlSelf->cpu__DOT__instr = ((vlSelf->cpu__DOT__IM__DOT__ROM
                                [(0xfffffU & vlSelf->cpu__DOT__PC)] 
                                << 0x18U) | ((vlSelf->cpu__DOT__IM__DOT__ROM
                                              [(0xfffffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->cpu__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__IM__DOT__ROM
                                                 [(0xfffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->cpu__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__IM__DOT__ROM
                                                [(0xfffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->cpu__DOT__PC))])));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__11__PROF__RegFile__l25(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__11__PROF__RegFile__l25\n"); );
    // Body
    vlSelf->a0 = vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE
        [0xaU];
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__12__PROF__RegFile__l25(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__12__PROF__RegFile__l25\n"); );
    // Body
    vlSelf->cpu__DOT__ALU__DOT__ALUop1 = vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0__PROF__ALU__l11(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0__PROF__ALU__l11\n"); );
    // Body
    VL_WRITEF("    New line    \nALU1%10#\nALU2%10#\n",
              32,vlSelf->cpu__DOT__ALU__DOT__ALUop1,
              32,vlSelf->cpu__DOT__ALU__DOT__ALUop2);
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__1__PROF__ControlUnit__l13(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__1__PROF__ControlUnit__l13\n"); );
    // Body
    VL_WRITEF("Instr:   %10#\n",32,vlSelf->cpu__DOT__instr);
    vlSelf->cpu__DOT__RegWrite = 0U;
    vlSelf->cpu__DOT__ALUctrl = 7U;
    vlSelf->cpu__DOT__ALUsrc = 1U;
    vlSelf->cpu__DOT__ImmSrc = 7U;
    vlSelf->cpu__DOT__PCsrc = 0U;
    if ((0x13U == (0x7fU & vlSelf->cpu__DOT__instr))) {
        if (VL_LIKELY((0U == (7U & (vlSelf->cpu__DOT__instr 
                                    >> 0xcU))))) {
            vlSelf->cpu__DOT__RegWrite = 1U;
            vlSelf->cpu__DOT__ALUctrl = 0U;
            vlSelf->cpu__DOT__ImmSrc = 0U;
        } else {
            VL_WRITEF("Invalid Instruction\n");
        }
    } else if (VL_LIKELY((0x63U == (0x7fU & vlSelf->cpu__DOT__instr)))) {
        if (VL_LIKELY((1U == (7U & (vlSelf->cpu__DOT__instr 
                                    >> 0xcU))))) {
            if ((vlSelf->cpu__DOT__ALU__DOT__ALUop1 
                 == vlSelf->cpu__DOT__ALU__DOT__ALUop2)) {
                vlSelf->cpu__DOT__ALUsrc = 0U;
            } else {
                vlSelf->cpu__DOT__ALUctrl = 7U;
                vlSelf->cpu__DOT__ALUsrc = 0U;
                vlSelf->cpu__DOT__ImmSrc = 3U;
                vlSelf->cpu__DOT__PCsrc = 1U;
            }
        } else {
            VL_WRITEF("Invalid Instruction\n");
        }
    } else {
        VL_WRITEF("Invalid Instruction\n");
    }
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__2__PROF__SignExtend__l7(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__2__PROF__SignExtend__l7\n"); );
    // Body
    vlSelf->cpu__DOT__ImmOp = ((4U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                ? ((2U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                    ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                             ? 0U : 
                                            (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0x13U) 
                                             | ((0x7f800U 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    >> 1U)) 
                                                | ((0x400U 
                                                    & (vlSelf->cpu__DOT__instr 
                                                       >> 0xaU)) 
                                                   | (0x3ffU 
                                                      & (vlSelf->cpu__DOT__instr 
                                                         >> 0x15U)))))))
                                : ((2U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                    ? ((1U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                        ? (((- (IData)(
                                                       (vlSelf->cpu__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xbU) 
                                           | ((0x400U 
                                               & (vlSelf->cpu__DOT__instr 
                                                  << 3U)) 
                                              | ((0x3f0U 
                                                  & (vlSelf->cpu__DOT__instr 
                                                     >> 0x15U)) 
                                                 | (0xfU 
                                                    & (vlSelf->cpu__DOT__instr 
                                                       >> 8U)))))
                                        : (((- (IData)(
                                                       (vlSelf->cpu__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelf->cpu__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    >> 7U)))))
                                    : ((1U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                        ? (0xfffff000U 
                                           & vlSelf->cpu__DOT__instr)
                                        : (((- (IData)(
                                                       (vlSelf->cpu__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->cpu__DOT__instr 
                                              >> 0x14U)))));
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__3__PROF__ALUtop__l37(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__3__PROF__ALUtop__l37\n"); );
    // Body
    vlSelf->cpu__DOT__ALU__DOT__ALUop2 = ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                           ? vlSelf->cpu__DOT__ImmOp
                                           : vlSelf->cpu__DOT__ALU__DOT__rf__DOT__REG_FILE
                                          [(0x1fU & 
                                            (vlSelf->cpu__DOT__instr 
                                             >> 0x14U))]);
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__4__PROF__PCtop__l17(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__4__PROF__PCtop__l17\n"); );
    // Body
    vlSelf->cpu__DOT__PCT__DOT__inc_PC = ((IData)(4U) 
                                          + vlSelf->cpu__DOT__PC);
    vlSelf->cpu__DOT__PCT__DOT__branch_PC = (vlSelf->cpu__DOT__PC 
                                             + vlSelf->cpu__DOT__ImmOp);
    vlSelf->cpu__DOT__PCT__DOT__next_PC = ((IData)(vlSelf->cpu__DOT__PCsrc)
                                            ? vlSelf->cpu__DOT__PCT__DOT__branch_PC
                                            : vlSelf->cpu__DOT__PCT__DOT__inc_PC);
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vcpu___024root___sequent__TOP__4__PROF__RegFile__l33(vlSelf);
        Vcpu___024root___sequent__TOP__5__PROF__PCReg__l11(vlSelf);
        Vcpu___024root___sequent__TOP__6__PROF__RegFile__l32(vlSelf);
        Vcpu___024root___sequent__TOP__8__PROF__RegFile__l33(vlSelf);
        Vcpu___024root___sequent__TOP__9__PROF__PCReg__l16(vlSelf);
        Vcpu___024root___sequent__TOP__10__PROF__InstrMem__l17(vlSelf);
        Vcpu___024root___sequent__TOP__11__PROF__RegFile__l25(vlSelf);
        Vcpu___024root___sequent__TOP__12__PROF__RegFile__l25(vlSelf);
    }
    Vcpu___024root___combo__TOP__0__PROF__ALU__l11(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vcpu___024root___combo__TOP__1__PROF__ControlUnit__l13(vlSelf);
    Vcpu___024root___combo__TOP__2__PROF__SignExtend__l7(vlSelf);
    Vcpu___024root___combo__TOP__3__PROF__ALUtop__l37(vlSelf);
    Vcpu___024root___combo__TOP__4__PROF__PCtop__l17(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cpu__DOT__ALU__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__cpu__DOT__ALU__DOT__ALUop2));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__ALU__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__cpu__DOT__ALU__DOT__ALUop2))) VL_DBG_MSGF("        CHANGE: ALUtop.sv:19: cpu.ALU.ALUop2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu__DOT__ALU__DOT__ALUop2 
        = vlSelf->cpu__DOT__ALU__DOT__ALUop2;
    return __req;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
