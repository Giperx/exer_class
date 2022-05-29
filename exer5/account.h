//
// Created by Giperx on 2022/5/27.
//
#include <iostream>
#include "Date.h"
using namespace std;
#ifndef EXER_CLASS_SAVINGACCOUNT_H
#define EXER_CLASS_SAVINGACCOUNT_H


class SavingAccount {
private:
    string id; //�˺�
    double balance; //���
    double rate; //������
    Date lastDate; //��һ�����䶯����
    double accumulation; //�ϴμ�����Ϣ����α仯ֵ
    static double total; // �����˻��ܽ��
    string info; //����˵��
    void record(Date date, double amount);
    double accumulate(Date date) const;
public:
    void show() const;
    SavingAccount();
    SavingAccount(int year, int month, int day, string id, double rate);
    string getId() const;
    double getBalance() const;
    double getRate() const;
    static double getTotal();
    void deposit(Date date, double amount);
    void withdraw(Date date, double amount);
    void settle(Date date);
    void error(string errInfo);
};


#endif //EXER_CLASS_SAVINGACCOUNT_H
