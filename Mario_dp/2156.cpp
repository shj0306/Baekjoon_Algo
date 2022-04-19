//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, wine[10001], dp[10001];
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) cin >> wine[i];
//
//    dp[1] = wine[1];
//    dp[2] = wine[1] + wine[2];
//
//    for (int i = 3; i <= N; i++) {
//        dp[i] = max(dp[i], dp[i-1]);
//        dp[i] = max(dp[i], max(dp[i-3] + wine[i-1] + wine[i], dp[i-2] + wine[i]));
//    }
//    cout << dp[N];
//}