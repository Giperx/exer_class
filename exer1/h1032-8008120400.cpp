//*************************************************
//作者：Giperx
//时间：2022年5月19日
//功能：实验报告-编程题1032大象喝水
//*************************************************
#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14
#define V 20000
int main(){
    double h = 0, r = 0;
    cin >> h >> r;
    int res = V / (h * r * r * PI);
    if (h * r * r * PI * res < V) res ++;
    cout << res;
    return 0;
}