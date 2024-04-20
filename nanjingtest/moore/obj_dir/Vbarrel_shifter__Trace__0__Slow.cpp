// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_shifter__Syms.h"


VL_ATTR_COLD void Vbarrel_shifter___024root__trace_init_sub__TOP__0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"in", false,-1);
    tracep->declBit(c+67,"reset", false,-1);
    tracep->declBit(c+68,"out", false,-1);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"in", false,-1);
    tracep->declBit(c+67,"reset", false,-1);
    tracep->declBit(c+68,"out", false,-1);
    tracep->declBus(c+37,"state", false,-1, 3,0);
    tracep->declBus(c+38,"state_next", false,-1, 3,0);
    tracep->declBit(c+39,"din", false,-1);
    tracep->declBus(c+69,"S0", false,-1, 3,0);
    tracep->declBus(c+70,"S1", false,-1, 3,0);
    tracep->declBus(c+71,"S2", false,-1, 3,0);
    tracep->declBus(c+72,"S3", false,-1, 3,0);
    tracep->declBus(c+73,"S4", false,-1, 3,0);
    tracep->declBus(c+74,"S5", false,-1, 3,0);
    tracep->declBus(c+75,"S6", false,-1, 3,0);
    tracep->declBus(c+76,"S7", false,-1, 3,0);
    tracep->declBus(c+77,"S8", false,-1, 3,0);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+37,"Y", false,-1, 3,0);
    tracep->declBit(c+68,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+78,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+79,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+80,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 0,0);
    tracep->declBus(c+37,"key", false,-1, 3,0);
    tracep->declQuad(c+81,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+78,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+79,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+80,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 0,0);
    tracep->declBus(c+37,"key", false,-1, 3,0);
    tracep->declBus(c+84,"default_out", false,-1, 0,0);
    tracep->declQuad(c+81,"lut", false,-1, 44,0);
    tracep->declBus(c+85,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+10+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+40,"lut_out", false,-1, 0,0);
    tracep->declBit(c+41,"hit", false,-1);
    tracep->declBus(c+86,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("muxx ");
    tracep->declBus(c+37,"Y", false,-1, 3,0);
    tracep->declBus(c+69,"S0", false,-1, 3,0);
    tracep->declBus(c+70,"S1", false,-1, 3,0);
    tracep->declBus(c+71,"S2", false,-1, 3,0);
    tracep->declBus(c+72,"S3", false,-1, 3,0);
    tracep->declBus(c+73,"S4", false,-1, 3,0);
    tracep->declBus(c+74,"S5", false,-1, 3,0);
    tracep->declBus(c+75,"S6", false,-1, 3,0);
    tracep->declBus(c+76,"S7", false,-1, 3,0);
    tracep->declBus(c+77,"S8", false,-1, 3,0);
    tracep->declBit(c+39,"din", false,-1);
    tracep->declBus(c+38,"F", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+78,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+79,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+79,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+38,"out", false,-1, 3,0);
    tracep->declBus(c+37,"key", false,-1, 3,0);
    tracep->declArray(c+42,"lut", false,-1, 71,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+78,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+79,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+79,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+38,"out", false,-1, 3,0);
    tracep->declBus(c+37,"key", false,-1, 3,0);
    tracep->declBus(c+69,"default_out", false,-1, 3,0);
    tracep->declArray(c+42,"lut", false,-1, 71,0);
    tracep->declBus(c+87,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+45+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+28+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+54+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+63,"lut_out", false,-1, 3,0);
    tracep->declBit(c+64,"hit", false,-1);
    tracep->declBus(c+86,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_init_top(Vbarrel_shifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_init_top\n"); );
    // Body
    Vbarrel_shifter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbarrel_shifter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbarrel_shifter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_register(Vbarrel_shifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbarrel_shifter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbarrel_shifter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbarrel_shifter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_full_sub_0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_full_top_0\n"); );
    // Init
    Vbarrel_shifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter___024root*>(voidSelf);
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbarrel_shifter___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbarrel_shifter___024root__trace_full_sub_0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hcbd06a5f__0;
    VlWide<3>/*95:0*/ __Vtemp_h261cadfa__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+2,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+3,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+4,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+5,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+6,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+7,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+8,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[7]),5);
    bufp->fullCData(oldp+9,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__pair_list[8]),5);
    bufp->fullCData(oldp+10,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+11,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+12,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+13,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+14,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+15,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+16,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+17,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+18,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list[8]),4);
    bufp->fullBit(oldp+19,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+20,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+21,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+22,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+23,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+24,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+25,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+26,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+27,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list[8]));
    bufp->fullCData(oldp+28,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+29,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+30,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+31,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+32,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+33,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+34,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+35,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+36,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+37,(vlSelf->barrel_shifter__DOT__state),4);
    bufp->fullCData(oldp+38,(vlSelf->barrel_shifter__DOT__state_next),4);
    bufp->fullBit(oldp+39,(vlSelf->barrel_shifter__DOT__din));
    bufp->fullBit(oldp+40,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+41,(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit));
    __Vtemp_hcbd06a5f__0[1U] = (IData)(((0x1020304000000000ULL 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                               ? 5U
                                                               : 2U))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                  ? 5U
                                                                  : 3U))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                     ? 5U
                                                                     : 4U))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                        ? 5U
                                                                        : 4U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0x50607080U 
                                                                        | ((((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                              ? 6U
                                                                              : 1U) 
                                                                            << 0x18U) 
                                                                           | ((((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                                 ? 7U
                                                                                 : 1U) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))) 
                                        >> 0x20U));
    __Vtemp_h261cadfa__0[0U] = (IData)((0x1020304000000000ULL 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                              ? 5U
                                                              : 2U))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                 ? 5U
                                                                 : 3U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                    ? 5U
                                                                    : 4U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                       ? 5U
                                                                       : 4U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0x50607080U 
                                                                       | ((((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                             ? 6U
                                                                             : 1U) 
                                                                           << 0x18U) 
                                                                          | ((((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                                ? 7U
                                                                                : 1U) 
                                                                              << 0x10U) 
                                                                             | ((((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->barrel_shifter__DOT__din)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))));
    __Vtemp_h261cadfa__0[1U] = __Vtemp_hcbd06a5f__0[1U];
    __Vtemp_h261cadfa__0[2U] = ((IData)(vlSelf->barrel_shifter__DOT__din)
                                 ? 5U : 1U);
    bufp->fullWData(oldp+42,(__Vtemp_h261cadfa__0),72);
    bufp->fullCData(oldp+45,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+46,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+47,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+48,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+49,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[4]),8);
    bufp->fullCData(oldp+50,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[5]),8);
    bufp->fullCData(oldp+51,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[6]),8);
    bufp->fullCData(oldp+52,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[7]),8);
    bufp->fullCData(oldp+53,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[8]),8);
    bufp->fullCData(oldp+54,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+55,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+56,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+57,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+58,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+59,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+60,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+61,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+62,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[8]),4);
    bufp->fullCData(oldp+63,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+64,(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+65,(vlSelf->clk));
    bufp->fullBit(oldp+66,(vlSelf->in));
    bufp->fullBit(oldp+67,(vlSelf->reset));
    bufp->fullBit(oldp+68,(vlSelf->out));
    bufp->fullCData(oldp+69,(0U),4);
    bufp->fullCData(oldp+70,(1U),4);
    bufp->fullCData(oldp+71,(2U),4);
    bufp->fullCData(oldp+72,(3U),4);
    bufp->fullCData(oldp+73,(4U),4);
    bufp->fullCData(oldp+74,(5U),4);
    bufp->fullCData(oldp+75,(6U),4);
    bufp->fullCData(oldp+76,(7U),4);
    bufp->fullCData(oldp+77,(8U),4);
    bufp->fullIData(oldp+78,(9U),32);
    bufp->fullIData(oldp+79,(4U),32);
    bufp->fullIData(oldp+80,(1U),32);
    bufp->fullQData(oldp+81,(0x110c9531d1ULL),45);
    bufp->fullIData(oldp+83,(0U),32);
    bufp->fullBit(oldp+84,(0U));
    bufp->fullIData(oldp+85,(5U),32);
    bufp->fullIData(oldp+86,(9U),32);
    bufp->fullIData(oldp+87,(8U),32);
}
