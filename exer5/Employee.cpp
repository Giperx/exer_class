//
// Created by Giperx on 2022/5/26.
//

#include "Employee.h"

void Employee::change_name() {
    cin >> this->name;
}
void Employee::display() {
    cout << "name:" << name << " address:" << address << endl << "city:" << city << "postId:" << postId << endl;
}