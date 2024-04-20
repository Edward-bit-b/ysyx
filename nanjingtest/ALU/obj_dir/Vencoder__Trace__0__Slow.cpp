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
    tracep->declBus(c+38,"A", false,-1, 3,0);
    tracep->declBus(c+39,"B", false,-1, 3,0);
    tracep->declBus(c+40,"command_input", false,-1, 2,0);
    tracep->declBus(c+41,"Result", false,-1, 3,0);
    tracep->declBit(c+42,"Carry", false,-1);
    tracep->declBit(c+43,"Overflow", false,-1);
    tracep->declBit(c+44,"Out", false,-1);
    tracep->pushNamePrefix("encoder ");
    tracep->declBus(c+38,"A", false,-1, 3,0);
    tracep->declBus(c+39,"B", false,-1, 3,0);
    tracep->declBus(c+40,"command_input", false,-1, 2,0);
    tracep->declBus(c+41,"Result", false,-1, 3,0);
    tracep->declBit(c+42,"Carry", false,-1);
    tracep->declBit(c+43,"Overflow", false,-1);
    tracep->declBit(c+44,"Out", false,-1);
    tracep->declBus(c+45,"w0", false,-1, 3,0);
    tracep->declBus(c+9,"Result_end", false,-1, 6,0);
    tracep->declBus(c+10,"Result_1", false,-1, 6,0);
    tracep->declBus(c+11,"Result_11", false,-1, 4,0);
    tracep->declBit(c+46,"Result_12", false,-1);
    tracep->declBit(c+51,"Result_13", false,-1);
    tracep->declBus(c+12,"Result_2", false,-1, 6,0);
    tracep->declBus(c+13,"Result_21", false,-1, 4,0);
    tracep->declBit(c+14,"Result_22", false,-1);
    tracep->declBit(c+51,"Result_23", false,-1);
    tracep->declBus(c+47,"Result_3", false,-1, 6,0);
    tracep->declBus(c+15,"Result_4", false,-1, 6,0);
    tracep->declBus(c+16,"Result_5", false,-1, 6,0);
    tracep->declBus(c+17,"Result_6", false,-1, 6,0);
    tracep->declBus(c+18,"Result_7", false,-1, 6,0);
    tracep->declBus(c+19,"Result_8", false,-1, 6,0);
    tracep->pushNamePrefix("mux41 ");
    tracep->declBus(c+10,"Result_1", false,-1, 6,0);
    tracep->declBus(c+12,"Result_2", false,-1, 6,0);
    tracep->declBus(c+47,"Result_3", false,-1, 6,0);
    tracep->declBus(c+15,"Result_4", false,-1, 6,0);
    tracep->declBus(c+16,"Result_5", false,-1, 6,0);
    tracep->declBus(c+17,"Result_6", false,-1, 6,0);
    tracep->declBus(c+18,"Result_7", false,-1, 6,0);
    tracep->declBus(c+19,"Result_8", false,-1, 6,0);
    tracep->declBus(c+40,"Y", false,-1, 2,0);
    tracep->declBus(c+9,"F", false,-1, 6,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+52,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+53,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+54,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+9,"out", false,-1, 6,0);
    tracep->declBus(c+40,"key", false,-1, 2,0);
    tracep->declArray(c+48,"lut", false,-1, 79,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+52,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+53,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+54,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+55,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+9,"out", false,-1, 6,0);
    tracep->declBus(c+40,"key", false,-1, 2,0);
    tracep->declBus(c+56,"default_out", false,-1, 6,0);
    tracep->declArray(c+48,"lut", false,-1, 79,0);
    tracep->declBus(c+57,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+20+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+28+i*1,"data_list", true,(i+0), 6,0);
    }
    tracep->declBus(c+36,"lut_out", false,-1, 6,0);
    tracep->declBit(c+37,"hit", false,-1);
    tracep->declBus(c+58,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
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
    VlWide<3>/*95:0*/ __Vtemp_h1a922b4b__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+9,(vlSelf->encoder__DOT__Result_end),7);
    bufp->fullCData(oldp+10,(vlSelf->__VdfgTmp_h20a57425__0),7);
    bufp->fullCData(oldp+11,(vlSelf->encoder__DOT__Result_11),5);
    bufp->fullCData(oldp+12,(vlSelf->__VdfgTmp_hadb6aab4__0),7);
    bufp->fullCData(oldp+13,(vlSelf->encoder__DOT__Result_21),5);
    bufp->fullBit(oldp+14,(vlSelf->encoder__DOT__Result_22));
    bufp->fullCData(oldp+15,(vlSelf->__VdfgTmp_h4367937f__0),7);
    bufp->fullCData(oldp+16,(vlSelf->__VdfgTmp_h40fffc82__0),7);
    bufp->fullCData(oldp+17,(vlSelf->__VdfgTmp_h45b2e017__0),7);
    bufp->fullCData(oldp+18,(vlSelf->encoder__DOT__Result_7),7);
    bufp->fullCData(oldp+19,(vlSelf->__VdfgTmp_h3bab1881__0),7);
    bufp->fullSData(oldp+20,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+21,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+22,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+23,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+24,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+25,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+26,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+27,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullCData(oldp+28,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[0]),7);
    bufp->fullCData(oldp+29,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[1]),7);
    bufp->fullCData(oldp+30,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[2]),7);
    bufp->fullCData(oldp+31,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[3]),7);
    bufp->fullCData(oldp+32,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[4]),7);
    bufp->fullCData(oldp+33,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[5]),7);
    bufp->fullCData(oldp+34,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[6]),7);
    bufp->fullCData(oldp+35,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[7]),7);
    bufp->fullCData(oldp+36,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out),7);
    bufp->fullBit(oldp+37,(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+38,(vlSelf->A),4);
    bufp->fullCData(oldp+39,(vlSelf->B),4);
    bufp->fullCData(oldp+40,(vlSelf->command_input),3);
    bufp->fullCData(oldp+41,(vlSelf->Result),4);
    bufp->fullBit(oldp+42,(vlSelf->Carry));
    bufp->fullBit(oldp+43,(vlSelf->Overflow));
    bufp->fullBit(oldp+44,(vlSelf->Out));
    bufp->fullCData(oldp+45,((0xfU & (~ (IData)(vlSelf->B)))),4);
    bufp->fullBit(oldp+46,(((IData)(vlSelf->encoder__DOT____VdfgTmp_he1deb3f6__0) 
                            & ((1U & ((IData)(vlSelf->encoder__DOT__Result_11) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->A) 
                                                     >> 3U))))));
    bufp->fullCData(oldp+47,((0xfU & (~ (IData)(vlSelf->A)))),7);
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
    bufp->fullWData(oldp+48,(__Vtemp_h1a922b4b__0),80);
    bufp->fullBit(oldp+51,(0U));
    bufp->fullIData(oldp+52,(8U),32);
    bufp->fullIData(oldp+53,(3U),32);
    bufp->fullIData(oldp+54,(7U),32);
    bufp->fullIData(oldp+55,(0U),32);
    bufp->fullCData(oldp+56,(0U),7);
    bufp->fullIData(oldp+57,(0xaU),32);
    bufp->fullIData(oldp+58,(8U),32);
}
