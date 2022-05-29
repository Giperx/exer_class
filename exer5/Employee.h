//
// Created by Giperx on 2022/5/26.
//
#include <iostream>
using namespace std;
#ifndef EXER_CLASS_EMPLOYEE_H
#define EXER_CLASS_EMPLOYEE_H


class Employee {
private:
    string name;
    string address;
    string city;
    int postId;
public:
    Employee(): name("NULL"), address("NULL"), city("NULL"), postId(0){}
    Employee(string name, string address, string city, int postId) : name(name), address(address), city(city), postId(postId){}
    void change_name();
    void display();
};


#endif //EXER_CLASS_EMPLOYEE_H
