//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//int dp[100001][3];
//int sticker[3][100100];
//
//int solve(int col, int prev) {
//
//    if (col == N+1) return 0;
//    int &ret = dp[col][prev];
//    if (ret != -1) return ret;
//
//    ret = solve(col+1, 0);
//    if (prev != 1) ret = max(ret, solve(col+1, 1) + sticker[1][col]);
//    if (prev != 2) ret = max(ret, solve(col+1, 2) + sticker[2][col]);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    while(T--) {
//        cin >> N;
//        memset(dp,-1,sizeof(dp));
//        for (int i = 1; i <= 2; i++) {
//            for (int j = 1; j <= N; j++) {
//                cin >> sticker[i][j];
//            }
//        }
//        cout << solve(1, 0) << '\n';
//    }
//}