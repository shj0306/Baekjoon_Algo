//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int n,m,res;
//char arr[1001][1001];
//int dp[1001][1001];
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> arr[i][j];
//            if (arr[i][j] == '1') {
//                dp[i][j] = 1;
//                res = 1;
//            }
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            if (arr[i][j] == '1') {
//                if (dp[i-1][j] && dp[i][j-1] && dp[i-1][j-1]) {
//                    dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
//                    res = max(res, dp[i][j] * dp[i][j]);
//                }
//            }
//        }
//    }
//    cout << res;
//}