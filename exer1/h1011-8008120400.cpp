//*************************************************
//作者：熊志鹏
//时间：2022年5月19日
//功能：实验报告-编程题1011甲流疫情死亡率
//*************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a = 0, b = 0;
    cin >> a >> b;
    cout << setprecision(3) <<  (b / a * 100) << '%';
    return 0;
}