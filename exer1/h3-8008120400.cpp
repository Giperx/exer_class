//*************************************************
//���ߣ���־��
//ʱ�䣺2022��5��18��
//���ܣ�ʵ�鱨��-ʵ�����ԭ��-3�� ��̼���ͼ�ε����
//*************************************************
#include <iostream>
#define PI 3.14
using namespace std;
int main(){
    int t;
    double s = 0;
    cout << "1��Բ��\n2��������\n3��������\n��ѡ�����ͼ�ε���״��";
    cin >> t;
        switch (t) {
            case 1: {
                double r = 0;
                cout << "����Բ�İ뾶r:";
                cin >> r;
                s = PI * r * r;
                cout << "Բ�����Ϊ��" << s << endl;
                break;
            }
            case 2: {
                int l, w;
                cout << "���볤���εĳ�����";
                cin >> l >> w;
                s = l * w;
                cout << "�����ε����Ϊ��" << s << endl;
                break;
            }
            case 3:{
                int h;
                cout << "���������εı߳���";
                cin >> h;
                s = h * h;
                cout << "�����ε����Ϊ��" << s << endl;
                break;
            }
            default: {
                cout << "�������!" << endl;
                break;
            }
    }
    return 0;
}