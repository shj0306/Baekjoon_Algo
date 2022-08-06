#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int dp[101][101][101];
int l1, l2, l3;
string str1, str2, str3;

int main() {
    fast_io;
    cin >> str1 >> str2 >> str3;
    l1 = (int)str1.length();
    l2 = (int)str2.length();
    l3 = (int)str3.length();
    str1.insert(str1.begin(), '@');
    str2.insert(str2.begin(), '@');
    str3.insert(str3.begin(), '@');

    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            for (int k = 1; k <= l3; k++) {
                if (str1[i] == str2[j] && str2[j] == str3[k]) {
                    dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                }else {
                    dp[i][j][k] = max(dp[i][j][k],
                                      max(dp[i-1][j][k],
                                          max(dp[i][j-1][k], dp[i][j][k-1])));
                }
            }
        }
    }

    cout << dp[l1][l2][l3];
}