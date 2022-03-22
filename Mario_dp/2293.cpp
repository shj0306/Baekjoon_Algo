//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, k, a[101];
//int dp[10001];
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    dp[0] = 1;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = a[i]; j <= k; j++) {
//            dp[j] += dp[j-a[i]];
//        }
//    }
//    cout << dp[k];
//}