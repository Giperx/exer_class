//*************************************************
//作者：Giperx
//时间：2022年5月19日
//功能：实验报告-编程题1074津津的储蓄计划
//*************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int m[12] = {}, res = 0, save = 0;
    for (int i = 0; i < 12; ++i) {
        cin >> m[i];

    }
    for (int i = 0; i < 12; ++i) {
        if (res + 300 < m[i]){
            cout << '-' << i + 1;
            return 0;
        }
        res = res + 300 - m[i];
        if (res / 100) {
            save += res / 100 * 100;
            res -= res / 100 * 100;
        }
    }
    cout << res + (double)save * 1.2;
    return 0;
}