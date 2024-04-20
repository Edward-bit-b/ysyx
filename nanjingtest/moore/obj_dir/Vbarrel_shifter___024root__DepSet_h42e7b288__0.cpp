// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shifter.h for the primary calling header

#include "verilated.h"

#include "Vbarrel_shifter___024root.h"

void Vbarrel_shifter___024root___eval_act(Vbarrel_shifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vbarrel_shifter___024root___nba_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->barrel_shifter__DOT__state = vlSelf->barrel_shifter__DOT__state_next;
        vlSelf->barrel_shifter__DOT__din = vlSelf->in;
    } else {
        vlSelf->barrel_shifter__DOT__state = 0U;
    }
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__state) 
           == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__state) 
           == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->barrel_shifter__DOT__state) 
              == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->barrel_shifter__DOT__state) 
            == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
            [0U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->barrel_shifter__DOT__state) 
               == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
               [1U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->barrel_shifter__DOT__state) 
               == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
               [2U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->barrel_shifter__DOT__state) 
               == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
               [3U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->barrel_shifter__DOT__state) 
               == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
               [4U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->barrel_shifter__DOT__state) 
               == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
               [5U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->barrel_shifter__DOT__state) 
               == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
               [6U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->barrel_shifter__DOT__state) 
               == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
               [7U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->barrel_shifter__DOT__state) 
               == vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__key_list
               [8U]) & vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->out = vlSelf->barrel_shifter__DOT__mux__DOT__i0__DOT__i0__DOT__lut_out;
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x80U | ((IData)(vlSelf->barrel_shifter__DOT__din)
                     ? 8U : 1U));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x70U | ((IData)(vlSelf->barrel_shifter__DOT__din)
                     ? 8U : 1U));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x60U | ((IData)(vlSelf->barrel_shifter__DOT__din)
                     ? 7U : 1U));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x50U | ((IData)(vlSelf->barrel_shifter__DOT__din)
                     ? 6U : 1U));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x40U | ((IData)(vlSelf->barrel_shifter__DOT__din)
                     ? 5U : 4U));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x30U | ((IData)(vlSelf->barrel_shifter__DOT__din)
                     ? 5U : 4U));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x20U | ((IData)(vlSelf->barrel_shifter__DOT__din)
                     ? 5U : 3U));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x10U | ((IData)(vlSelf->barrel_shifter__DOT__din)
                     ? 5U : 2U));
    if (vlSelf->barrel_shifter__DOT__din) {
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[8U] = 5U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[0U] = 8U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[1U] = 8U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[2U] = 7U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[3U] = 6U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[4U] = 5U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[5U] = 5U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[6U] = 5U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[7U] = 5U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[8U] = 5U;
    } else {
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__pair_list[8U] = 1U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[0U] = 1U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[1U] = 1U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[2U] = 1U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[3U] = 1U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[4U] = 4U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[5U] = 4U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[6U] = 3U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[7U] = 2U;
        vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list[8U] = 1U;
    }
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                       == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                          == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                          == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                          == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                          == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                          == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                          == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                          == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->barrel_shifter__DOT__state) 
                          == vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->barrel_shifter__DOT__state_next = vlSelf->barrel_shifter__DOT__muxx__DOT__i0__DOT__i0__DOT__lut_out;
}

void Vbarrel_shifter___024root___eval_nba(Vbarrel_shifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vbarrel_shifter___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vbarrel_shifter___024root___eval_triggers__act(Vbarrel_shifter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__act(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__nba(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG

void Vbarrel_shifter___024root___eval(Vbarrel_shifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vbarrel_shifter___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vbarrel_shifter___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/barrel_shifter.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vbarrel_shifter___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vbarrel_shifter___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/barrel_shifter.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vbarrel_shifter___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vbarrel_shifter___024root___eval_debug_assertions(Vbarrel_shifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->in & 0xfeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
