//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//int T,N, sticker[3][MAX], dp[MAX][3];
//
//int solve(int idx, int prev) {
//    if (idx == N+1) return 0;
//    int &ret = dp[idx][prev];
//    if (ret != -1) return ret;
//
//    ret = solve(idx+1, 0);
//    if (prev != 1) ret = max(ret, solve(idx+1, 1) + sticker[1][idx]);
//    if (prev != 2) ret = max(ret, solve(idx+1, 2) + sticker[2][idx]);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//
//    while(T--) {
//        cin >> N;
//        memset(dp, -1, sizeof(dp));
//        for (int i = 1; i <= 2; i++) {
//            for (int j = 1; j <= N; j++) {
//                cin >> sticker[i][j];
//            }
//        }
//
//        cout << solve(1, 0) << '\n';
//    }
//}