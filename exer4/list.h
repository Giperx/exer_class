//
// Created by Giperx on 2022/5/25.
//

#ifndef EXER_CLASS_LIST_H
#define EXER_CLASS_LIST_H

#include <iostream>
#include <string>
using namespace std;

class List {
public:
    List();
    void run();
    void push();
    void getEmpty() const;
    void getFull() const;
    void quit() const;

    ~List() {}


private:
    static const int LIMIT = 6;
    int item[LIMIT];
    int cnt;

};


#endif //EXER_CLASS_LIST_H
