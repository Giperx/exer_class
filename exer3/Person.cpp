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
    cout << "������Ա�ı�š��Ա����֤�ţ�";
    cin >> this->number >> this->sex >> this->id;
    cout << "������������ꡢ�¡��գ�" ;
    cin >> this->birth.year >> this->birth.month >> this->birth.day;
}
