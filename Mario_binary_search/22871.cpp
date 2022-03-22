//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
//const int MAX = 5000;
//const ll INF = 1e10;
//int N;
//vector<ll> A; ll dp[MAX];
//ll solve(int idx) { //idx~N까지 갈 때 드는 최소 힘의 크기
//    if (idx == N-1) return 0;
//    ll &ret = dp[idx];
//    if (ret != -1) return ret;
//    ret = INF;
//    for (int i = idx+1; i < N; i++)
//        ret = min(ret, max((i - idx) * (1 + abs(A[idx] - A[i])), solve(i)));
//    return ret;
//}
//
//int main() {
//    fast_io;
//    memset(dp, -1, sizeof(dp));
//    cin >> N;
//    A = vector<ll>(N);
//    for (int i = 0; i < N; i++) cin >> A[i];
//    cout << solve(0) << '\n';
//}