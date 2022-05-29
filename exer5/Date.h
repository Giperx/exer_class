//
// Created by Giperx on 2022/5/27.
//
#include <iostream>
using namespace std;
#include <cmath>
#ifndef EXER_CLASS_DATE_H
#define EXER_CLASS_DATE_H


class Date {
private:
    int year, month, day, totalDays;
public:
    int totalUntilMonDays[14] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273,
                                 304, 334, 365};
    Date() : year(1), month(1), day(1), totalDays(1){};
    Date(int year, int month, int day);
    int getYear() const{return year;}
    int getMonth() const{return month;}
    int getDay() const{return day;}
    int getMaxDay() const;
    bool isLeapYear() const;
    int distance(const Date date) const;
    void show() const;
};


#endif //EXER_CLASS_DATE_H
