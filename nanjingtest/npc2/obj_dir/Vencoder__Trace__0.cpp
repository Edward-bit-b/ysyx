// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencoder__Syms.h"


void Vencoder___024root__trace_chg_sub_0(Vencoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vencoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_chg_top_0\n"); );
    // Init
    Vencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vencoder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vencoder___024root__trace_chg_sub_0(Vencoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->in_x),4);
    bufp->chgCData(oldp+1,(vlSelf->in_y),4);
    bufp->chgCData(oldp+2,(vlSelf->out_s),4);
    bufp->chgBit(oldp+3,(vlSelf->out_c));
}

void Vencoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_cleanup\n"); );
    // Init
    Vencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
