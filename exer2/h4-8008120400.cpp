//*************************************************
//作者：熊志鹏
//时间：2022年5月21日
//功能：实验报告2-实验基本原理-4， 递归实现Fibonacci 级数
//*************************************************
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int Fbc(int n){
    if (n == 1 || n == 2){
        cout << "return 1" << endl;
        return 1;
    }
    cout << "call Fbc(" << n - 1 << ") and Fbc(" << n - 2 << ")" << endl;
    int x = Fbc(n - 1) + Fbc(n - 2);
    return x;
}
int main(){
    int n;
    cin >> n;
    cout << Fbc(n);
    return 0;
}





