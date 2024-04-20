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
    VL_IN8(X,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,2,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
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
