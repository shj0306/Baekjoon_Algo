//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int T, N;
//ll dp[65][10], res;
//
//int main() {
//    fast_io;
//    cin >> T;
//
//    for (int j = 0; j < 10; j++) dp[1][j] = 1;
//
//    for (int i = 2; i <= 64; i++) {
//        for (int j = 0; j < 10; j++) {
//            for (int k = 0; k <= j; k++) {
//                dp[i][j] += dp[i-1][k];
//            }
//        }
//    }
//
//    while (T--) {
//        cin >> N;
//
//        res = 0;
//        for (int i = 0; i < 10; i++)
//            res += dp[N][i];
//        cout << res << '\n';
//    }
//}