//*************************************************
//作者：Giperx
//时间：2022年5月25日
//功能：实验报告4，测试account类
//*************************************************


#include "account.h"

int main(){
    SavingAccount account1(20220511, 1, 0.02);
    SavingAccount account2(20220515, 2, 0.03);
    account1.deposit(20220516, 2000);
    account2.deposit(20220517, 1000);
    account1.withdraw(20220520, 200);
    account2.withdraw(20220521, 500);
    account1.settle(30);
    account2.settle(30);
    return 0;
}





