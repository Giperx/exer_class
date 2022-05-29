//*************************************************
//作者：熊志鹏
//时间：2022年5月20日
//功能：实验报告-编程题1098质因数分解
//*************************************************
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int n, cnt, a[10];
int main(){
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++)
        if (n % i == 0){
            cout << n / i;
            break;
        }
    return 0;
}