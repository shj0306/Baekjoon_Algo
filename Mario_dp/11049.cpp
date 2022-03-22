//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int INF = 1e9;
//int n, dp[501][501];
//vector<pii> V;
//
//int solve(int s, int e) {
//
//    if (s == e) return 0;
//    int &ret = dp[s][e];
//    if (ret != 0) return ret;
//    if (e == s + 1) {//한 칸 차이면
//        ret = V[s].first * V[s].second * V[e].second;
//        return ret;
//    }
//    ret = INF;
//    for (int i = s; i < e; i++) {
//        ret = min(ret, solve(s, i) + solve(i+1, e)
//        + V[s].first * V[i].second * V[e].second);
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    V.resize(n+1);
//    for (int i = 1; i <= n; i++) cin >> V[i].first >> V[i].second;
//    cout << solve(1,n);
//}