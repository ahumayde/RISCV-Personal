// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ cpu__DOT__RegWrite;
    CData/*2:0*/ cpu__DOT__ALUctrl;
    CData/*0:0*/ cpu__DOT__ALUsrc;
    CData/*2:0*/ cpu__DOT__ImmSrc;
    CData/*0:0*/ cpu__DOT__PCsrc;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT__PC;
    IData/*31:0*/ cpu__DOT__instr;
    IData/*31:0*/ cpu__DOT__ImmOp;
    IData/*31:0*/ cpu__DOT__PCT__DOT__branch_PC;
    IData/*31:0*/ cpu__DOT__PCT__DOT__inc_PC;
    IData/*31:0*/ cpu__DOT__PCT__DOT__next_PC;
    IData/*31:0*/ cpu__DOT__ALU__DOT__ALUop1;
    IData/*31:0*/ cpu__DOT__ALU__DOT__ALUop2;
    IData/*31:0*/ cpu__DOT__ALU__DOT__rf__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__ALU__DOT__rf__DOT__REG_FILE__v0;
    IData/*31:0*/ __Vchglast__TOP__cpu__DOT__ALU__DOT__ALUop2;
    VlUnpacked<CData/*7:0*/, 1048576> cpu__DOT__IM__DOT__ROM;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__ALU__DOT__rf__DOT__REG_FILE;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
