//
// Created by Giperx on 2022/5/27.
//
#include <iostream>
using namespace std;
#include <cmath>
#ifndef EXER_CLASS_DATE_H
#define EXER_CLASS_DATE_H


class  Date
{
    int  year, month, day;
    int  totalDays;   //该日期是从公元元年1月1日开始的第几天
public:
    Date(int year, int month, int day);
    int  getYear() const { return year; }
    int  getMonth() const { return month; }
    int  getDay() const { return day; }
    void  show() const;			//输出当前日期
    bool  isLeapYear(int year) const;	//判断当年是否为闰年
    int operator-(const Date &date) const {return date.totalDays-totalDays;}      //运算符-重载
};


#endif //EXER_CLASS_DATE_H
