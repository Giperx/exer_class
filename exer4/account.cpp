//
// Created by Giperx on 2022/5/25.
//

#include "account.h"
double SavingAccount::total = 0;
SavingAccount::SavingAccount(int date, int id, double rate):
    lastDate(date), id(id), rate(rate), balance(0){
    show();
}

double SavingAccount::getBalance() const {return balance;}

double SavingAccount::getRate() const {return rate;}

int SavingAccount::getId() const {return id;}

double SavingAccount::getTotal() {return total;}

double SavingAccount::accumulate(int date) const {return accumulation + balance * (date - lastDate);}

void SavingAccount::record(int date, double amount) {
    lastDate = date, accumulation = accumulate(date), balance += amount;
    show();
}

void SavingAccount::deposit(int date, double amount) {
    record(date, amount);
}

void SavingAccount::withdraw(int date, double amount) {
    if (balance < amount) {
        cout << "余额不足！" << endl;
        show();
    } else{
        record(date, -amount);
    }
}

void SavingAccount::settle(int date) {
    double tmp = accumulate(date + lastDate) * rate / 365;
    record(date, tmp);
    accumulation = 0;
}
void SavingAccount::show() const {
    cout << "date: " << lastDate << " id : " << id << " balance : " << balance << " rate: " << rate << endl;
}



