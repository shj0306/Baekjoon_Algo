//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e7;
//int N;
//int home[1000][3];
//int dp[1000][4];
//int solve(int idx, int prev = 3) {
//    if (idx == N) return 0;
//    int &ret = dp[idx][prev];
//    if (ret != 0) return ret;
//
//    ret = INF;
//    for (int i = 0; i < 3; i++) {
//        if (prev != i)
//            ret = min(ret, solve(idx+1, i) + home[idx][i]);
//    }
//    return ret;
//}
//
//void trackAnswer(int pos, int prev = 3) {
//    if (pos == N) return;
//
//    for (int i = 0; i < 3; i++) {
//        if (prev != i && dp[pos+1][i] + home[pos][i] == dp[pos][prev]) {
//            printf("%dth town color: %d\n", pos+1, i);
//            trackAnswer(pos+1, i);
//            return;
//        }
//    }
//}
//
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < N; i++) cin >> home[i][0] >> home[i][1] >> home[i][2];
//    cout << solve(0) << '\n';
//    trackAnswer(0);
//}