//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 10001;
//int t, n, m;
//int dp[MAX];
//
//int main() {
//    fast_io;
//    cin >> t;
//    for (int i = 0; i < t; i++) {
//        cin >> n;
//        vector<int> money(n+1);
//        memset(dp,0,sizeof(dp));
//        for (int ii = 1; ii <= n; ii++) cin >> money[ii];
//        cin >> m;
//
//        dp[0] = 1;
//        for (int j = 1; j <= n; j++) {
//            for (int jj = money[j]; jj <= m; jj++) {
//                dp[jj] += dp[jj - money[j]];
//            }
//        }
//        cout << dp[m] << '\n';
//    }
//}
