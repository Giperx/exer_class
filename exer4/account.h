//
// Created by Giperx on 2022/5/25.
//
#include <iostream>
using namespace std;
#ifndef EXER_CLASS_SAVINGACCOUNT_H
#define EXER_CLASS_SAVINGACCOUNT_H


class SavingAccount {
private:
    int id; //账号
    double balance; //余额
    double rate; //年利率
    int lastDate; //上一次余额变动日期
    double accumulation; //上次计算利息到这次变化值
    static double total; // 各个账户总金额
    void record(int date, double amount);
    double accumulate(int date) const;
public:
    void show() const;
    SavingAccount(int date, int id, double rate);
    int getId() const;
    double getBalance() const;
    double getRate() const;
    static double getTotal();
    void deposit(int date, double amount);
    void withdraw(int date, double amount);
    void settle(int date);
};


#endif //EXER_CLASS_SAVINGACCOUNT_H
