//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int n, m;
//int dp[2001][2001];
//vector<int> v;
//
//int solve(int s, int e) {
//    if (s >= e) return 1;
//    int &ret = dp[s][e];
//    if (ret != -1) return ret;
//    if (v[s] == v[e]) ret = solve(s+1, e-1);
//    else ret = 0;
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    v.resize(n+1);
//    for (int i = 1; i <= n; i++) cin >> v[i];
//
//    memset(dp,-1,sizeof(dp));
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = i; j <= n; j++) {
//            if (i == j) dp[i][j] = 1;
//            else solve(i,j);
//        }
//    }
//
//    cin >> m;
//    for (int i = 1; i <= m; i++) {
//        int s, e;
//        cin >> s >> e;
//        cout << dp[s][e] << '\n';
//    }
//}