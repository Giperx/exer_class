//
// Created by Giperx on 2022/5/24.
//
#include <iostream>
using namespace std;
#ifndef EXER_CLASS_CLIENT_H
#define EXER_CLASS_CLIENT_H


class client {
    static char serverName[10];
    static int ClientNum;
public:
    static void ChangeServerName();
};

#endif //EXER_CLASS_CLIENT_H
