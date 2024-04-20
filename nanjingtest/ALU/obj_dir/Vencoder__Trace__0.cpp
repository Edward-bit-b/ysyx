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
    VlWide<3>/*95:0*/ __Vtemp_h1a922b4b__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+7,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+8,(vlSelf->encoder__DOT__Result_end),7);
        bufp->chgCData(oldp+9,(vlSelf->__VdfgTmp_h20a57425__0),7);
        bufp->chgCData(oldp+10,(vlSelf->encoder__DOT__Result_11),5);
        bufp->chgCData(oldp+11,(vlSelf->__VdfgTmp_hadb6aab4__0),7);
        bufp->chgCData(oldp+12,(vlSelf->encoder__DOT__Result_21),5);
        bufp->chgBit(oldp+13,(vlSelf->encoder__DOT__Result_22));
        bufp->chgCData(oldp+14,(vlSelf->__VdfgTmp_h4367937f__0),7);
        bufp->chgCData(oldp+15,(vlSelf->__VdfgTmp_h40fffc82__0),7);
        bufp->chgCData(oldp+16,(vlSelf->__VdfgTmp_h45b2e017__0),7);
        bufp->chgCData(oldp+17,(vlSelf->encoder__DOT__Result_7),7);
        bufp->chgCData(oldp+18,(vlSelf->__VdfgTmp_h3bab1881__0),7);
        bufp->chgSData(oldp+19,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+20,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+21,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+22,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+23,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+24,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+25,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+26,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgCData(oldp+27,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[0]),7);
        bufp->chgCData(oldp+28,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[1]),7);
        bufp->chgCData(oldp+29,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[2]),7);
        bufp->chgCData(oldp+30,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[3]),7);
        bufp->chgCData(oldp+31,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[4]),7);
        bufp->chgCData(oldp+32,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[5]),7);
        bufp->chgCData(oldp+33,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[6]),7);
        bufp->chgCData(oldp+34,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[7]),7);
        bufp->chgCData(oldp+35,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out),7);
        bufp->chgBit(oldp+36,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit));
    }
    bufp->chgCData(oldp+37,(vlSelf->A),4);
    bufp->chgCData(oldp+38,(vlSelf->B),4);
    bufp->chgCData(oldp+39,(vlSelf->command_input),3);
    bufp->chgCData(oldp+40,(vlSelf->Result),4);
    bufp->chgBit(oldp+41,(vlSelf->Carry));
    bufp->chgBit(oldp+42,(vlSelf->Overflow));
    bufp->chgBit(oldp+43,(vlSelf->Out));
    bufp->chgCData(oldp+44,((0xfU & (~ (IData)(vlSelf->B)))),4);
    bufp->chgBit(oldp+45,(((IData)(vlSelf->encoder__DOT____VdfgTmp_he1deb3f6__0) 
                           & ((1U & ((IData)(vlSelf->encoder__DOT__Result_11) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 3U))))));
    bufp->chgCData(oldp+46,((0xfU & (~ (IData)(vlSelf->A)))),7);
    __Vtemp_h1a922b4b__0[0U] = (IData)((0x401808000000000ULL 
                                        | (((QData)((IData)(
                                                            (0xfU 
                                                             & (~ (IData)(vlSelf->A))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(vlSelf->__VdfgTmp_h4367937f__0)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(vlSelf->__VdfgTmp_h40fffc82__0)) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (0x280c0380U 
                                                                    | (((IData)(vlSelf->__VdfgTmp_h45b2e017__0) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->encoder__DOT__Result_7) 
                                                                           << 0xaU) 
                                                                          | (IData)(vlSelf->__VdfgTmp_h3bab1881__0)))))))))));
    __Vtemp_h1a922b4b__0[1U] = (((IData)(vlSelf->__VdfgTmp_hadb6aab4__0) 
                                 << 0x1cU) | (IData)(
                                                     ((0x401808000000000ULL 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & (~ (IData)(vlSelf->A))))) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(vlSelf->__VdfgTmp_h4367937f__0)) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(vlSelf->__VdfgTmp_h40fffc82__0)) 
                                                                 << 0x1eU) 
                                                                | (QData)((IData)(
                                                                                (0x280c0380U 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h45b2e017__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->encoder__DOT__Result_7) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h3bab1881__0)))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h1a922b4b__0[2U] = (8U | (((IData)(vlSelf->__VdfgTmp_h20a57425__0) 
                                       << 6U) | ((IData)(vlSelf->__VdfgTmp_hadb6aab4__0) 
                                                 >> 4U)));
    bufp->chgWData(oldp+47,(__Vtemp_h1a922b4b__0),80);
}

void Vencoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root__trace_cleanup\n"); );
    // Init
    Vencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
