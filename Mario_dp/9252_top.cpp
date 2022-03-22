/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string str1, str2;
string res;
int dp[1001][1001];

void dfs(int i, int j) {
    if (i == (int)str1.length() || j == (int)str2.length()) return;
    if (str1[i] == str2[j]) {
        res += str1[i];
        dfs(i+1,j+1);
    }
    else dp[i+1][j] >= dp[i][j+1] ? dfs(i+1,j) : dfs(i, j+1);
}

int LCS(int pos1, int pos2) {
    if (pos1 == str1.length() || pos2 == str2.length()) return 0;
    int &ret = dp[pos1][pos2];
    if (ret != -1) return ret;
    ret = LCS(pos1+1, pos2);
    ret = max(ret, LCS(pos1, pos2+1));
    ret = max(ret, LCS(pos1+1,pos2+1) + (str1[pos1] == str2[pos2]));
    return ret;
}

int main() {
    fast_io;
    cin >> str1 >> str2;
    memset(dp,-1,sizeof(dp));
    int len = LCS(0,0);
    cout << len << '\n';
    if (len) {
        dfs(0,0);
        cout << res << '\n';
    }
}
//memory : 5940	time : 20(ms)*/
