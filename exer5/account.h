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
    string id; //账号
    double balance; //余额
    double rate; //年利率
    Date lastDate; //上一次余额变动日期
    double accumulation; //上次计算利息到这次变化值
    static double total; // 各个账户总金额
    string info; //文字说明
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
