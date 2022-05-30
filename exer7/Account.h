//
// Created by Giperx on 2022/5/30.
//

#ifndef EXER_CLASS_ACCOUNT_H
#define EXER_CLASS_ACCOUNT_H

#include "Date.h"
class Account                       //����
{
protected:
    int id;
    double balance;
    static double total;
public:
    Account(int id, double balance);
    const int getId() {return id;}
    const double getBalance() {return balance;}
    static void getTotal();
    virtual void deposit(Date date,double amount)=0;
    virtual void withdraw(Date date,double amount)=0;
    virtual void settle(Date date)=0;
    virtual void show();
};
class SavingsAccount:public Account     //�����
{
protected:
    double rate;    //����
    Date lastDate;
    double accumulation=0;
    const double accumulate(Date date);
public:
    SavingsAccount(int year,int month,int day,int id,double balance,double rate);
    void deposit(Date date,double amount);
    void withdraw(Date date,double amount);
    void settle(Date date);
    const double getRate() {return rate;}
    void show();
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
    void show();
};


#endif //EXER_CLASS_ACCOUNT_H
