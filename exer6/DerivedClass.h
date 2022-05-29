//
// Created by Giperx on 2022/5/28.
//

#ifndef EXER_CLASS_DERIVEDCLASS_H
#define EXER_CLASS_DERIVEDCLASS_H
#include <iostream>
#include "BaseClass.h"
using namespace std;

class DerivedClass : public BaseClass{
public:
    DerivedClass(){cout << "DerivedClass()" << endl;}
    ~DerivedClass(){cout << "~DerivedClass()" << endl;}
};


#endif //EXER_CLASS_DERIVEDCLASS_H
