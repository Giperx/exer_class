//
// Created by Giperx on 2022/5/30.
//

#include "Account.h"
Account::Account(int Id,double Balance)     //Account基类成员函数
{
    id=Id;
    balance=Balance;
}
void Account::show()
{
    cout<<"\t账号:"<<getId()<<"  余额:"<<getBalance()<<endl;
}
void Account::getTotal()
{
    cout<<"\t各账户总额:"<<total<<endl;
}
//SavingsAccount储蓄卡类成员函数
SavingsAccount::SavingsAccount(int year,int month,int day,int id,double balance,double Rate):Account(id,balance),lastDate(year,month,day)
{
    rate=Rate;
    cout<<year<<"/"<<month<<"/"<<day<<endl;
    cout<<"\t账号"<<id<<"创建成功!"<<endl;
}
const double SavingsAccount::accumulate(Date date)
{
    return (lastDate-date)*balance;
}
void SavingsAccount::deposit(Date date,double amount)
{
    accumulation+=accumulate(date);
    balance+=amount;
    lastDate = date;
    total+=amount;
    cout<<date.getYear()<<"/"<<date.getMonth()<<"/"<<date.getDay()<<endl;
    cout<<"\t"<<id<<"\t存入:"<<amount<<"\t余额:"<<balance<<endl;
}
void SavingsAccount::withdraw(Date date,double amount)
{
    accumulation+=accumulate(date);
    balance-=amount;
    lastDate = date;
    total-=amount;
    cout<<date.getYear()<<"/"<<date.getMonth()<<"/"<<date.getDay()<<endl;
    cout<<"\t"<<id<<"\t取出:"<<amount<<"\t余额:"<<balance<<endl;
}
void SavingsAccount::settle(Date date)
{
    double settle = 0;
    if(date.getYear()>lastDate.getYear())           //储蓄卡一年结算一次利息
    {
        for(int i=1;i<=date.getYear()-lastDate.getYear();i++)       //
        {
            accumulation+=accumulate(date);
            settle = accumulation/356*rate;
        }
    }
    cout<<date.getYear()<<"/"<<date.getMonth()<<"/"<<date.getDay()<<endl;
    cout<<"\t"<<id<<"\t结算利息:"<<settle<<endl;
    deposit(date,settle);
}
void SavingsAccount::show()
{
    Account::show();
}
//CreditAccount信用卡类
CreditAccount::CreditAccount(int year,int month,int day,int id,double balance,double Credit,double Rate,double Fee): Account(id,balance),lastDate(year,month,day)
{
    credit=Credit;
    fee=Fee;
    rate=Rate;
    cout<<year<<"/"<<month<<"/"<<day<<endl;
    cout<<"\t账号"<<id<<"创建成功!"<<endl;
}
double CreditAccount::getDebt(Date date)
{
    settle(date);
    return balance;
}
void CreditAccount::deposit(Date date,double amount)
{
    settle(date);
    if(credit<=0 || amount>credit)
    {
        date.show();
        cout<<"\t"<<id<<"\t信用卡可用额度不足!"<<endl;
    }
    else
    {
        balance-=amount;
        credit-=amount;
        date.show();
        cout<<"\t"<<id<<"\t信用卡借款:"<<amount<<"\t\t还可用额度:"<<credit<<endl;
        total-=amount;
    }
}
void CreditAccount::withdraw(Date date,double amount)
{
    settle(date);
    balance+=amount;
    if((credit+amount)<=10000)
    {
        credit=credit+amount;
    }
    else
    {
        credit=10000;
    }
    total+=amount;
    date.show();
    cout<<"\t"<<id<<"\t信用卡还款:"<<amount<<"\t\t还可用额度:"<<credit<<endl;
}
void CreditAccount::settle(Date date)
{
    double settle=0;
    if((date.getMonth()<lastDate.getMonth())||(date.getYear()>lastDate.getYear()))
    {
        for(int i=1;i<=date.getYear()-lastDate.getYear();i++)
        {
            settle+=fee;                    //年费
        }
    }
    if(date.getDay()==1||date.getMonth()>lastDate.getMonth()||date.getYear()>lastDate.getYear())
    {
        if(date.getYear()==lastDate.getYear())
        {
            for(int j=1;j<=(date.getMonth()-lastDate.getMonth());j++)
            {
                for(int m=1;m<=lastDate-date;m++)
                {
                    settle-=balance*rate;
                }
            }
        }
        else
        {
            for(int j=1;j<=(date.getMonth()-lastDate.getMonth())+12;j++)
            {
                for(int m=1;m<=lastDate-date;m++)
                {
                    settle-=balance*rate;
                }
            }
        }
    }
    else
    {
        settle-=0;
    }
    balance-=settle;
    lastDate=date;
    total-=settle;
}
void CreditAccount::show()
{
    Account::show();
}