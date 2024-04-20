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
    tracep->declBus(c+389,"din", false,-1, 7,0);
    tracep->declBus(c+390,"shamt", false,-1, 2,0);
    tracep->declBit(c+391,"LR", false,-1);
    tracep->declBit(c+392,"AL", false,-1);
    tracep->declBus(c+393,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+389,"din", false,-1, 7,0);
    tracep->declBus(c+390,"shamt", false,-1, 2,0);
    tracep->declBit(c+391,"LR", false,-1);
    tracep->declBit(c+392,"AL", false,-1);
    tracep->declBus(c+393,"dout", false,-1, 7,0);
    tracep->declBit(c+99,"w0", false,-1);
    tracep->declBit(c+100,"w1", false,-1);
    tracep->declBit(c+101,"w2", false,-1);
    tracep->declBit(c+102,"w3", false,-1);
    tracep->declBit(c+103,"w4", false,-1);
    tracep->declBit(c+104,"w5", false,-1);
    tracep->declBit(c+105,"w6", false,-1);
    tracep->declBit(c+106,"w7", false,-1);
    tracep->declBit(c+107,"w8", false,-1);
    tracep->declBit(c+108,"w9", false,-1);
    tracep->declBit(c+109,"w10", false,-1);
    tracep->declBit(c+110,"w11", false,-1);
    tracep->declBit(c+111,"w12", false,-1);
    tracep->declBit(c+112,"w13", false,-1);
    tracep->declBit(c+113,"w14", false,-1);
    tracep->declBit(c+114,"w15", false,-1);
    tracep->declBit(c+115,"w16", false,-1);
    tracep->pushNamePrefix("m1 ");
    tracep->declBit(c+411,"X0", false,-1);
    tracep->declBit(c+394,"X1", false,-1);
    tracep->declBit(c+392,"Y", false,-1);
    tracep->declBit(c+99,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+412,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+413,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 0,0);
    tracep->declBus(c+392,"key", false,-1, 0,0);
    tracep->declBus(c+395,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+412,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+413,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 0,0);
    tracep->declBus(c+392,"key", false,-1, 0,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+395,"lut", false,-1, 3,0);
    tracep->declBus(c+412,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+116+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+118+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+120,"lut_out", false,-1, 0,0);
    tracep->declBit(c+121,"hit", false,-1);
    tracep->declBus(c+415,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_0 ");
    tracep->declBit(c+396,"X0", false,-1);
    tracep->declBit(c+397,"X1", false,-1);
    tracep->declBit(c+396,"X2", false,-1);
    tracep->declBit(c+411,"X3", false,-1);
    tracep->declBus(c+122,"Y", false,-1, 1,0);
    tracep->declBit(c+100,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+100,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+398,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+100,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+398,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+123+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+127+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+131,"lut_out", false,-1, 0,0);
    tracep->declBit(c+132,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_1 ");
    tracep->declBit(c+397,"X0", false,-1);
    tracep->declBit(c+399,"X1", false,-1);
    tracep->declBit(c+397,"X2", false,-1);
    tracep->declBit(c+396,"X3", false,-1);
    tracep->declBus(c+122,"Y", false,-1, 1,0);
    tracep->declBit(c+101,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+101,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+400,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+101,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+400,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+133+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+137+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+141,"lut_out", false,-1, 0,0);
    tracep->declBit(c+142,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_10 ");
    tracep->declBit(c+102,"X0", false,-1);
    tracep->declBit(c+104,"X1", false,-1);
    tracep->declBit(c+102,"X2", false,-1);
    tracep->declBit(c+100,"X3", false,-1);
    tracep->declBus(c+143,"Y", false,-1, 1,0);
    tracep->declBit(c+110,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+144,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+144,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+145+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+149+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+153,"lut_out", false,-1, 0,0);
    tracep->declBit(c+154,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_11 ");
    tracep->declBit(c+103,"X0", false,-1);
    tracep->declBit(c+105,"X1", false,-1);
    tracep->declBit(c+103,"X2", false,-1);
    tracep->declBit(c+101,"X3", false,-1);
    tracep->declBus(c+143,"Y", false,-1, 1,0);
    tracep->declBit(c+111,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+155,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+155,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+156+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+15+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+160+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+164,"lut_out", false,-1, 0,0);
    tracep->declBit(c+165,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_12 ");
    tracep->declBit(c+104,"X0", false,-1);
    tracep->declBit(c+106,"X1", false,-1);
    tracep->declBit(c+104,"X2", false,-1);
    tracep->declBit(c+102,"X3", false,-1);
    tracep->declBus(c+143,"Y", false,-1, 1,0);
    tracep->declBit(c+112,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+166,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+166,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+167+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+171+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+175,"lut_out", false,-1, 0,0);
    tracep->declBit(c+176,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_13 ");
    tracep->declBit(c+105,"X0", false,-1);
    tracep->declBit(c+107,"X1", false,-1);
    tracep->declBit(c+105,"X2", false,-1);
    tracep->declBit(c+103,"X3", false,-1);
    tracep->declBus(c+143,"Y", false,-1, 1,0);
    tracep->declBit(c+113,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+113,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+177,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+113,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+177,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+178+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+182+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+186,"lut_out", false,-1, 0,0);
    tracep->declBit(c+187,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_14 ");
    tracep->declBit(c+106,"X0", false,-1);
    tracep->declBit(c+99,"X1", false,-1);
    tracep->declBit(c+106,"X2", false,-1);
    tracep->declBit(c+104,"X3", false,-1);
    tracep->declBus(c+143,"Y", false,-1, 1,0);
    tracep->declBit(c+114,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+114,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+188,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+114,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+188,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+189+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+27+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+193+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+197,"lut_out", false,-1, 0,0);
    tracep->declBit(c+198,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_15 ");
    tracep->declBit(c+107,"X0", false,-1);
    tracep->declBit(c+99,"X1", false,-1);
    tracep->declBit(c+107,"X2", false,-1);
    tracep->declBit(c+105,"X3", false,-1);
    tracep->declBus(c+143,"Y", false,-1, 1,0);
    tracep->declBit(c+115,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+115,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+199,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+115,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+199,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+200+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+31+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+204+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+208,"lut_out", false,-1, 0,0);
    tracep->declBit(c+209,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_16 ");
    tracep->declBit(c+108,"X0", false,-1);
    tracep->declBit(c+112,"X1", false,-1);
    tracep->declBit(c+108,"X2", false,-1);
    tracep->declBit(c+411,"X3", false,-1);
    tracep->declBus(c+210,"Y", false,-1, 1,0);
    tracep->declBit(c+211,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+211,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+212,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+211,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+212,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+213+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+217+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+221,"lut_out", false,-1, 0,0);
    tracep->declBit(c+222,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_17 ");
    tracep->declBit(c+109,"X0", false,-1);
    tracep->declBit(c+113,"X1", false,-1);
    tracep->declBit(c+109,"X2", false,-1);
    tracep->declBit(c+411,"X3", false,-1);
    tracep->declBus(c+210,"Y", false,-1, 1,0);
    tracep->declBit(c+223,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+224,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+223,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+224,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+225+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+39+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+229+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+233,"lut_out", false,-1, 0,0);
    tracep->declBit(c+234,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_18 ");
    tracep->declBit(c+110,"X0", false,-1);
    tracep->declBit(c+114,"X1", false,-1);
    tracep->declBit(c+110,"X2", false,-1);
    tracep->declBit(c+411,"X3", false,-1);
    tracep->declBus(c+210,"Y", false,-1, 1,0);
    tracep->declBit(c+235,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+235,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+236,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+235,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+236,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+237+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+241+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+245,"lut_out", false,-1, 0,0);
    tracep->declBit(c+246,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_19 ");
    tracep->declBit(c+111,"X0", false,-1);
    tracep->declBit(c+115,"X1", false,-1);
    tracep->declBit(c+111,"X2", false,-1);
    tracep->declBit(c+411,"X3", false,-1);
    tracep->declBus(c+210,"Y", false,-1, 1,0);
    tracep->declBit(c+247,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+247,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+248,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+247,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+248,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+249+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+47+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+253+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+257,"lut_out", false,-1, 0,0);
    tracep->declBit(c+258,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_2 ");
    tracep->declBit(c+399,"X0", false,-1);
    tracep->declBit(c+401,"X1", false,-1);
    tracep->declBit(c+399,"X2", false,-1);
    tracep->declBit(c+397,"X3", false,-1);
    tracep->declBus(c+122,"Y", false,-1, 1,0);
    tracep->declBit(c+102,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+402,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+402,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+259+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+51+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+263+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+267,"lut_out", false,-1, 0,0);
    tracep->declBit(c+268,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_20 ");
    tracep->declBit(c+112,"X0", false,-1);
    tracep->declBit(c+99,"X1", false,-1);
    tracep->declBit(c+112,"X2", false,-1);
    tracep->declBit(c+108,"X3", false,-1);
    tracep->declBus(c+210,"Y", false,-1, 1,0);
    tracep->declBit(c+269,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+269,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+270,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+269,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+270,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+271+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+55+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+275+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+279,"lut_out", false,-1, 0,0);
    tracep->declBit(c+280,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_21 ");
    tracep->declBit(c+113,"X0", false,-1);
    tracep->declBit(c+99,"X1", false,-1);
    tracep->declBit(c+113,"X2", false,-1);
    tracep->declBit(c+109,"X3", false,-1);
    tracep->declBus(c+210,"Y", false,-1, 1,0);
    tracep->declBit(c+281,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+281,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+282,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+281,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+282,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+283+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+59+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+287+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+291,"lut_out", false,-1, 0,0);
    tracep->declBit(c+292,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_22 ");
    tracep->declBit(c+114,"X0", false,-1);
    tracep->declBit(c+99,"X1", false,-1);
    tracep->declBit(c+114,"X2", false,-1);
    tracep->declBit(c+110,"X3", false,-1);
    tracep->declBus(c+210,"Y", false,-1, 1,0);
    tracep->declBit(c+293,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+293,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+294,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+293,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+294,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+295+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+63+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+299+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+303,"lut_out", false,-1, 0,0);
    tracep->declBit(c+304,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_23 ");
    tracep->declBit(c+115,"X0", false,-1);
    tracep->declBit(c+99,"X1", false,-1);
    tracep->declBit(c+115,"X2", false,-1);
    tracep->declBit(c+111,"X3", false,-1);
    tracep->declBus(c+210,"Y", false,-1, 1,0);
    tracep->declBit(c+305,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+306,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+305,"out", false,-1, 0,0);
    tracep->declBus(c+210,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+306,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+307+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+67+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+311+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+315,"lut_out", false,-1, 0,0);
    tracep->declBit(c+316,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_3 ");
    tracep->declBit(c+401,"X0", false,-1);
    tracep->declBit(c+403,"X1", false,-1);
    tracep->declBit(c+401,"X2", false,-1);
    tracep->declBit(c+399,"X3", false,-1);
    tracep->declBus(c+122,"Y", false,-1, 1,0);
    tracep->declBit(c+103,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+404,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+404,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+317+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+71+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+321+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+325,"lut_out", false,-1, 0,0);
    tracep->declBit(c+326,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_4 ");
    tracep->declBit(c+403,"X0", false,-1);
    tracep->declBit(c+405,"X1", false,-1);
    tracep->declBit(c+403,"X2", false,-1);
    tracep->declBit(c+401,"X3", false,-1);
    tracep->declBus(c+122,"Y", false,-1, 1,0);
    tracep->declBit(c+104,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+104,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+406,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+104,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+406,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+327+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+75+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+331+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+335,"lut_out", false,-1, 0,0);
    tracep->declBit(c+336,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_5 ");
    tracep->declBit(c+405,"X0", false,-1);
    tracep->declBit(c+407,"X1", false,-1);
    tracep->declBit(c+405,"X2", false,-1);
    tracep->declBit(c+403,"X3", false,-1);
    tracep->declBus(c+122,"Y", false,-1, 1,0);
    tracep->declBit(c+105,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+105,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+408,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+105,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+408,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+337+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+79+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+341+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+345,"lut_out", false,-1, 0,0);
    tracep->declBit(c+346,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_6 ");
    tracep->declBit(c+407,"X0", false,-1);
    tracep->declBit(c+394,"X1", false,-1);
    tracep->declBit(c+407,"X2", false,-1);
    tracep->declBit(c+405,"X3", false,-1);
    tracep->declBus(c+122,"Y", false,-1, 1,0);
    tracep->declBit(c+106,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+106,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+409,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+106,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+409,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+347+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+83+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+351+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+355,"lut_out", false,-1, 0,0);
    tracep->declBit(c+356,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_7 ");
    tracep->declBit(c+394,"X0", false,-1);
    tracep->declBit(c+99,"X1", false,-1);
    tracep->declBit(c+394,"X2", false,-1);
    tracep->declBit(c+407,"X3", false,-1);
    tracep->declBus(c+122,"Y", false,-1, 1,0);
    tracep->declBit(c+107,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+410,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+107,"out", false,-1, 0,0);
    tracep->declBus(c+122,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+410,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+357+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+87+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+361+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+365,"lut_out", false,-1, 0,0);
    tracep->declBit(c+366,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_8 ");
    tracep->declBit(c+100,"X0", false,-1);
    tracep->declBit(c+102,"X1", false,-1);
    tracep->declBit(c+100,"X2", false,-1);
    tracep->declBit(c+411,"X3", false,-1);
    tracep->declBus(c+143,"Y", false,-1, 1,0);
    tracep->declBit(c+108,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+108,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+367,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+108,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+367,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+368+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+91+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+372+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+376,"lut_out", false,-1, 0,0);
    tracep->declBit(c+377,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("m2_9 ");
    tracep->declBit(c+101,"X0", false,-1);
    tracep->declBit(c+103,"X1", false,-1);
    tracep->declBit(c+101,"X2", false,-1);
    tracep->declBit(c+411,"X3", false,-1);
    tracep->declBus(c+143,"Y", false,-1, 1,0);
    tracep->declBit(c+109,"F", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+378,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 0,0);
    tracep->declBus(c+143,"key", false,-1, 1,0);
    tracep->declBus(c+411,"default_out", false,-1, 0,0);
    tracep->declBus(c+378,"lut", false,-1, 11,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+379+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+95+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+383+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+387,"lut_out", false,-1, 0,0);
    tracep->declBit(c+388,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
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
    // Body
    bufp->fullBit(oldp+1,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+3,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+4,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+5,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+6,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+7,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+8,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+9,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+10,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+11,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+12,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+13,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+14,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+15,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+16,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+17,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+18,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+19,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+20,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+21,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+22,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+23,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+24,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+25,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+26,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+27,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+28,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+29,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+30,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+31,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+32,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+33,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+34,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+35,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+36,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+37,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+38,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+39,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+40,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+41,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+42,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+43,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+44,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+45,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+46,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+47,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+48,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+49,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+50,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+51,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+52,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+53,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+54,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+55,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+56,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+57,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+58,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+59,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+60,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+61,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+62,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+63,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+64,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+65,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+66,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+67,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+68,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+69,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+70,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+71,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+72,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+73,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+74,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+75,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+76,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+77,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+78,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+79,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+80,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+81,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+82,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+83,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+84,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+85,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+86,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+87,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+88,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+89,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+90,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+91,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+92,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+93,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+94,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+95,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+96,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+97,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+98,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullBit(oldp+99,(vlSelf->barrel_shifter__DOT__w0));
    bufp->fullBit(oldp+100,(vlSelf->barrel_shifter__DOT__w1));
    bufp->fullBit(oldp+101,(vlSelf->barrel_shifter__DOT__w2));
    bufp->fullBit(oldp+102,(vlSelf->barrel_shifter__DOT__w3));
    bufp->fullBit(oldp+103,(vlSelf->barrel_shifter__DOT__w4));
    bufp->fullBit(oldp+104,(vlSelf->barrel_shifter__DOT__w5));
    bufp->fullBit(oldp+105,(vlSelf->barrel_shifter__DOT__w6));
    bufp->fullBit(oldp+106,(vlSelf->barrel_shifter__DOT__w7));
    bufp->fullBit(oldp+107,(vlSelf->barrel_shifter__DOT__w8));
    bufp->fullBit(oldp+108,(vlSelf->barrel_shifter__DOT__w9));
    bufp->fullBit(oldp+109,(vlSelf->barrel_shifter__DOT__w10));
    bufp->fullBit(oldp+110,(vlSelf->barrel_shifter__DOT__w11));
    bufp->fullBit(oldp+111,(vlSelf->barrel_shifter__DOT__w12));
    bufp->fullBit(oldp+112,(vlSelf->barrel_shifter__DOT__w13));
    bufp->fullBit(oldp+113,(vlSelf->barrel_shifter__DOT__w14));
    bufp->fullBit(oldp+114,(vlSelf->barrel_shifter__DOT__w15));
    bufp->fullBit(oldp+115,(vlSelf->barrel_shifter__DOT__w16));
    bufp->fullCData(oldp+116,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+117,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+118,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+119,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+120,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+121,(vlSelf->barrel_shifter__DOT__m1__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+122,(vlSelf->barrel_shifter__DOT____Vcellinp__m2_0__Y),2);
    bufp->fullCData(oldp+123,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+124,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+125,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+126,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+127,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+128,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+129,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+130,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+131,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+132,(vlSelf->barrel_shifter__DOT__m2_0__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+133,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+134,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+135,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+136,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+137,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+138,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+139,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+140,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+141,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+142,(vlSelf->barrel_shifter__DOT__m2_1__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+143,(vlSelf->barrel_shifter__DOT____Vcellinp__m2_10__Y),2);
    bufp->fullSData(oldp+144,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w3) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w5) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w3) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w1)))))),12);
    bufp->fullCData(oldp+145,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+146,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+147,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+148,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+149,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+150,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+151,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+152,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+153,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+154,(vlSelf->barrel_shifter__DOT__m2_10__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+155,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w4) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w6) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w4) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w2)))))),12);
    bufp->fullCData(oldp+156,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+157,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+158,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+159,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+160,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+161,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+162,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+163,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+164,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+165,(vlSelf->barrel_shifter__DOT__m2_11__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+166,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w5) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w7) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w5) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w3)))))),12);
    bufp->fullCData(oldp+167,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+168,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+169,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+170,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+171,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+172,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+173,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+174,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+175,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+176,(vlSelf->barrel_shifter__DOT__m2_12__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+177,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w6) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w8) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w6) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w4)))))),12);
    bufp->fullCData(oldp+178,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+179,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+180,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+181,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+182,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+183,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+184,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+185,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+186,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+187,(vlSelf->barrel_shifter__DOT__m2_13__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+188,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w7) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w7) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w5)))))),12);
    bufp->fullCData(oldp+189,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+190,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+191,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+192,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+193,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+194,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+195,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+196,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+197,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+198,(vlSelf->barrel_shifter__DOT__m2_14__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+199,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w8) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w8) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w6)))))),12);
    bufp->fullCData(oldp+200,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+201,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+202,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+203,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+204,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+205,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+206,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+207,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+208,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+209,(vlSelf->barrel_shifter__DOT__m2_15__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+210,(vlSelf->barrel_shifter__DOT____Vcellinp__m2_16__Y),2);
    bufp->fullBit(oldp+211,(vlSelf->barrel_shifter__DOT____Vcellout__m2_16__F));
    bufp->fullSData(oldp+212,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w9) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w13) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->barrel_shifter__DOT__w9) 
                                                      << 3U))))),12);
    bufp->fullCData(oldp+213,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+214,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+215,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+216,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+217,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+218,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+219,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+220,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+221,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+222,(vlSelf->barrel_shifter__DOT__m2_16__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+223,(vlSelf->barrel_shifter__DOT____Vcellout__m2_17__F));
    bufp->fullSData(oldp+224,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w10) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w14) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->barrel_shifter__DOT__w10) 
                                                      << 3U))))),12);
    bufp->fullCData(oldp+225,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+226,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+227,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+228,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+229,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+230,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+231,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+232,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+233,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+234,(vlSelf->barrel_shifter__DOT__m2_17__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+235,(vlSelf->barrel_shifter__DOT____Vcellout__m2_18__F));
    bufp->fullSData(oldp+236,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w11) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w15) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->barrel_shifter__DOT__w11) 
                                                      << 3U))))),12);
    bufp->fullCData(oldp+237,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+238,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+239,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+240,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+241,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+242,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+243,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+244,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+245,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+246,(vlSelf->barrel_shifter__DOT__m2_18__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+247,(vlSelf->barrel_shifter__DOT____Vcellout__m2_19__F));
    bufp->fullSData(oldp+248,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w12) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w16) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->barrel_shifter__DOT__w12) 
                                                      << 3U))))),12);
    bufp->fullCData(oldp+249,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+250,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+251,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+252,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+253,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+254,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+255,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+256,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+257,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+258,(vlSelf->barrel_shifter__DOT__m2_19__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+259,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+260,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+261,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+262,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+263,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+264,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+265,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+266,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+267,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+268,(vlSelf->barrel_shifter__DOT__m2_2__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+269,(vlSelf->barrel_shifter__DOT____Vcellout__m2_20__F));
    bufp->fullSData(oldp+270,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w13) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w13) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w9)))))),12);
    bufp->fullCData(oldp+271,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+272,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+273,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+274,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+275,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+276,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+277,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+278,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+279,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+280,(vlSelf->barrel_shifter__DOT__m2_20__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+281,(vlSelf->barrel_shifter__DOT____Vcellout__m2_21__F));
    bufp->fullSData(oldp+282,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w14) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w14) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w10)))))),12);
    bufp->fullCData(oldp+283,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+284,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+285,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+286,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+287,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+288,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+289,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+290,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+291,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+292,(vlSelf->barrel_shifter__DOT__m2_21__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+293,(vlSelf->barrel_shifter__DOT____Vcellout__m2_22__F));
    bufp->fullSData(oldp+294,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w15) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w15) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w11)))))),12);
    bufp->fullCData(oldp+295,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+296,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+297,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+298,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+299,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+300,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+301,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+302,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+303,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+304,(vlSelf->barrel_shifter__DOT__m2_22__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+305,(vlSelf->barrel_shifter__DOT____Vcellout__m2_23__F));
    bufp->fullSData(oldp+306,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w16) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->barrel_shifter__DOT__w16) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->barrel_shifter__DOT__w12)))))),12);
    bufp->fullCData(oldp+307,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+308,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+309,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+310,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+311,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+312,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+313,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+314,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+315,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+316,(vlSelf->barrel_shifter__DOT__m2_23__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+317,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+318,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+319,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+320,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+321,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+322,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+323,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+324,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+325,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+326,(vlSelf->barrel_shifter__DOT__m2_3__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+327,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+328,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+329,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+330,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+331,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+332,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+333,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+334,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+335,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+336,(vlSelf->barrel_shifter__DOT__m2_4__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+337,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+338,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+339,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+340,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+341,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+342,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+343,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+344,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+345,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+346,(vlSelf->barrel_shifter__DOT__m2_5__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+347,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+348,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+349,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+350,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+351,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+352,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+353,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+354,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+355,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+356,(vlSelf->barrel_shifter__DOT__m2_6__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+357,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+358,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+359,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+360,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+361,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+362,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+363,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+364,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+365,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+366,(vlSelf->barrel_shifter__DOT__m2_7__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+367,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w1) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w3) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->barrel_shifter__DOT__w1) 
                                                      << 3U))))),12);
    bufp->fullCData(oldp+368,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+369,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+370,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+371,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+372,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+373,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+374,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+375,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+376,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+377,(vlSelf->barrel_shifter__DOT__m2_8__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+378,((0xa6U | (((IData)(vlSelf->barrel_shifter__DOT__w2) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->barrel_shifter__DOT__w4) 
                                                    << 6U) 
                                                   | ((IData)(vlSelf->barrel_shifter__DOT__w2) 
                                                      << 3U))))),12);
    bufp->fullCData(oldp+379,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+380,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+381,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
    bufp->fullCData(oldp+382,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
    bufp->fullBit(oldp+383,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+384,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+385,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+386,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+387,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+388,(vlSelf->barrel_shifter__DOT__m2_9__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+389,(vlSelf->din),8);
    bufp->fullCData(oldp+390,(vlSelf->shamt),3);
    bufp->fullBit(oldp+391,(vlSelf->LR));
    bufp->fullBit(oldp+392,(vlSelf->AL));
    bufp->fullCData(oldp+393,(vlSelf->dout),8);
    bufp->fullBit(oldp+394,((1U & ((IData)(vlSelf->din) 
                                   >> 7U))));
    bufp->fullCData(oldp+395,((2U | (1U & ((IData)(vlSelf->din) 
                                           >> 7U)))),4);
    bufp->fullBit(oldp+396,((1U & (IData)(vlSelf->din))));
    bufp->fullBit(oldp+397,((1U & ((IData)(vlSelf->din) 
                                   >> 1U))));
    bufp->fullSData(oldp+398,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                   << 9U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->din) 
                                             << 5U)) 
                                           | (8U & 
                                              ((IData)(vlSelf->din) 
                                               << 3U)))))),12);
    bufp->fullBit(oldp+399,((1U & ((IData)(vlSelf->din) 
                                   >> 2U))));
    bufp->fullSData(oldp+400,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                   << 8U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->din) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((IData)(vlSelf->din) 
                                                << 2U)) 
                                              | (1U 
                                                 & (IData)(vlSelf->din))))))),12);
    bufp->fullBit(oldp+401,((1U & ((IData)(vlSelf->din) 
                                   >> 3U))));
    bufp->fullSData(oldp+402,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
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
    bufp->fullBit(oldp+403,((1U & ((IData)(vlSelf->din) 
                                   >> 4U))));
    bufp->fullSData(oldp+404,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                   << 6U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->din) 
                                             << 2U)) 
                                           | ((8U & (IData)(vlSelf->din)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 2U))))))),12);
    bufp->fullBit(oldp+405,((1U & ((IData)(vlSelf->din) 
                                   >> 5U))));
    bufp->fullSData(oldp+406,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
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
    bufp->fullBit(oldp+407,((1U & ((IData)(vlSelf->din) 
                                   >> 6U))));
    bufp->fullSData(oldp+408,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                   << 4U)) 
                                        | ((0x40U & (IData)(vlSelf->din)) 
                                           | ((8U & 
                                               ((IData)(vlSelf->din) 
                                                >> 2U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 4U))))))),12);
    bufp->fullSData(oldp+409,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
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
    bufp->fullSData(oldp+410,((0xa6U | ((0x200U & ((IData)(vlSelf->din) 
                                                   << 2U)) 
                                        | (((IData)(vlSelf->barrel_shifter__DOT__w0) 
                                            << 6U) 
                                           | ((8U & 
                                               ((IData)(vlSelf->din) 
                                                >> 4U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 6U))))))),12);
    bufp->fullBit(oldp+411,(0U));
    bufp->fullIData(oldp+412,(2U),32);
    bufp->fullIData(oldp+413,(1U),32);
    bufp->fullIData(oldp+414,(0U),32);
    bufp->fullIData(oldp+415,(2U),32);
    bufp->fullIData(oldp+416,(4U),32);
    bufp->fullIData(oldp+417,(3U),32);
    bufp->fullIData(oldp+418,(4U),32);
}
