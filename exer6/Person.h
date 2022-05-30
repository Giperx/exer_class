//
// Created by Giperx on 2022/5/26.
//

#ifndef EXER_CLASS_PERSON_H
#define EXER_CLASS_PERSON_H
#include "birthday.h"
#include <cstring>
#include <iostream>
using namespace std;

class Person {
public:
    Person();
    Person(const Person&); //拷贝构造函数
     ~Person();
    void login_info(); //录入信息函数
    void show_info(){ //隐式内联成员函数
        cout << "人员姓名：" << this->name << " 编号：" << this->number << " 性别：" << this->sex << " 身份证号：" << this->id
             << "\n出生日期：" << this->birth.year << "年" << this->birth.month << "月" << this->birth.day << "日" << endl;
    };
    char id[16];
private:
    char name[11];
    char number[7];
    char sex[3];
    birthday birth;

};

#endif //EXER_CLASS_PERSON_H
