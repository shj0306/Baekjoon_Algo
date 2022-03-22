//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MOD = 1e9;
//int N, dp[101][10];
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i <= 9; i++) {
//        if (i == 0) dp[1][i] = 0;
//        else dp[1][i] = 1;
//    }
//
//    for (int i = 2; i <= N; i++) {
//        for (int j = 0; j <= 9; j++) {
//            if (j == 0) dp[i][j+1] += dp[i-1][j] % MOD;
//            else if (j == 9) {
//                dp[i][j-1] += dp[i-1][j] % MOD;
//            }else {
//                dp[i][j-1] += dp[i-1][j] % MOD;
//                dp[i][j+1] += dp[i-1][j] % MOD;
//            }
//        }
//    }
//    long long res = 0;
//    for (int i = 0; i <= 9; i++) res += dp[N][i];
//    cout << res % MOD;
//}