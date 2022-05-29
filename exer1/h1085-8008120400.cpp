//*************************************************
//作者：熊志鹏
//时间：2022年5月20日
//功能：实验报告-编程题1085球弹跳高度的计算
//*************************************************
#include <iostream>
#include <iomanip>
using namespace std;
double h, sums, lash;
int main(){
    cin >> h;
    for (int i = 0; i < 9; ++i) {
        sums += h;
        h /= 2;
        sums += h;
    }
    cout << sums + h << endl;
    cout << h / 2;
    return 0;
}