//*************************************************
//作者：熊志鹏
//时间：2022年5月19日
//功能：实验报告-编程题1025保留12位小数的浮点数
//*************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a = 0;
    cin >> a;
    cout << fixed << setprecision(12) <<  a;
    return 0;
}