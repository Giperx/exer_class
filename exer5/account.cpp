//
// Created by Giperx on 2022/5/27.
//

#include "account.h"
double SavingAccount::total = 0;
SavingAccount::SavingAccount() : id("0"), rate(0), balance(0), accumulation(0){}
SavingAccount::SavingAccount(int year, int month, int day, string id, double rate):
    lastDate(year, month, day), id(id), rate(rate), balance(0), accumulation(0){
    show();
}

double SavingAccount::getBalance() const {return balance;}

double SavingAccount::getRate() const {return rate;}

string SavingAccount::getId() const {return id;}

double SavingAccount::getTotal() {return total;}

double SavingAccount::accumulate(Date date) const {return accumulation + balance * date.distance(lastDate);}

void SavingAccount::record(Date date, double amount) {
    lastDate = date, accumulation = accumulate(date), balance += amount;
    show();
}

void SavingAccount::deposit(Date date, double amount) {
    record(date, amount);
}

void SavingAccount::withdraw(Date date, double amount) {
    if (balance < amount) {
        error("Óà¶î²»×ã£¡");
    } else{
        record(date, -amount);
    }
}

void SavingAccount::settle(Date date) {
    double tmp = accumulate(date) * rate / 365;
    record(date, tmp);
    accumulation = 0;
}
void SavingAccount::show() const {
    cout << "date: ";
    lastDate.show();
    cout << " id : " << id << " balance : " << balance << " rate: " << rate << endl;
}

void SavingAccount::error(string errInfo) {
    show();
    cout << errInfo << endl;
}



