//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MOD = 10007;
//int n;
//long long dp[1001];
//long long solve(int idx) {
//    if (idx == n) return 1;
//    long long &ret = dp[idx];
//    if (ret != 0) return ret;
//    ret += solve(idx+1) % MOD;
//    if (idx < n-1) ret += (solve(idx+2)*2) % MOD;
//    return ret % MOD;
//}
//int main() {
//    fast_io;
//    cin >> n;
//    memset(dp,0,sizeof(dp));
//    cout << solve(0);
//}