//*************************************************
//作者：熊志鹏
//时间：2022年5月21日
//功能：实验报告2-实验基本原理-3， 利用系统函数pow（）计算x的y次方
//*************************************************
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    cout << pow(x, y);
    return 0;
}