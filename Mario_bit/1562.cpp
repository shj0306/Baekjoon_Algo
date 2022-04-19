//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MOD = 1e9;
//int N;
//long long dp[101][10][1 << 10];
//
//long long solve(int cur, int prev, int state) {
//    if (prev < 0 || prev > 9) return 0;
//    long long &ret = dp[cur][prev][state];
//    if (ret != 0) return ret;
//    if (cur == N) return state == (1 << 10) - 1 ? 1 : 0;
//    ret = solve(cur + 1, prev - 1, state | 1 << (prev - 1))
//          + solve(cur + 1, prev + 1, state | 1 << (prev + 1));
//    return ret %= MOD;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    long long ans = 0;
//    memset(dp, 0, sizeof(dp));
//    for (int j = 1; j <= 9; j++) {
//        ans += solve(1, j, 1 << j);
//        ans %= MOD;
//    }
//    cout << ans << '\n';
//}