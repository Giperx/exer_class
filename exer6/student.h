//
// Created by Giperx on 2022/5/29.
//

#ifndef EXER_CLASS_STUDENT_H
#define EXER_CLASS_STUDENT_H
#include "Person.h"

class student : virtual public Person{
private:
    char classNo[7];
public:
    student() {};
    void login_info(){
        Person::login_info();
        cout << "����ѧ���༶�ţ�" << endl;
        cin >> classNo;
    };
    void show_info(){
        Person::show_info();
        cout << "�༶�ţ�" << classNo << endl;
    }
};


#endif //EXER_CLASS_STUDENT_H
