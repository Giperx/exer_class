//*************************************************
//作者：熊志鹏
//时间：2022年5月22日
//功能：实验报告2-编程题4，阿克曼函数
//*************************************************
#include <iostream>
using namespace std;
int akm(int m, int n){
    if (!m) return n + 1;
    if (m > 0 && !n) return akm(m - 1, 1);
    return akm(m - 1, akm(m, n - 1));
}
int main(){
    int m, n;
    cin >> m >> n;
    cout << akm(m, n);
    return 0;
}





