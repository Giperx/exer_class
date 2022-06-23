//*************************************************
//作者：Giperx
//时间：2022年5月23日
//功能：实验报告3，爬楼梯
//*************************************************
#include <iostream>
#include <cmath>
using namespace std;
int ways[31];
int main(){
    ways[1] = 1, ways[2] = 2;
    for (int i = 3; i <= 30; ++i) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }
    int a, b, c;
    cin >> a >> b >> c;
    cout << ways[a] << endl << ways[b] << endl << ways[c];
    return 0;
}





