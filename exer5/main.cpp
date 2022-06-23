//*************************************************
//作者：Giperx
//时间：2022年5月27日
//功能：实验报告5，设计题
//*************************************************


#include "account.h"
#include "Date.h"
int main(){
    SavingAccount s1(2022, 5, 27, "1", 0.01);
    SavingAccount s2(2022, 5, 27, "2", 0.02);
    Date d01(2022, 6, 3), d02(2022, 6, 10),
    d11(2022, 6, 20), d12(2022, 8, 21), d2(2023, 5, 20);
    s1.deposit(d01,3000);
    s2.deposit(d11,5000);
    s1.deposit(d02,1500);
    s2.withdraw(d12,6000);
    s2.withdraw(d12,2000);
    s1.settle(d2);
    s2.settle(d2);
    return 0;
}





