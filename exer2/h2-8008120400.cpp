//*************************************************
//作者：Giperx
//时间：2022年5月21日
//功能：实验报告2-实验基本原理-2， 重载函数Max1
//*************************************************
#include <iostream>
using namespace std;
int Max1(int a, int b){
    return a > b ? a : b;
}
int Max1(int a, int b, int c){
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
double Max1(double a, double b){
    return a > b ? a : b;
}
double Max1(double a, double b, double c){
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << Max1(a, b, c);
    return 0;
}