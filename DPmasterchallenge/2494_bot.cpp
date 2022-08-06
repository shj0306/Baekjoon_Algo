//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//int N, start[10001], fin[10001];
//int dp[10001][10][2];
//string init, final;
//
//void solve() {
//    dp[0][0][0] = 0;
//
//    for (int nth = 0; nth < N; nth++) {
//        for (int lt = 0; lt < 10; lt++)  {
//            if (dp[nth][lt][0] == INF) continue;
//            int curr = (start[nth] + lt) % 10;
//
//            int left = (fin[nth] - curr + 10) % 10;
//            int right = (curr - fin[nth] + 10) % 10;
//
//            if (dp[nth+1][(lt + left) % 10][0] > dp[nth][lt][0] + left) {
//                dp[nth+1][(lt + left) % 10][0] = dp[nth][lt][0] + left;
//                dp[nth+1][(lt + left) % 10][1] = lt;
//            }
//            if (dp[nth+1][lt][0] > dp[nth][lt][0] + right) {
//                dp[nth+1][lt][0] = dp[nth][lt][0] + right;
//                dp[nth+1][lt][1] = lt;
//            }
//        }
//    }
//}
//
//void trackAnswer(int nth, int leftTurn)
//{
//    if (nth == 0) return;
//
//    trackAnswer(nth - 1, dp[nth][leftTurn][1]);
//
//    if (leftTurn != dp[nth][leftTurn][1])
//        cout << nth << ' ' << (dp[nth][leftTurn][0] - dp[nth - 1][dp[nth][leftTurn][1]][0]) << '\n';
//    else
//        cout << nth << ' ' << -(dp[nth][leftTurn][0] - dp[nth - 1][dp[nth][leftTurn][1]][0]) << '\n';
//
//}
//
//int main() {
//    fast_io;
//    cin >> N >> init >> final;
//
//    for (int i = 0; i < N; i++) {
//        start[i] = (init[i] - '0');
//        fin[i] = (final[i] - '0');
//    }
//
//    for (int i = 0; i <= N; i++) {
//        for (int j = 0; j < 10; j++) {
//            dp[i][j][0] = INF;
//            dp[i][j][1] = INF;
//        }
//    }
//
//    solve();
//
//    int idx = 0;
//    for (int i = 1; i < 10; i++) {
//        if (dp[N][idx][0] > dp[N][i][0]) idx = i;
//    }
//
//    cout << dp[N][idx][0] << '\n';
//    trackAnswer(N, idx);
//}