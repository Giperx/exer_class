//
// Created by Giperx on 2022/5/26.
//
#include "Person.h"

Person::Person() : name("NULL"), id(0), sex("NO"), number("0"){}
Person::~Person() {}
Person::Person(const Person& P) {
    this->birth = birth;
    strcpy(this->name, P.name), strcpy(this->number, P.number),
    this->id = P.id, strcpy(this->sex, P.sex);
}
void Person::login_info() {
    cout << "输入人员的姓名、编号、性别、身份证号：";
    cin >> this->name >> this->number >> this->sex >> this->id;
    cout << "依次输入出生年月日：" ;
    cin >> this->birth.year >> this->birth.month >> this->birth.day;
}

bool Person::operator==(const Person &P) {
    if (this->id == P.id) return true;
    else return false;
}

Person &Person::operator=(const Person &P) {
    this->birth = P.birth;
    strcpy(this->name, P.name), strcpy(this->number, P.number),
            this->id = P.id, strcpy(this->sex, P.sex);
    return *this;
}