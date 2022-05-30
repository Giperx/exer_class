//
// Created by Giperx on 2022/5/30.
//
#include<iostream>
#include<string.h>
#include"Date.h"
#include"Account.h"
using namespace std;
double Account::total = 0;
int main()
{
    Date d01(2008,11,5),d02(2008,12,5),
    d11(2008,11,25),d12(2008,12,20),
    d2(2009,1,1),dc1(2008,11,15),dc2(2008,12,1);
    Account *ptr;           //定义基类指针
    cout<<"--------------------------------"<<"1001"<<"------------------------------"<<endl;
    SavingsAccount s0(2008,11,1,1001,0,0.015);
    ptr=&s0;                //基类指针调用
    ptr->deposit(d01,5000);
    ptr->deposit(d02,5500);
    ptr->settle(d2);
    d2.show();
    ptr->show();
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"--------------------------------"<<"1002"<<"------------------------------"<<endl;
    SavingsAccount s1(2008,11,1,1002,0,0.015);
    ptr=&s1;
    ptr->deposit(d11,10000);
    ptr->withdraw(d12,4000);
    ptr->settle(d2);
    d2.show();
    ptr->show();
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"--------------------------------"<<"1003"<<"------------------------------"<<endl;
    CreditAccount c0(2008,11,1,1003,0,10000,0.0005,50);
    ptr=&c0;
    ptr->deposit(dc1,2000);
    ptr->withdraw(dc2,2000);
    ptr->withdraw(dc2,-c0.getDebt(dc2));    //结算利息
    ptr->settle(d2);
    d2.show();
    ptr->show();
    cout<<"------------------------------------------------------------------"<<endl;
    d2.show();
    ptr->getTotal();
    cout<<"------------------------------------------------------------------"<<endl;
}
