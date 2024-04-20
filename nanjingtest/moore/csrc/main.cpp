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
    int clk=0;
    int rst=0;
    while (!contextp->gotFinish() && i>=0) {
        int in =  0b0;
	clk=~clk;
	if(i>1)
	{	rst=1;}
        barrel_shifter->clk = clk;
        barrel_shifter->in = in;
	barrel_shifter->reset =rst;
        barrel_shifter->eval();

        printf(" in = %d, out = %d\n",in, barrel_shifter->out);
	//cout<<bitset<4>(barrel_shifter->)<<endl;

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间


        i--;
    }
    delete barrel_shifter;
    tfp->close();
    delete contextp;
    return 0;
}

