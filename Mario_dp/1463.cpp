//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 1e6+1;
//const int INF = 1e9;
//int dp[MAX];
//
//int solve(int x) {
//    if (x == 1) return 0;
//    if (dp[x] != INF) return dp[x];
//
//    if (x % 3 == 0) dp[x] = min(dp[x], solve(x/3) + 1);
//    if (x % 2 == 0) dp[x] = min(dp[x], solve(x/2) + 1);
//    dp[x] = min(dp[x], solve(x-1) + 1);
//    return dp[x];
//}
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    fill(dp, dp + N + 1, INF);
//    cout << solve(N);
//}