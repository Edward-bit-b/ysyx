// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexample__Syms.h"


void Vexample___024root__trace_chg_sub_0(Vexample___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vexample___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_chg_top_0\n"); );
    // Init
    Vexample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexample___024root*>(voidSelf);
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vexample___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vexample___024root__trace_chg_sub_0(Vexample___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+4,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+5,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+6,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+7,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+11,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+12,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+13,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+14,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+15,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+16,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+17,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+18,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+19,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+20,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+21,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+22,(vlSelf->out));
    bufp->chgBit(oldp+23,(vlSelf->key));
    bufp->chgBit(oldp+24,(vlSelf->default_out));
    bufp->chgCData(oldp+25,(vlSelf->lut),4);
    bufp->chgCData(oldp+26,(vlSelf->X0),2);
    bufp->chgCData(oldp+27,(vlSelf->X1),2);
    bufp->chgCData(oldp+28,(vlSelf->X2),2);
    bufp->chgCData(oldp+29,(vlSelf->X3),2);
    bufp->chgCData(oldp+30,(vlSelf->Y),2);
    bufp->chgCData(oldp+31,(vlSelf->F),2);
    bufp->chgSData(oldp+32,((0x48cU | (((IData)(vlSelf->X0) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->X1) 
                                         << 8U) | (
                                                   ((IData)(vlSelf->X2) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->X3)))))),16);
}

void Vexample___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_cleanup\n"); );
    // Init
    Vexample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexample___024root*>(voidSelf);
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
