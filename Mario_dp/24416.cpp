//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int dp[41];
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    dp[1] = dp[2] = 1;
//    for (int i = 3; i <= N; i++) {
//        dp[i] = dp[i-1] + dp[i-2];
//    }
//    cout << dp[N] << ' ' << N - 2;
//}