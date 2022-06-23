//*************************************************
//作者：Giperx
//时间：2022年5月18日
//功能：实验报告-实验基本原理-1、2,求1~10之和
//*************************************************
//#include <iostream>
using namespace std;
int main(){

    int res = 0, i = 1;
    do {
        res += i;
        i++;
    } while (i <= 10);
//使用for循环代替do-while
//    for (int i = 1; i <= 10; ++i) {
//        res += i;
//    }
    cout << res << endl;

    return 0;
}