//*************************************************
//作者：Giperx
//时间：2022年5月21日
//功能：实验报告2-实验基本原理-1， 华氏温度转摄氏温度
//*************************************************
#include <iostream>
using namespace std;

int main(){
    double C, F;
    cout << "输入华氏温度：";
    cin >> F;
    C = (F - 32) * 5 / 9;
    cout << "对应摄氏温度为：" << C;
    return 0;
}