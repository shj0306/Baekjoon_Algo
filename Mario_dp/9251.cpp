#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1001;
string str1, str2;
int dp[MAX][MAX]; //dp[i][j] : str1의 i번째까지와 str2의 j번째까지의 lcs길이

int main() {
    fast_io;
    cin >> str1 >> str2;
    int N = (int)str1.length();
    int M = (int)str2.length();

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (str1[i-1] == str2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            }else {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }

    cout << dp[N][M] << '\n';

}