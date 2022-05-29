//
// Created by Giperx on 2022/5/26.
//

#include "Person.h"

Person::Person() : name("NULL"), id("0"), sex("NO"), number("0"){}
Person::~Person() {}
Person::Person(const Person& P) {
    this->birth = birth;
    strcpy(this->name, name), strcpy(this->number, number),
    strcpy(this->id, id), strcpy(this->sex, sex);
}
void Person::login_info() {
    cout << "输入人员的姓名、编号、性别、身份证号：";
    cin >> this->name >> this->number >> this->sex >> this->id;
    cout << "依次输入出生年月日：" ;
    cin >> this->birth.year >> this->birth.month >> this->birth.day;
}
