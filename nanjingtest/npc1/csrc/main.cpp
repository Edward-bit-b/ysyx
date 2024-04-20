#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vencoder.h"  //adder.v会被编译成Vadder.h
#include <verilated.h>

#include <verilated_vcd_c.h> //可选，如果要导出vcd则需要加上

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vencoder* encoder = new Vencoder{contextp};


    VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
    contextp->traceEverOn(true); //打开追踪功能
    encoder->trace(tfp, 0); //
    tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int i=20;
    while (!contextp->gotFinish() && i>=0) {
        int X =rand() &  0b00111111;
        int en= 1;
        encoder->X = X;
        encoder->en = en;
        encoder->eval();
        printf("X = %d, en = %d, encoder = %d\n", X, en, encoder->y);

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        //assert(encoder->y == X);

        i--;
    }
    delete encoder;
    tfp->close();
    delete contextp;
    return 0;
}

