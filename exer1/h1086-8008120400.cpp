//*************************************************
//作者：Giperx
//时间：2022年5月20日
//功能：实验报告-编程题1086角谷猜想
//*************************************************
#include <iostream>
#include <iomanip>
using namespace std;
int n;
int main(){
    cin >> n;
    while(1){
        if (n == 1){
            puts("End");
            break;
        }
        if (n % 2){
            cout << n << "*3+1=";
            n = n * 3 + 1;
            cout << n << endl;
        }
        else{
            cout << n << "/2=";
            n /= 2;
            cout << n << endl;
        }
    }
    return 0;
}