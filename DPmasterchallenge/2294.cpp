//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e5;
//int N, K, coin[100];
//int dp[10001];
//
//int solve(int money) {
//    if (money == 0) return 0;
//    int &ret = dp[money];
//    if (ret != -1) return ret;
//
//    ret = INF;
//    for (int i = 0; i < N; i++) {
//        if (money >= coin[i]) ret = min(ret, solve(money-coin[i]) + 1);
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    for (int i = 0; i < N; i++) cin >> coin[i];
//    memset(dp, -1, sizeof(dp));
//    int res = solve(K);
//    cout << (res == INF ? -1 : res) << '\n';
//}