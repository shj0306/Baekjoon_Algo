//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MOD = 1e4+7;
//int N, dp[1001][10];
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < 10; i++) dp[1][i] = 1;
//
//    for (int i = 2; i <= N; i++) {
//        for (int j = 0; j < 10; j++) {
//            for (int k = 0; k <= j; k++) {
//                dp[i][j] += dp[i-1][k] % MOD;
//            }
//        }
//    }
//
//    ll res = 0;
//    for (int i = 0; i < 10; i++) res += dp[N][i];
//    cout << res % MOD << '\n';
//}