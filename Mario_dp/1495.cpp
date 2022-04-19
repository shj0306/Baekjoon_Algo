//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MIN = -987654321;
//int N, S, M, music[51], dp[51][1001];
//
//int solve(int idx, int vol) {
//    if (idx == N+1) return vol;
//
//    int &ret = dp[idx][vol];
//    if (ret != -1) return ret;
//
//    ret = MIN;
//    if (vol + music[idx] <= M) ret = max(ret, solve(idx+1, vol + music[idx]));
//    if (vol - music[idx] >= 0) ret = max(ret, solve(idx+1, vol - music[idx]));
//
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> S >> M;
//
//    for (int i = 1; i <= N; i++) cin >> music[i];
//    memset(dp, -1, sizeof(dp));
//
//    int res = solve(1, S);
//    cout << (res == MIN ? -1 : res) << '\n';
//}