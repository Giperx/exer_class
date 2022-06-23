//*************************************************
//作者：Giperx
//时间：2022年5月23日
//功能：实验报告2，买牛
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
        cout << "第" << i << "天卖出牛的头数：" << sells[i] << endl;
    }
    return 0;
}





