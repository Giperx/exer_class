//*************************************************
//作者：熊志鹏
//时间：2022年5月22日
//功能：实验报告2-编程题5，求f（x， n）
//*************************************************
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x, int n){
    if (n == 1) return sqrt(n + x);
    return sqrt(n + f(x, n - 1));
}
int main(){
    double x;
    int n;
    cin >> x >> n;
    cout << fixed << setprecision(2) << f(x, n);
    return 0;
}





