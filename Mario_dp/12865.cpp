//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 100001;
//int n,k;
//vector<pii> bag;
//int dp[100][MAX];
//
//int solve(int idx, int weight) {
//    if (idx == n || weight == 0) return 0;
//    int &ret = dp[idx][weight];
//    if (ret != -1) return ret;
//
//    auto [w, v] = bag[idx];
//    ret = solve(idx+1, weight);
//    if (weight >= w) ret = max(ret, solve(idx+1, weight - w) + v);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    for (int i = 0; i < n; i++) {
//        int w, v; cin >> w >> v;
//        bag.emplace_back(w,v);
//    }
//    memset(dp,-1,sizeof(dp));
//    cout << solve(0, k);
//}