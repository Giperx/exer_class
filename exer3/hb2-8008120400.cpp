//*************************************************
//作者：熊志鹏
//时间：2022年5月23日
//功能：实验报告3，放苹果
//*************************************************
#include <iostream>
using namespace std;

int d(int m, int n)
{
    if(m == 0 || n == 1) return 1;
    if(n > m) return d(m, m);
    else return d(m, n-1) + d(m - n, n);
}

int main()
{
    int T, M, N;
    cin >> T;
    while(T--) {
        cin >> M >> N;
        cout << d(M, N) << endl;
    }
    return 0;
}





