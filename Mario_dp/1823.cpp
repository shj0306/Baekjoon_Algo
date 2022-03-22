//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int MAX = 2001;
//
//int n, dp[MAX][MAX];
//vector<int> v;
//
//int solve(int st, int en) {
//    if (st == en) return v[st] * n;
//    int &ret = dp[st][en];
//    if (ret != 0) return ret;
//    int cnt = (st - 1) + (n - en) + 1;
//    ret = max(ret, max(solve(st+1, en) + v[st] * cnt , solve(st, en-1) + v[en] * cnt));
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    v.resize(n+1);
//    for (int i = 1; i <= n; i++) cin >> v[i];
//
//    cout << solve(1, n);
//}