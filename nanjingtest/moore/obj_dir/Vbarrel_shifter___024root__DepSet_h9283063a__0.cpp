// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shifter.h for the primary calling header

#include "verilated.h"

#include "Vbarrel_shifter__Syms.h"
#include "Vbarrel_shifter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__act(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG

void Vbarrel_shifter___024root___eval_triggers__act(Vbarrel_shifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbarrel_shifter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
