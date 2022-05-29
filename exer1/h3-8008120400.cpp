//*************************************************
//作者：熊志鹏
//时间：2022年5月18日
//功能：实验报告-实验基本原理-3， 编程计算图形的面积
//*************************************************
#include <iostream>
#define PI 3.14
using namespace std;
int main(){
    int t;
    double s = 0;
    cout << "1、圆形\n2、长方形\n3、正方形\n请选择计算图形的形状：";
    cin >> t;
        switch (t) {
            case 1: {
                double r = 0;
                cout << "输入圆的半径r:";
                cin >> r;
                s = PI * r * r;
                cout << "圆的面积为：" << s << endl;
                break;
            }
            case 2: {
                int l, w;
                cout << "输入长方形的长、宽：";
                cin >> l >> w;
                s = l * w;
                cout << "长方形的面积为：" << s << endl;
                break;
            }
            case 3:{
                int h;
                cout << "输入正方形的边长：";
                cin >> h;
                s = h * h;
                cout << "正方形的面积为：" << s << endl;
                break;
            }
            default: {
                cout << "输入错误!" << endl;
                break;
            }
    }
    return 0;
}