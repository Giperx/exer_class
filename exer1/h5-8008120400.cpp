//*************************************************
//���ߣ���־��
//ʱ�䣺2022��5��18��
//���ܣ�ʵ�鱨��-ʵ�����ԭ��-5�� ����һ��ʱ��Ľṹ�壬�������
//*************************************************
#include <iostream>
using namespace std;
typedef struct time {
    int year, month, day, hours, minutes, seconds;
}time;
int main(){
    int year, month, day, hours, minutes, seconds;
    cout << "�������꣺"; cin >> year;
    cout << "�������£�"; cin >> month;
    cout << "�������գ�"; cin >> day;
    cout << "������ʱ��"; cin >> hours;
    cout << "������֣�"; cin >> minutes;
    cout << "�������룺"; cin >> seconds;
    time t1 = {year, month, day, hours, minutes, seconds};
    cout << year << "�� " << month << "�� " << day << "�� " << hours << "ʱ " << minutes << "�� " << seconds << "��";
    return 0;
}