// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "verilated.h"

#include "Vencoder___024root.h"

VL_INLINE_OPT void Vencoder___024root___ico_sequent__TOP__0(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->command_input) == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->command_input) == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->command_input) == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->command_input) == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->command_input) == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->command_input) == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->command_input) == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->command_input) == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x100U | (0xfU & (~ (IData)(vlSelf->A))));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0xfU & (~ (IData)(vlSelf->A)));
    vlSelf->__VdfgTmp_h4367937f__0 = ((IData)(vlSelf->A) 
                                      & (IData)(vlSelf->B));
    vlSelf->__VdfgTmp_h40fffc82__0 = ((IData)(vlSelf->A) 
                                      | (IData)(vlSelf->B));
    vlSelf->__VdfgTmp_h45b2e017__0 = ((IData)(vlSelf->A) 
                                      ^ (IData)(vlSelf->B));
    vlSelf->__VdfgTmp_h3bab1881__0 = (0x20U & ((~ (
                                                   (((IData)(vlSelf->A) 
                                                     ^ (IData)(vlSelf->B)) 
                                                    >> 3U) 
                                                   & ((((IData)(vlSelf->A) 
                                                        ^ (IData)(vlSelf->B)) 
                                                       >> 2U) 
                                                      & ((((IData)(vlSelf->A) 
                                                           ^ (IData)(vlSelf->B)) 
                                                          >> 1U) 
                                                         & ((IData)(vlSelf->A) 
                                                            ^ (IData)(vlSelf->B)))))) 
                                               << 5U));
    vlSelf->encoder__DOT__Result_11 = (0x1fU & ((IData)(vlSelf->A) 
                                                + (IData)(vlSelf->B)));
    vlSelf->encoder__DOT____VdfgTmp_he1deb3f6__0 = 
        ((1U & ((IData)(vlSelf->A) >> 3U)) == (1U & 
                                               ((IData)(vlSelf->B) 
                                                >> 3U)));
    vlSelf->encoder__DOT__Result_21 = (0x1fU & ((IData)(1U) 
                                                + ((IData)(vlSelf->A) 
                                                   + 
                                                   (0xfU 
                                                    & (~ (IData)(vlSelf->B))))));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x180U | (IData)(vlSelf->__VdfgTmp_h4367937f__0));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = vlSelf->__VdfgTmp_h4367937f__0;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x200U | (IData)(vlSelf->__VdfgTmp_h40fffc82__0));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = vlSelf->__VdfgTmp_h40fffc82__0;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x280U | (IData)(vlSelf->__VdfgTmp_h45b2e017__0));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = vlSelf->__VdfgTmp_h45b2e017__0;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x380U | (IData)(vlSelf->__VdfgTmp_h3bab1881__0));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = vlSelf->__VdfgTmp_h3bab1881__0;
    vlSelf->__VdfgTmp_h20a57425__0 = ((((IData)(vlSelf->encoder__DOT____VdfgTmp_he1deb3f6__0) 
                                        & ((1U & ((IData)(vlSelf->encoder__DOT__Result_11) 
                                                  >> 3U)) 
                                           != (1U & 
                                               ((IData)(vlSelf->A) 
                                                >> 3U)))) 
                                       << 5U) | (IData)(vlSelf->encoder__DOT__Result_11));
    vlSelf->encoder__DOT__Result_22 = ((IData)(vlSelf->encoder__DOT____VdfgTmp_he1deb3f6__0) 
                                       & ((1U & ((IData)(vlSelf->encoder__DOT__Result_21) 
                                                 >> 3U)) 
                                          != (1U & 
                                              ((IData)(vlSelf->A) 
                                               >> 3U))));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = vlSelf->__VdfgTmp_h20a57425__0;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h20a57425__0;
    vlSelf->encoder__DOT__Result_7 = (0x40U & ((((~ (IData)(vlSelf->encoder__DOT__Result_22)) 
                                                 << 6U) 
                                                & ((IData)(vlSelf->encoder__DOT__Result_21) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->encoder__DOT__Result_22) 
                                                   << 6U) 
                                                  & ((IData)(vlSelf->A) 
                                                     << 3U))));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x40U & ((((~ (IData)(vlSelf->encoder__DOT__Result_22)) 
                      << 6U) & ((IData)(vlSelf->encoder__DOT__Result_21) 
                                << 3U)) | (((IData)(vlSelf->encoder__DOT__Result_22) 
                                            << 6U) 
                                           & ((IData)(vlSelf->A) 
                                              << 3U))));
    vlSelf->__VdfgTmp_hadb6aab4__0 = (((IData)(vlSelf->encoder__DOT__Result_22) 
                                       << 5U) | (IData)(vlSelf->encoder__DOT__Result_21));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x300U | (IData)(vlSelf->encoder__DOT__Result_7));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x80U | (IData)(vlSelf->__VdfgTmp_hadb6aab4__0));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = vlSelf->__VdfgTmp_hadb6aab4__0;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->command_input) 
                       == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->command_input) 
                          == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->command_input) 
                          == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->command_input) 
                          == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->command_input) 
                          == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->command_input) 
                          == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->command_input) 
                          == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->command_input) 
                          == vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->encoder__DOT__Result_end = vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out;
    vlSelf->Result = (0xfU & (IData)(vlSelf->encoder__DOT__Result_end));
    vlSelf->Carry = (1U & ((IData)(vlSelf->encoder__DOT__Result_end) 
                           >> 4U));
    vlSelf->Overflow = (1U & ((IData)(vlSelf->encoder__DOT__Result_end) 
                              >> 5U));
    vlSelf->Out = (1U & ((IData)(vlSelf->encoder__DOT__Result_end) 
                         >> 6U));
}

void Vencoder___024root___eval_ico(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vencoder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vencoder___024root___eval_act(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_act\n"); );
}

void Vencoder___024root___eval_nba(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_nba\n"); );
}

void Vencoder___024root___eval_triggers__ico(Vencoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__ico(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vencoder___024root___eval_triggers__act(Vencoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__act(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__nba(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vencoder___024root___eval(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vencoder___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vencoder___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/encoder.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vencoder___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vencoder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vencoder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/encoder.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vencoder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vencoder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/encoder.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vencoder___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vencoder___024root___eval_debug_assertions(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->command_input & 0xf8U))) {
        Verilated::overWidthError("command_input");}
}
#endif  // VL_DEBUG
