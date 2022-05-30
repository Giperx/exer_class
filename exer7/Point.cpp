//
// Created by Giperx on 2022/5/30.
//

#include "Point.h"
#include <iostream>.
using namespace std;
Point::Point() : _x(0), _y(0){}
Point::Point(int x, int y) : _x(x), _y(y){}

Point Point::operator++() {
    this->_x++, this->_y++;
    return *this;
}

Point Point::operator--() {
    this->_x--, this->_y;
    return *this;
}

void Point::show() {
    cout << "x: " << _x << " y: " << _y << endl;
}