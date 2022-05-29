//
// Created by Giperx on 2022/5/24.
//

#include "client.h"

void client::ChangeServerName() {
    cout << "old serverName:" << serverName << " old ClientNum : " << ClientNum << endl;
    cout << "new serverName:";
    ClientNum ++;
    cin >> serverName;
    cout << "new serverName:" << serverName << " new ClientNum : " << ClientNum << endl;
}
char client::serverName[10] = "NULLName";
int client::ClientNum = 0;