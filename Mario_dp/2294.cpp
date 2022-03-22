//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int INF = 1e9;
//int n,k,money[101];
//int dp[10001];
//
//int solve(int cost) {
//    if (cost <= 0) return cost < 0 ? INF : 0;
//    int &ret = dp[cost];
//    if (ret != -1) return ret;
//
//    ret = INF;
//    for (int i = 0; i < n; i++) {
//        if (cost >= money[i]) ret = min(ret, solve(cost-money[i])+1);
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    for (int i = 0; i < n; i++) cin >> money[i];
//    memset(dp,-1,sizeof(dp));
//    int ans = solve(k);
//    cout << (ans == INF ? -1 : ans) << '\n';
//}