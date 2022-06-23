//*************************************************
//作者：Giperx
//时间：2022年5月26日
//功能：实验报告5实验任务3，实现两字符串的连接
//*************************************************

#include <iostream>
#include <cstring>
using namespace std;
void linkchar(char *a, char *b){
    for (int i = strlen(a), j = 0; i < strlen(a) + strlen(b); ++i, j++) {
        a[i] = b[j];
    }
}

int main(){
    char a[10], b[10];
    cin >> a;
    cin >> b;
    linkchar(a, b);
    cout << a;
    return 0;
}





