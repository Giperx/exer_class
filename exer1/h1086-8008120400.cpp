//*************************************************
//���ߣ�Giperx
//ʱ�䣺2022��5��20��
//���ܣ�ʵ�鱨��-�����1086�ǹȲ���
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