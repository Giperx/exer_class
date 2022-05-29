//
// Created by Giperx on 2022/5/23.
//

#include "CPU.h"
CPU::CPU() : Rank(P1), frequency(50), voltage(220){cout << "CPU()" << endl;}
CPU::~CPU() {cout << "~CPU()" << endl;}
void CPU:: run(int frequency, double voltage){
    this->frequency = frequency;
    this->voltage = voltage;
    cout << "run, frequency:" << this->frequency << "MHz" << " voltage:" << this->voltage << "V" << endl;
}
void CPU:: stop(){
    this->frequency = 0, this->voltage = 0;
    cout << "stop, frequency:" << this->frequency << "MHz" << " voltage:" << this->voltage << "V" << endl;
}