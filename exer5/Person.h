//
// Created by Giperx on 2022/5/26.
//
#include "birthday.h"
#include <iostream>
#include <cstring>

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
        cout << "��Ա������" << this->name << " ��ţ�" << this->number << " �Ա�" << this->sex << " ���֤�ţ�" << this->id
             << "\n�������ڣ�" << this->birth.year << "��" << this->birth.month << "��" << this->birth.day << "��" << endl;
    };
    char id[16];
private:
    char name[11];
    char number[7];
    char sex[3];
    birthday birth;

};

#endif //EXER_CLASS_PERSON_H
