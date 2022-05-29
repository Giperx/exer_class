//*************************************************
//作者：熊志鹏
//时间：2022年5月22日
//功能：实验报告2-编程题6，笨小猴
//*************************************************
#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;
unordered_map<char, int> m;
int main(){
    string word;
    cin >> word;
    bool flag = true;
    int maxn = 0, minn = 110;
    for (int i = 0; i < word.size(); ++i) {
        m[word[i]] ++;
        maxn = max(maxn, m[word[i]]);
        minn = min(minn, m[word[i]]);
    }
    for (int i = 2; i < sqrt(maxn - minn); ++i) {
        if (!((maxn - minn) % i)) {
            flag = false;
            break;
        }
    }
    if (flag && maxn - minn) cout << "Lucky Word" << endl << maxn - minn;
    else cout << "No Answer\n0";
    return 0;
}





