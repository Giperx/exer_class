//*************************************************
//作者：Giperx
//时间：2022年5月25日
//功能：实验报告5，编写并测试3×3矩阵转置函数，使用数组保存3×3矩阵
//*************************************************

#include <iostream>
using namespace std;

void revert_tr(int (&arr)[3][3]){
    for (int i = 0; i < 3; ++i) {
        for (int j = i; j < 3; ++j) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
int main(){
    int arr[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }
    revert_tr(arr);
    for (int i = 0; i <3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}





