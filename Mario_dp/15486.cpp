//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 1500001;
//
//int N, dp[MAX];
//vector<pii> sch;
//
//int solve(int day) {
//    if (day > N) return 0;
//    int &ret = dp[day];
//    if (ret != -1) return ret;
//    auto [time, cost] = sch[day];
//    ret = solve(day+1);
//    if (day + time <= N+1) ret = max(ret, solve(day+time) + cost);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    sch = vector<pii>(N+1);
//    for (int i = 1; i <= N; i++) cin >> sch[i].first >> sch[i].second;
//    memset(dp,-1,sizeof(dp));
//    cout << solve(0);
//}