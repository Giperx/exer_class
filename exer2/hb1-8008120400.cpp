//*************************************************
//作者：熊志鹏
//时间：2022年5月22日
//功能：实验报告2-编程题1，计算电报费用
//*************************************************
#include <iostream>
using namespace std;

int main(){
    int n, res = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        res += (x + 9) / 10;
    }
    cout << res;
    return 0;
}





