#include <bitset>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include "Vencoder.h"  //adder.v会被编译成Vadder.h
#include <verilated.h>
using namespace std;
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
        int A =rand() &  0b1111;
        int B=rand() &  0b1111;
        int command_input=rand() & 0b111;
	encoder->A = A;
        encoder->B = B;
	encoder->command_input=command_input;
        encoder->eval();
	cout<<"A= "<<bitset<4>(A)<<endl;
	cout<<"B= "<<bitset<4>(B)<<endl;

        printf("Command =%d,  Overflow=%d,Carry=%d\n", command_input, encoder->Overflow,encoder->Carry);
	cout<<"Result ="<<bitset<7>(encoder->Result)<<"\n"<<endl;
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

