//
// Created by Giperx on 2022/5/29.
//

#ifndef EXER_CLASS_TA_H
#define EXER_CLASS_TA_H
#include "teacher.h"
#include "graduate.h"
using namespace std;

class TA : public graduate, public teacher{
public:
    TA(){}
    void login_info(){
        cout << "����������Ϣ��" << endl;
        graduate::login_info();
    }
    void show_info(){
        cout << "���������Ϣ��" << endl;
        graduate::show_info();
    }
};


#endif //EXER_CLASS_TA_H
