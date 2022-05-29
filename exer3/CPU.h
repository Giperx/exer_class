//
// Created by Giperx on 2022/5/23.
//
#include <iostream>
using namespace std;
#ifndef EXER_CLASS_CPU_H
#define EXER_CLASS_CPU_H

class CPU{
private:
    enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6, P7};
    CPU_Rank Rank;
    int frequency;
    double voltage;
public:
    CPU() ;
    ~CPU() ;
    void run(int frequency, double voltage);
    void stop();
};

#endif //EXER_CLASS_CPU_H
