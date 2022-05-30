//
// Created by Giperx on 2022/5/30.
//
#include <iostream>
#include "Point.h"
using namespace std;
int main(){
    Point p1(1, 2), p2(3, 4);
    p1.show();
    p2.show();
    ++p1, ++p2;
    p1.show();
    p2.show();
    return 0;
}
