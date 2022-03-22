/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 1001;
string str1, str2;
string res;
int lcs[MAX][MAX];

void find_lcs(int i, int j) {
    if (i == 0 || j == 0) return;
    if (lcs[i][j] == lcs[i-1][j]) dfs(i-1, j);
    else if (lcs[i][j] == lcs[i][j-1]) dfs(i,j-1);
    else {
        res += str1[i-1];
        dfs(i-1,j-1);
    }
}

int main() {
    fast_io;
    cin >> str1 >> str2;
    for (int i = 1; i <= str1.length(); i++) {
        char c1 = str1[i - 1];
        for (int j = 1; j <= str2.length(); j++) {
            char c2 = str2[j - 1];
            if (c1 == c2) lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }
    int i = (int) str1.length(), j = (int) str2.length();

    find_lcs(i,j);

    int max_len = lcs[str1.length()][str2.length()];
    cout << max_len << '\n';
    if (max_len) {
        for (int ii = (int)res.length()-1; ii >= 0; ii--) cout << res[ii];
    }
}*/
//memory : 5940	time : 4(ms)
