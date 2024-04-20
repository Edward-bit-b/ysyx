// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexample__Syms.h"


VL_ATTR_COLD void Vexample___024root__trace_init_sub__TOP__0(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+23,"out", false,-1, 0,0);
    tracep->declBus(c+24,"key", false,-1, 0,0);
    tracep->declBus(c+25,"default_out", false,-1, 0,0);
    tracep->declBus(c+26,"lut", false,-1, 3,0);
    tracep->declBus(c+27,"X0", false,-1, 1,0);
    tracep->declBus(c+28,"X1", false,-1, 1,0);
    tracep->declBus(c+29,"X2", false,-1, 1,0);
    tracep->declBus(c+30,"X3", false,-1, 1,0);
    tracep->declBus(c+31,"Y", false,-1, 1,0);
    tracep->declBus(c+32,"F", false,-1, 1,0);
    tracep->pushNamePrefix("MuxKeyWithDefault ");
    tracep->declBus(c+34,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+35,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+35,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+23,"out", false,-1, 0,0);
    tracep->declBus(c+24,"key", false,-1, 0,0);
    tracep->declBus(c+25,"default_out", false,-1, 0,0);
    tracep->declBus(c+26,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+34,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+35,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+35,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+35,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+23,"out", false,-1, 0,0);
    tracep->declBus(c+24,"key", false,-1, 0,0);
    tracep->declBus(c+25,"default_out", false,-1, 0,0);
    tracep->declBus(c+26,"lut", false,-1, 3,0);
    tracep->declBus(c+34,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+11,"lut_out", false,-1, 0,0);
    tracep->declBit(c+12,"hit", false,-1);
    tracep->declBus(c+36,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux41e ");
    tracep->declBus(c+27,"X0", false,-1, 1,0);
    tracep->declBus(c+28,"X1", false,-1, 1,0);
    tracep->declBus(c+29,"X2", false,-1, 1,0);
    tracep->declBus(c+30,"X3", false,-1, 1,0);
    tracep->declBus(c+31,"Y", false,-1, 1,0);
    tracep->declBus(c+32,"F", false,-1, 1,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+37,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+34,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+34,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+32,"out", false,-1, 1,0);
    tracep->declBus(c+31,"key", false,-1, 1,0);
    tracep->declBus(c+33,"lut", false,-1, 15,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+37,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+34,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+34,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+38,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+32,"out", false,-1, 1,0);
    tracep->declBus(c+31,"key", false,-1, 1,0);
    tracep->declBus(c+39,"default_out", false,-1, 1,0);
    tracep->declBus(c+33,"lut", false,-1, 15,0);
    tracep->declBus(c+37,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+13+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+17+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+21,"lut_out", false,-1, 1,0);
    tracep->declBit(c+22,"hit", false,-1);
    tracep->declBus(c+40,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vexample___024root__trace_init_top(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_init_top\n"); );
    // Body
    Vexample___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vexample___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexample___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexample___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vexample___024root__trace_register(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vexample___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vexample___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vexample___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vexample___024root__trace_full_sub_0(Vexample___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexample___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_full_top_0\n"); );
    // Init
    Vexample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexample___024root*>(voidSelf);
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexample___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexample___024root__trace_full_sub_0(Vexample___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+6,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+7,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+11,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+12,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+13,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+14,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+15,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+16,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+17,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+18,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+19,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+20,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+21,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+22,(vlSelf->mux41e__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+23,(vlSelf->out));
    bufp->fullBit(oldp+24,(vlSelf->key));
    bufp->fullBit(oldp+25,(vlSelf->default_out));
    bufp->fullCData(oldp+26,(vlSelf->lut),4);
    bufp->fullCData(oldp+27,(vlSelf->X0),2);
    bufp->fullCData(oldp+28,(vlSelf->X1),2);
    bufp->fullCData(oldp+29,(vlSelf->X2),2);
    bufp->fullCData(oldp+30,(vlSelf->X3),2);
    bufp->fullCData(oldp+31,(vlSelf->Y),2);
    bufp->fullCData(oldp+32,(vlSelf->F),2);
    bufp->fullSData(oldp+33,((0x48cU | (((IData)(vlSelf->X0) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->X1) 
                                          << 8U) | 
                                         (((IData)(vlSelf->X2) 
                                           << 4U) | (IData)(vlSelf->X3)))))),16);
    bufp->fullIData(oldp+34,(2U),32);
    bufp->fullIData(oldp+35,(1U),32);
    bufp->fullIData(oldp+36,(2U),32);
    bufp->fullIData(oldp+37,(4U),32);
    bufp->fullIData(oldp+38,(0U),32);
    bufp->fullCData(oldp+39,(0U),2);
    bufp->fullIData(oldp+40,(4U),32);
}
