//*************************************************
//���ߣ�Giperx
//ʱ�䣺2022��5��23��
//���ܣ�ʵ�鱨��2����ţ
//*************************************************
#include <iostream>
#include <cmath>
using namespace std;
int sells[6], res;
int sellcow(int nums, int days){
    if (!days) return 0;
    nums++;
    nums *= 2;
    sells[days] =nums/2 + 1;
    return sells[days] + sellcow(nums, days - 1);
}
int main(){
    cout << sellcow(3, 5) << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << "��" << i << "������ţ��ͷ����" << sells[i] << endl;
    }
    return 0;
}





