//
// Created by Giperx on 2022/5/27.
//

#ifndef EXER_CLASS_SAVINGACCOUNT_H
#define EXER_CLASS_SAVINGACCOUNT_H
#include "Date.h"
class Account
{
protected:
    int id;
    double balance;
    static double total;
public:
    Account(int id,double balance);
    const int getId() {return id;}
    const double getBalance() {return balance;}
    static void getTotal();
    void show();
};
class SavingsAccount: public Account
{
    double rate;
    Date lastDate;
    double accumulation=0;
    const double accumulate(Date date);
public:
    SavingsAccount(int year,int month,int day,int id,double balance,double Rate);
    void deposit(Date date,double amount);
    void withdraw(Date date,double amount);
    void settle(Date date);
    const double getRate() {return rate;}
    const void show();
};
class CreditAccount:public Account  //���ÿ���
{
protected:
    double credit;      //���
    double rate;        //����
    double fee;         //���
    Date lastDate;
public:
    CreditAccount(int year,int month,int day,int id,double balance,double credit,double rate,double fee);
    double getAvailableCredit() {return credit;}     //���ö��
    void deposit(Date date,double amount);
    void withdraw(Date date,double amount);
    double getDebt(Date date);                       //Ƿ����
    void settle(Date date);
    const void show();
};



#endif //EXER_CLASS_SAVINGACCOUNT_H
