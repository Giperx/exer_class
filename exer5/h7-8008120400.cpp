//*************************************************
//作者：熊志鹏
//时间：2022年5月26日
//功能：实验报告5实验任务7,测试修改后的Person类
//*************************************************

#include "Person.h"
#include<cstdio>
int main(){
    Person ps[3];
    ps[0].login_info();
    ps[1].login_info();
    ps[2] = ps[1];
    for (int i = 0; i < 3; ++i) {
        ps[i].show_info();
    }
    return 0;
}





