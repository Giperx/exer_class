//
// Created by Giperx on 2022/5/23.
//

#include "Person.h"

Person::Person() : id("123"), sex('m'), number(1){}
Person::~Person() {}
Person::Person(const Person& P) {
    this->id = P.id, this->sex = P.sex, this->number = P.number, this->birth = P.birth;
}
void Person::login_info() {
    cout << "输入人员的编号、性别、身份证号：";
    cin >> this->number >> this->sex >> this->id;
    cout << "依次输入出生年、月、日：" ;
    cin >> this->birth.year >> this->birth.month >> this->birth.day;
}
