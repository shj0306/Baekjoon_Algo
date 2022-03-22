//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//const int MAX = 1500001;
//int t[MAX], p[MAX], dp[MAX];
//
//int main() {
//    fast_io;
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++) cin >> t[i] >> p[i];
//
//    for (int i = 1; i <= n+1; i++) {
//        dp[i] = max(dp[i], dp[i-1]);
//        if (i + t[i] - 1 <= n) dp[i+t[i]] = max(dp[i+t[i]], dp[i]+p[i]);
//    }
//    cout << dp[n+1];
//}