//
// Created by Giperx on 2022/5/29.
//

#ifndef EXER_CLASS_TEACHER_H
#define EXER_CLASS_TEACHER_H
#include "Person.h"
using namespace std;

class teacher : virtual public Person{
private:
    char principalship[11];
    char department[21];
public:
    teacher(){};
    void login_info(){
        Person::login_info();
        cout << "����ְ��" ;
        cin >> principalship;
        cout << "���벿�ţ�" ;
        cin >> department;
    }
    void show_info(){
        Person::show_info();
        cout << "ְ������" << principalship << " ��������" << department << endl;
    }
};


#endif //EXER_CLASS_TEACHER_H
