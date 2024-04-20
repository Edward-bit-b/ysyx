#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <bitset>
#include "Vbarrel_shifter.h"  //adder.v会被编译成Vadder.h
#include <verilated.h>
#include <iostream>
#include <verilated_vcd_c.h> //可选，如果要导出vcd则需要加上
using namespace std;
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vbarrel_shifter* barrel_shifter = new Vbarrel_shifter{contextp};


    VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
    contextp->traceEverOn(true); //打开追踪功能
    barrel_shifter->trace(tfp, 0); //
    tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int i=20;
    while (!contextp->gotFinish() && i>=0) {
        int din =  0b00001000;
        int AL = rand() & 0b1;
        int LR = rand() & 0b1;
	int shamt = rand() & 0b111;
        barrel_shifter->AL = AL;
        barrel_shifter->din = din;
	barrel_shifter->LR =LR;
	barrel_shifter->shamt=shamt;
        barrel_shifter->eval();
        printf("AL = %d, din = %d, LR = %d, shamt = %d, dout = %d\n",AL, din,LR, shamt, barrel_shifter->dout);
	cout<<bitset<8>(din)<<endl;
	cout<<bitset<8>(barrel_shifter->dout)<<endl;

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间


        i--;
    }
    delete barrel_shifter;
    tfp->close();
    delete contextp;
    return 0;
}

