//*************************************************
//作者：熊志鹏
//时间：2022年5月18日
//功能：实验报告-实验基本原理-5， 声明一个时间的结构体，输入输出
//*************************************************
#include <iostream>
using namespace std;
typedef struct time {
    int year, month, day, hours, minutes, seconds;
}time;
int main(){
    int year, month, day, hours, minutes, seconds;
    cout << "请输入年："; cin >> year;
    cout << "请输入月："; cin >> month;
    cout << "请输入日："; cin >> day;
    cout << "请输入时："; cin >> hours;
    cout << "请输入分："; cin >> minutes;
    cout << "请输入秒："; cin >> seconds;
    time t1 = {year, month, day, hours, minutes, seconds};
    cout << year << "年 " << month << "月 " << day << "日 " << hours << "时 " << minutes << "分 " << seconds << "秒";
    return 0;
}