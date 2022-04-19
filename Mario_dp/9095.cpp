//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, n, dp[11];
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> n;
//        memset(dp, 0, sizeof(dp));
//
//        dp[1] = 1; dp[2] = 2; dp[3] = 4;
//
//        for (int num = 4; num <= n; num++) {
//            dp[num] = dp[num-1] + dp[num-2] + dp[num-3];
//        }
//        cout << dp[n] << '\n';
//    }
//}