//*************************************************
//���ߣ���־��
//ʱ�䣺2022��5��20��
//���ܣ�ʵ�鱨��-�����1098�������ֽ�
//*************************************************
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int n, cnt, a[10];
int main(){
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++)
        if (n % i == 0){
            cout << n / i;
            break;
        }
    return 0;
}