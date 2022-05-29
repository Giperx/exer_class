//
// Created by Giperx on 2022/5/23.
//
#include "birthday.h"
#include <iostream>
using namespace std;
#ifndef EXER_CLASS_PERSON_H
#define EXER_CLASS_PERSON_H

class Person {
public:
    Person();
    Person(const Person&); //拷贝构造函数
    virtual ~Person();
    void login_info(); //录入信息函数
    void show_info(){ //隐式内联成员函数
        cout << "人员的编号：" << this->number << " 性别：" << this->sex << " 身份证号：" << this->id
             << "\n出生日期：" << this->birth.year << "年" << this->birth.month << "月" << this->birth.day << "日";
    };
private:
    int number;
    string id;
    char sex;
    birthday birth;
};


#endif //EXER_CLASS_PERSON_H
