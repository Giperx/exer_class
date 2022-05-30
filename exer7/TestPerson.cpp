//
// Created by Giperx on 2022/5/30.
//
#include "Person.h"
int main(){
    Person p1;
    p1.login_info();
    p1.show_info();
    Person p2;
    p2.login_info();
    p2.show_info();
    cout << "p1 == p2 : " ;
    if ( (p1 == p2)) cout << "1";
    else cout << '0' << endl;
    p2 = p1;
    cout << "p2:" << endl;
    p2.show_info();
    cout << "p1 == p2 : " ;
    if ( (p1 == p2)) cout << "1";
    else cout << '0';

    return 0;
}
