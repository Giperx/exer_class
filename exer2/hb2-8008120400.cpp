//*************************************************
//作者：熊志鹏
//时间：2022年5月22日
//功能：实验报告2-编程题2，区间内的真素数
//*************************************************
#include <iostream>
#include <cmath>
using namespace std;
int a[1010];
int main(){
    int m, n, cnt = 0;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        if (i == 1) continue;
        bool flag = true;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (!(i % j)) {
                flag = false;
                break;
            }
        }
        if (flag) {
            int tmp = 0, itmp = i;
            while (itmp) tmp = tmp * 10 + itmp % 10, itmp /= 10;
            if (tmp == 1) continue;
            flag = true;
            for (int j = 2; j <= sqrt(tmp); ++j) {
                if (!(tmp % j)) {
                    flag = false;
                    break;
                }
            }
            if (flag) a[cnt ++] = i;
        }

    }
    for (int i = 0; i < cnt; ++i) {
        if (i == cnt - 1) cout << a[i];
        else cout << a[i] << ',';
    }
    return 0;
}





