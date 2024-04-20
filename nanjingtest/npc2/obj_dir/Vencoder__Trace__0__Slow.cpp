// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencoder__Syms.h"


VL_ATTR_COLD void Vencoder___024root__trace_init_sub__TOP__0(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"in_x", false,-1, 3,0);
    tracep->declBus(c+2,"in_y", false,-1, 3,0);
    tracep->declBus(c+3,"out_s", false,-1, 3,0);
    tracep->declBit(c+4,"out_c", false,-1);
    tracep->pushNamePrefix("encoder ");
    tracep->declBus(c+1,"in_x", false,-1, 3,0);
    tracep->declBus(c+2,"in_y", false,-1, 3,0);
    tracep->declBus(c+3,"out_s", false,-1, 3,0);
    tracep->declBit(c+4,"out_c", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vencoder___024root__trace_init_top(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_init_top\n"); );
    // Body
    Vencoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vencoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vencoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vencoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vencoder___024root__trace_register(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vencoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vencoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vencoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vencoder___024root__trace_full_sub_0(Vencoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vencoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_full_top_0\n"); );
    // Init
    Vencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vencoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vencoder___024root__trace_full_sub_0(Vencoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->in_x),4);
    bufp->fullCData(oldp+2,(vlSelf->in_y),4);
    bufp->fullCData(oldp+3,(vlSelf->out_s),4);
    bufp->fullBit(oldp+4,(vlSelf->out_c));
}
