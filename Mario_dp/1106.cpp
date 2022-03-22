//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int INF = 1e9;
//int c, n;
//vector<pii> v;
//int dp[1001];
//
//int solve(int cnt) {
//    if (cnt <= 0) return 0;
//    int &ret = dp[cnt];
//    if (ret != -1) return ret;
//    ret = INF;
//    for (int i = 0; i < n; i++) {
//        auto [pay, man] = v[i];
//        ret = min(ret, solve(cnt-man) + pay);
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> c >> n;
//    for (int i = 0; i < n; i++) {
//        int cost, g;
//        cin >> cost >> g;
//        v.emplace_back(cost,g);
//    }
//    memset(dp, -1, sizeof(dp));
//    cout << solve(c);
//}