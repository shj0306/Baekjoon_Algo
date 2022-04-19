//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MOD = 1e4+7;
//int N, dp[1001];
//
//int solve(int idx) {
//    if (idx == N+1) return 1;
//    int &ret = dp[idx];
//    if (ret != -1) return ret;
//    ret = 0;
//    ret += solve(idx+1) % MOD;
//    if (idx <= N - 1) ret += solve(idx+2) % MOD;
//
//    return ret % MOD;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    memset(dp,-1,sizeof(dp));
//    cout << solve(1);
//}