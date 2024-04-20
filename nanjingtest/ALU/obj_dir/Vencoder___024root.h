// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder.h for the primary calling header

#ifndef VERILATED_VENCODER___024ROOT_H_
#define VERILATED_VENCODER___024ROOT_H_  // guard

#include "verilated.h"

class Vencoder__Syms;

class Vencoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(command_input,2,0);
    VL_OUT8(Result,3,0);
    VL_OUT8(Carry,0,0);
    VL_OUT8(Overflow,0,0);
    VL_OUT8(Out,0,0);
    CData/*6:0*/ encoder__DOT__Result_end;
    CData/*4:0*/ encoder__DOT__Result_11;
    CData/*4:0*/ encoder__DOT__Result_21;
    CData/*0:0*/ encoder__DOT__Result_22;
    CData/*6:0*/ encoder__DOT__Result_7;
    CData/*0:0*/ encoder__DOT____VdfgTmp_he1deb3f6__0;
    CData/*6:0*/ encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit;
    CData/*5:0*/ __VdfgTmp_h20a57425__0;
    CData/*5:0*/ __VdfgTmp_hadb6aab4__0;
    CData/*3:0*/ __VdfgTmp_h4367937f__0;
    CData/*3:0*/ __VdfgTmp_h40fffc82__0;
    CData/*3:0*/ __VdfgTmp_h45b2e017__0;
    CData/*5:0*/ __VdfgTmp_h3bab1881__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*9:0*/, 8> encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*6:0*/, 8> encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vencoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencoder___024root(Vencoder__Syms* symsp, const char* v__name);
    ~Vencoder___024root();
    VL_UNCOPYABLE(Vencoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
