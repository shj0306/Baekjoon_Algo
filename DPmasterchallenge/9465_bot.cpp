//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//int dp[2][100001];
//int sticker[2][100001];
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    while(T--) {
//        cin >> N;
//        for (int i = 0; i < 2; i++) {
//            for (int j = 1; j <= N; j++) {
//                cin >> sticker[i][j];
//            }
//        }
//
//        dp[0][0] = dp[1][0] = 0;
//        dp[0][1] = sticker[0][1];
//        dp[1][1] = sticker[1][1];
//        for (int col = 2; col <= N; col++) {
//            dp[0][col] = max(dp[1][col-1], dp[1][col-2]) + sticker[0][col];
//            dp[1][col] = max(dp[0][col-1], dp[0][col-2]) + sticker[1][col];
//        }
//        cout << max(dp[0][N], dp[1][N]) << '\n';
//    }
//}