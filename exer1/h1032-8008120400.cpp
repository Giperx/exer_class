//*************************************************
//���ߣ�Giperx
//ʱ�䣺2022��5��19��
//���ܣ�ʵ�鱨��-�����1032�����ˮ
//*************************************************
#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14
#define V 20000
int main(){
    double h = 0, r = 0;
    cin >> h >> r;
    int res = V / (h * r * r * PI);
    if (h * r * r * PI * res < V) res ++;
    cout << res;
    return 0;
}