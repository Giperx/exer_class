//*************************************************
//���ߣ���־��
//ʱ�䣺2022��5��20��
//���ܣ�ʵ�鱨��-�����1085�����߶ȵļ���
//*************************************************
#include <iostream>
#include <iomanip>
using namespace std;
double h, sums, lash;
int main(){
    cin >> h;
    for (int i = 0; i < 9; ++i) {
        sums += h;
        h /= 2;
        sums += h;
    }
    cout << sums + h << endl;
    cout << h / 2;
    return 0;
}