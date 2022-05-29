//
// Created by Giperx on 2022/5/23.
//
#include <iostream>
#include "CPU.h"
#include "CDROM.h"
#include "RAM.h"
using namespace std;
#ifndef EXER_CLASS_COMPUTER_H
#define EXER_CLASS_COMPUTER_H

class Computer {
public:
    Computer();
    virtual ~Computer();
    void run();
    void stop();
private:
    CPU cpu;
    RAM ram;
    CDROM cdrom;
};

#endif //EXER_CLASS_COMPUTER_H
