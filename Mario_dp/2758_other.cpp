//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
//ll dp[11][2001];
//int n, m;
//ll solve(int cnt, int cur) {
//    if (cur <= 0) return 0;
//    ll &ret = dp[cnt][cur];
//    if (ret != -1) return ret;
//    ret = 0;
//    ret += solve(cnt, cur-1);
//    ret += solve(cnt-1, cur / 2);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    int t; cin >> t;
//    memset(dp,-1,sizeof(dp));
//    for (int i = 1; i <= 2000; i++) dp[1][i] = i;
//    while(t--) {
//        cin >> n >> m;
//        cout << solve(n, m) << '\n';
//    }
//}
///*
// * 이전에 고른 수보다 2배
// */