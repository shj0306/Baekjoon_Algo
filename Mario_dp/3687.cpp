//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int n;
//long long dp[101];
//int ms[9] = {0,0,1,7,4,2,0,8,10};
//
//void solve() {
//    for (int i = 1; i < 9; i++) dp[i] = ms[i];
//    dp[6] = 6;
//
//    for (int i = 9; i <= 100; i++) {
//        dp[i] = dp[i-2] * 10 + ms[2];
//        for (int j = 3; j <= 7; j++) dp[i] = min(dp[i], dp[i-j] * 10 + ms[j]);
//    }
//}
//
//int main() {
//    fast_io;
//    int t; cin >> t;
//    memset(dp, -1, sizeof(dp));
//    solve();
//    while(t--) {
//        cin >> n;
//        cout << dp[n] << ' ';
//        if (n % 2 == 0) {
//            for (int i = 0; i < n / 2; i++) cout << '1';
//        }else {
//            cout << '7';
//            for (int i = 0; i < (n-3)/2; i++) cout << '1';
//        }
//        cout << '\n';
//    }
//}