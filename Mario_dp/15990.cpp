//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MOD = 1e9+9;
//int T, N;
//ll dp[100001][4];
//
//int main() {
//    fast_io;
//    cin >> T;
//
//    for (int i = 1; i <= 3; i++) dp[0][i] = 1;
//
//    for (int i = 1; i <= 100000; i++) {
//        for (int j = 1; j <= 3; j++) {
//            for (int k = 1; k <= 3; k++) {
//                if (i >= k && j != k) {
//                    dp[i][j] += dp[i-k][k] % MOD;
//                }
//            }
//        }
//    }
//
//    while(T--) {
//        cin >> N;
//        if (N <= 2) cout << 1 << '\n';
//        else cout << (dp[N-1][1] + dp[N-2][2] + dp[N-3][3]) % MOD << '\n';
//    }
//}