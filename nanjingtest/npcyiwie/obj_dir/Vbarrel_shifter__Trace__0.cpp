// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_shifter__Syms.h"


void Vbarrel_shifter___024root__trace_chg_sub_0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbarrel_shifter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_chg_top_0\n"); );
    // Init
    Vbarrel_shifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter___024root*>(voidSelf);
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbarrel_shifter___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vbarrel_shifter___024root__trace_chg_sub_0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+2,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+3,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+4,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+5,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+6,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+7,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+8,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+9,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+10,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+11,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+12,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+13,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+14,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+15,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+16,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+17,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+18,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+19,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+20,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+21,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+22,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+23,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+24,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+25,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+26,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+27,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+28,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+29,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+30,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+31,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+32,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+33,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+34,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+35,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+36,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+37,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+38,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+39,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+40,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+41,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+42,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+43,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+44,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+45,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+46,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+47,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+48,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+49,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+50,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+51,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+52,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+53,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+54,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+55,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+56,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+57,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+58,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+59,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+60,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+61,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+62,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+63,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+64,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+65,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+66,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+67,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+68,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+69,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+70,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+71,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+72,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+73,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+74,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+75,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+76,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+77,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+78,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+79,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+80,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+81,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+82,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+83,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+84,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+85,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+86,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+87,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+88,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+89,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+90,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+91,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+92,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+93,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+94,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+95,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+96,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+97,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+98,(vlSelf->barrel_shifter__DOT__w0));
        bufp->chgBit(oldp+99,(vlSelf->barrel_shifter__DOT__w1));
        bufp->chgBit(oldp+100,(vlSelf->barrel_shifter__DOT__w2));
        bufp->chgBit(oldp+101,(vlSelf->barrel_shifter__DOT__w3));
        bufp->chgBit(oldp+102,(vlSelf->barrel_shifter__DOT__w4));
        bufp->chgBit(oldp+103,(vlSelf->barrel_shifter__DOT__w5));
        bufp->chgBit(oldp+104,(vlSelf->barrel_shifter__DOT__w6));
        bufp->chgBit(oldp+105,(vlSelf->barrel_shifter__DOT__w7));
        bufp->chgBit(oldp+106,(vlSelf->barrel_shifter__DOT__w8));
        bufp->chgBit(oldp+107,(vlSelf->barrel_shifter__DOT__w9));
        bufp->chgBit(oldp+108,(vlSelf->barrel_shifter__DOT__w10));
        bufp->chgBit(oldp+109,(vlSelf->barrel_shifter__DOT__w11));
        bufp->chgBit(oldp+110,(vlSelf->barrel_shifter__DOT__w12));
        bufp->chgBit(oldp+111,(vlSelf->barrel_shifter__DOT__w13));
        bufp->chgBit(oldp+112,(vlSelf->barrel_shifter__DOT__w14));
        bufp->chgBit(oldp+113,(vlSelf->barrel_shifter__DOT__w15));
        bufp->chgBit(oldp+114,(vlSelf->barrel_shifter__DOT__w16));
        bufp->chgCData(oldp+115,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+116,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+117,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+118,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+119,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+120,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+121,(vlSelf->barrel_shifter__DOT____Vcellinp__m2_0__Y),2);
        bufp->chgCData(oldp+122,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+123,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+124,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+125,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+126,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+127,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+128,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+129,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+130,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+131,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+132,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+133,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+134,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+135,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+136,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+137,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+138,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+139,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+140,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+141,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+142,(vlSelf->barrel_shifter__DOT____Vcellinp__m2_10__Y),2);
        bufp->chgSData(oldp+143,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w3) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w5) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w3) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w1)))))),12);
        bufp->chgCData(oldp+144,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+145,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+146,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+147,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+148,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+149,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+150,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+151,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+152,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+153,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+154,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w4) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w4) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w2)))))),12);
        bufp->chgCData(oldp+155,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+156,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+157,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+158,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+159,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+160,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+161,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+162,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+163,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+164,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+165,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w5) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w7) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w5) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w3)))))),12);
        bufp->chgCData(oldp+166,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+167,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+168,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+169,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+170,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+171,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+172,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+173,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+174,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+175,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+176,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w6) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w8) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w6) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w4)))))),12);
        bufp->chgCData(oldp+177,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+178,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+179,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+180,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+181,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+182,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+183,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+184,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+185,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+186,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+187,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w7) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w5)))))),12);
        bufp->chgCData(oldp+188,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+189,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+190,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+191,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+192,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+193,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+194,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+195,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+196,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+197,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+198,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w8) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w8) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w6)))))),12);
        bufp->chgCData(oldp+199,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+200,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+201,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+202,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+203,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+204,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+205,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+206,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+207,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+208,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+209,(vlSelf->barrel_shifter__DOT____Vcellinp__m2_16__Y),2);
        bufp->chgBit(oldp+210,(vlSelf->barrel_shifter__DOT____Vcellout__m2_16__F));
        bufp->chgSData(oldp+211,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w9) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w13) 
                                               << 6U) 
                                              | ((IData)(vlSelf->barrel_shifter__DOT__w9) 
                                                 << 3U))))),12);
        bufp->chgCData(oldp+212,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+213,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+214,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+215,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+216,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+217,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+218,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+219,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+220,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+221,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+222,(vlSelf->barrel_shifter__DOT____Vcellout__m2_17__F));
        bufp->chgSData(oldp+223,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w10) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w14) 
                                               << 6U) 
                                              | ((IData)(vlSelf->barrel_shifter__DOT__w10) 
                                                 << 3U))))),12);
        bufp->chgCData(oldp+224,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+225,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+226,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+227,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+228,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+229,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+230,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+231,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+232,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+233,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+234,(vlSelf->barrel_shifter__DOT____Vcellout__m2_18__F));
        bufp->chgSData(oldp+235,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w11) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w15) 
                                               << 6U) 
                                              | ((IData)(vlSelf->barrel_shifter__DOT__w11) 
                                                 << 3U))))),12);
        bufp->chgCData(oldp+236,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+237,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+238,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+239,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+240,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+241,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+242,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+243,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+244,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+245,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+246,(vlSelf->barrel_shifter__DOT____Vcellout__m2_19__F));
        bufp->chgSData(oldp+247,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w12) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w16) 
                                               << 6U) 
                                              | ((IData)(vlSelf->barrel_shifter__DOT__w12) 
                                                 << 3U))))),12);
        bufp->chgCData(oldp+248,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+249,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+250,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+251,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+252,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+253,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+254,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+255,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+256,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+257,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+258,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+259,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+260,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+261,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+262,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+263,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+264,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+265,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+266,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+267,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+268,(vlSelf->barrel_shifter__DOT____Vcellout__m2_20__F));
        bufp->chgSData(oldp+269,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w13) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w13) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w9)))))),12);
        bufp->chgCData(oldp+270,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+271,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+272,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+273,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+274,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+275,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+276,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+277,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+278,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+279,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+280,(vlSelf->barrel_shifter__DOT____Vcellout__m2_21__F));
        bufp->chgSData(oldp+281,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w14) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w14) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w10)))))),12);
        bufp->chgCData(oldp+282,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+283,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+284,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+285,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+286,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+287,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+288,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+289,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+290,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+291,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+292,(vlSelf->barrel_shifter__DOT____Vcellout__m2_22__F));
        bufp->chgSData(oldp+293,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w15) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w15) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w11)))))),12);
        bufp->chgCData(oldp+294,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+295,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+296,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+297,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+298,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+299,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+300,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+301,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+302,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+303,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+304,(vlSelf->barrel_shifter__DOT____Vcellout__m2_23__F));
        bufp->chgSData(oldp+305,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w16) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                               << 6U) 
                                              | (((IData)(vlSelf->barrel_shifter__DOT__w16) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->barrel_shifter__DOT__w12)))))),12);
        bufp->chgCData(oldp+306,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+307,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+308,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+309,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+310,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+311,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+312,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+313,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+314,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+315,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+316,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+317,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+318,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+319,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+320,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+321,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+322,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+323,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+324,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+325,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+326,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+327,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+328,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+329,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+330,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+331,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+332,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+333,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+334,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+335,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+336,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+337,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+338,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+339,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+340,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+341,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+342,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+343,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+344,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+345,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+346,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+347,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+348,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+349,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+350,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+351,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+352,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+353,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+354,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+355,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+356,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+357,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+358,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+359,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+360,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+361,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+362,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+363,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+364,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+365,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+366,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w1) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w3) 
                                               << 6U) 
                                              | ((IData)(vlSelf->barrel_shifter__DOT__w1) 
                                                 << 3U))))),12);
        bufp->chgCData(oldp+367,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+368,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+369,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+370,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+371,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+372,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+373,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+374,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+375,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+376,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+377,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w2) 
                                            << 9U) 
                                           | (((IData)(vlSelf->barrel_shifter__DOT__w4) 
                                               << 6U) 
                                              | ((IData)(vlSelf->barrel_shifter__DOT__w2) 
                                                 << 3U))))),12);
        bufp->chgCData(oldp+378,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+379,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+380,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+381,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        bufp->chgBit(oldp+382,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+383,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+384,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+385,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+386,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+387,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__hit));
    }
    bufp->chgCData(oldp+388,(vlSelf->din),8);
    bufp->chgCData(oldp+389,(vlSelf->shamt),3);
    bufp->chgBit(oldp+390,(vlSelf->LR));
    bufp->chgBit(oldp+391,(vlSelf->AL));
    bufp->chgCData(oldp+392,(vlSelf->dout),8);
    bufp->chgBit(oldp+393,((1U & ((IData)(vlSelf->din) 
                                  >> 7U))));
    bufp->chgCData(oldp+394,((2U | (1U & ((IData)(vlSelf->din) 
                                          >> 7U)))),4);
    bufp->chgBit(oldp+395,((1U & (IData)(vlSelf->din))));
    bufp->chgBit(oldp+396,((1U & ((IData)(vlSelf->din) 
                                  >> 1U))));
    bufp->chgSData(oldp+397,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                  << 9U)) 
                                       | ((0x40U & 
                                           ((IData)(vlSelf->din) 
                                            << 5U)) 
                                          | (8U & ((IData)(vlSelf->din) 
                                                   << 3U)))))),12);
    bufp->chgBit(oldp+398,((1U & ((IData)(vlSelf->din) 
                                  >> 2U))));
    bufp->chgSData(oldp+399,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                  << 8U)) 
                                       | ((0x40U & 
                                           ((IData)(vlSelf->din) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->din) 
                                               << 2U)) 
                                             | (1U 
                                                & (IData)(vlSelf->din))))))),12);
    bufp->chgBit(oldp+400,((1U & ((IData)(vlSelf->din) 
                                  >> 3U))));
    bufp->chgSData(oldp+401,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                  << 7U)) 
                                       | ((0x40U & 
                                           ((IData)(vlSelf->din) 
                                            << 3U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->din) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->din) 
                                                   >> 1U))))))),12);
    bufp->chgBit(oldp+402,((1U & ((IData)(vlSelf->din) 
                                  >> 4U))));
    bufp->chgSData(oldp+403,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                  << 6U)) 
                                       | ((0x40U & 
                                           ((IData)(vlSelf->din) 
                                            << 2U)) 
                                          | ((8U & (IData)(vlSelf->din)) 
                                             | (1U 
                                                & ((IData)(vlSelf->din) 
                                                   >> 2U))))))),12);
    bufp->chgBit(oldp+404,((1U & ((IData)(vlSelf->din) 
                                  >> 5U))));
    bufp->chgSData(oldp+405,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                  << 5U)) 
                                       | ((0x40U & 
                                           ((IData)(vlSelf->din) 
                                            << 1U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->din) 
                                               >> 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->din) 
                                                   >> 3U))))))),12);
    bufp->chgBit(oldp+406,((1U & ((IData)(vlSelf->din) 
                                  >> 6U))));
    bufp->chgSData(oldp+407,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                  << 4U)) 
                                       | ((0x40U & (IData)(vlSelf->din)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->din) 
                                               >> 2U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->din) 
                                                   >> 4U))))))),12);
    bufp->chgSData(oldp+408,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                  << 3U)) 
                                       | ((0x40U & 
                                           ((IData)(vlSelf->din) 
                                            >> 1U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->din) 
                                               >> 3U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->din) 
                                                   >> 5U))))))),12);
    bufp->chgSData(oldp+409,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                  << 2U)) 
                                       | (((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                           << 6U) | 
                                          ((8U & ((IData)(vlSelf->din) 
                                                  >> 4U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->din) 
                                               >> 6U))))))),12);
}

void Vbarrel_shifter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_cleanup\n"); );
    // Init
    Vbarrel_shifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter___024root*>(voidSelf);
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
