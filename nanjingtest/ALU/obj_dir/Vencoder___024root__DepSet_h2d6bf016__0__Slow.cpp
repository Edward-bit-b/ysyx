// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "verilated.h"

#include "Vencoder___024root.h"

VL_ATTR_COLD void Vencoder___024root___eval_static(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vencoder___024root___eval_initial__TOP(Vencoder___024root* vlSelf);

VL_ATTR_COLD void Vencoder___024root___eval_initial(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_initial\n"); );
    // Body
    Vencoder___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vencoder___024root___eval_initial__TOP(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[7U] = 0U;
}

VL_ATTR_COLD void Vencoder___024root___eval_final(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vencoder___024root___eval_triggers__stl(Vencoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__stl(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___eval_stl(Vencoder___024root* vlSelf);

VL_ATTR_COLD void Vencoder___024root___eval_settle(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vencoder___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vencoder___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/encoder.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vencoder___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__stl(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vencoder___024root___ico_sequent__TOP__0(Vencoder___024root* vlSelf);

VL_ATTR_COLD void Vencoder___024root___eval_stl(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vencoder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__ico(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__act(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__nba(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vencoder___024root___ctor_var_reset(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(4);
    vlSelf->B = VL_RAND_RESET_I(4);
    vlSelf->command_input = VL_RAND_RESET_I(3);
    vlSelf->Result = VL_RAND_RESET_I(4);
    vlSelf->Carry = VL_RAND_RESET_I(1);
    vlSelf->Overflow = VL_RAND_RESET_I(1);
    vlSelf->Out = VL_RAND_RESET_I(1);
    vlSelf->encoder__DOT__Result_end = VL_RAND_RESET_I(7);
    vlSelf->encoder__DOT__Result_11 = VL_RAND_RESET_I(5);
    vlSelf->encoder__DOT__Result_21 = VL_RAND_RESET_I(5);
    vlSelf->encoder__DOT__Result_22 = VL_RAND_RESET_I(1);
    vlSelf->encoder__DOT__Result_7 = VL_RAND_RESET_I(7);
    vlSelf->encoder__DOT____VdfgTmp_he1deb3f6__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(7);
    vlSelf->encoder__DOT__mux41__DOT__i0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h20a57425__0 = 0;
    vlSelf->__VdfgTmp_hadb6aab4__0 = 0;
    vlSelf->__VdfgTmp_h4367937f__0 = 0;
    vlSelf->__VdfgTmp_h40fffc82__0 = 0;
    vlSelf->__VdfgTmp_h45b2e017__0 = 0;
    vlSelf->__VdfgTmp_h3bab1881__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
