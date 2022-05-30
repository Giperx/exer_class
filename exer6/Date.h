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
    int  totalDays;   //�������Ǵӹ�ԪԪ��1��1�տ�ʼ�ĵڼ���
public:
    Date(int year, int month, int day);
    int  getYear() const { return year; }
    int  getMonth() const { return month; }
    int  getDay() const { return day; }
    void  show() const;			//�����ǰ����
    bool  isLeapYear(int year) const;	//�жϵ����Ƿ�Ϊ����
    int  distance(const Date& date) {return date.totalDays-totalDays;}//���㵱ǰ������ָ������֮���������
};


#endif //EXER_CLASS_DATE_H
