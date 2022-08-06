//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//ll dp[100][2];
//
//ll solve(int idx, int prev) {
//    if (idx == N) return 1;
//    ll &ret = dp[idx][prev];
//    if (ret != 0) return ret;
//    ret += solve(idx+1, 0);
//    if (prev != 1) ret += solve(idx+1, 1);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    cout << solve(1, 1) << '\n';
//}