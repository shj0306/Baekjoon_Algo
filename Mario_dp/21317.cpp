//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//const int INF = 1e9;
//int n, k;
//vector<pii> rock;
//int dp[20][2];
//
//int solve(int idx, int cnt) {
//    if (idx == n) return 0;
//    int &ret = dp[idx][cnt];
//    if (ret != -1) return ret;
//    ret = INF;
//    auto[jump, big_jump] = rock[idx];
//    ret = min(ret, solve(idx + 1, cnt) + jump);
//    if (idx < n - 1) ret = min(ret, solve(idx + 2, cnt) + big_jump);
//    if (idx < n - 2 && cnt == 0) ret = min(ret, solve(idx+3, 1) + k);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    rock = vector<pii>(n+1);
//    for (int i = 1; i <= n - 1; i++) cin >> rock[i].first >> rock[i].second;
//    cin >> k;
//    memset(dp, -1, sizeof(dp));
//    cout << solve(1, 0);
//}