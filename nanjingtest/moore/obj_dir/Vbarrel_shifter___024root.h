// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbarrel_shifter.h for the primary calling header

#ifndef VERILATED_VBARREL_SHIFTER___024ROOT_H_
#define VERILATED_VBARREL_SHIFTER___024ROOT_H_  // guard

#include "verilated.h"

class Vbarrel_shifter__Syms;

class Vbarrel_shifter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(out,0,0);
    CData/*3:0*/ barrel_shifter__DOT__state;
    CData/*3:0*/ barrel_shifter__DOT__state_next;
    CData/*0:0*/ barrel_shifter__DOT__din;
    CData/*0:0*/ barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit;
    CData/*3:0*/ barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*4:0*/, 9> barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 9> barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 9> barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*7:0*/, 9> barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 9> barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*3:0*/, 9> barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbarrel_shifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbarrel_shifter___024root(Vbarrel_shifter__Syms* symsp, const char* v__name);
    ~Vbarrel_shifter___024root();
    VL_UNCOPYABLE(Vbarrel_shifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
