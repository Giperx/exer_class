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
    Person(const Person&); //�������캯��
    virtual ~Person();
    void login_info(); //¼����Ϣ����
    void show_info(){ //��ʽ������Ա����
        cout << "��Ա�ı�ţ�" << this->number << " �Ա�" << this->sex << " ���֤�ţ�" << this->id
             << "\n�������ڣ�" << this->birth.year << "��" << this->birth.month << "��" << this->birth.day << "��";
    };
private:
    int number;
    string id;
    char sex;
    birthday birth;
};


#endif //EXER_CLASS_PERSON_H
