//
// Created by Giperx on 2022/5/29.
//

#ifndef EXER_CLASS_GRADUATE_H
#define EXER_CLASS_GRADUATE_H
#include "teacher.h"
#include "student.h"

class graduate : virtual public student{
private:
    char subject[21];
    teacher adviser;
public:
    graduate(){};
    void login_info(){
        student::login_info();
        cout << "����רҵ���ƣ�" << endl;
        cin >> subject;
    };
    void show_info(){
        student::show_info();
        cout << "רҵ��" << subject << endl;
    }

};


#endif //EXER_CLASS_GRADUATE_H
