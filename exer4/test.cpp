//*************************************************
//作者：熊志鹏
//时间：2022年5月24日
//功能：实验报告4，测试client类中静态变量的变化
//*************************************************


#include "client.h"

int main(){
    cout << "create c1" << endl;
    client c1;
    cout << "c1:" << endl;
    c1.ChangeServerName();

    cout << "create c2" << endl;
    client c2;
    cout << "c2:" << endl;
    c2.ChangeServerName();

    return 0;
}





