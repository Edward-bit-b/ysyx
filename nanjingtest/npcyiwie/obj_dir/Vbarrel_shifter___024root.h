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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(din,7,0);
        VL_IN8(shamt,2,0);
        VL_IN8(LR,0,0);
        VL_IN8(AL,0,0);
        VL_OUT8(dout,7,0);
        CData/*0:0*/ barrel_shifter__DOT__w0;
        CData/*0:0*/ barrel_shifter__DOT__w1;
        CData/*0:0*/ barrel_shifter__DOT__w2;
        CData/*0:0*/ barrel_shifter__DOT__w3;
        CData/*0:0*/ barrel_shifter__DOT__w4;
        CData/*0:0*/ barrel_shifter__DOT__w5;
        CData/*0:0*/ barrel_shifter__DOT__w6;
        CData/*0:0*/ barrel_shifter__DOT__w7;
        CData/*0:0*/ barrel_shifter__DOT__w8;
        CData/*0:0*/ barrel_shifter__DOT__w9;
        CData/*0:0*/ barrel_shifter__DOT__w10;
        CData/*0:0*/ barrel_shifter__DOT__w11;
        CData/*0:0*/ barrel_shifter__DOT__w12;
        CData/*0:0*/ barrel_shifter__DOT__w13;
        CData/*0:0*/ barrel_shifter__DOT__w14;
        CData/*0:0*/ barrel_shifter__DOT__w15;
        CData/*0:0*/ barrel_shifter__DOT__w16;
        CData/*1:0*/ barrel_shifter__DOT____Vcellinp__m2_0__Y;
        CData/*1:0*/ barrel_shifter__DOT____Vcellinp__m2_10__Y;
        CData/*0:0*/ barrel_shifter__DOT____Vcellout__m2_23__F;
        CData/*0:0*/ barrel_shifter__DOT____Vcellout__m2_22__F;
        CData/*0:0*/ barrel_shifter__DOT____Vcellout__m2_21__F;
        CData/*0:0*/ barrel_shifter__DOT____Vcellout__m2_20__F;
        CData/*0:0*/ barrel_shifter__DOT____Vcellout__m2_19__F;
        CData/*0:0*/ barrel_shifter__DOT____Vcellout__m2_18__F;
        CData/*0:0*/ barrel_shifter__DOT____Vcellout__m2_17__F;
        CData/*0:0*/ barrel_shifter__DOT____Vcellout__m2_16__F;
        CData/*1:0*/ barrel_shifter__DOT____Vcellinp__m2_16__Y;
        CData/*0:0*/ barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__lut_out;
    };
    struct {
        CData/*0:0*/ barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*1:0*/, 2> barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 4> barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

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
