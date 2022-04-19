//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const long long INF = 1e18;
//const int MAX = 101;
//struct INFO {
//    int dist;
//    int speed;
//};
//vector<INFO> horse;
//long long dist[MAX][MAX];
//double dp[MAX][MAX];
//bool visited[MAX][MAX];
//int T, N, Q, S, D;
//
//double solve(int cur, int hor, bool is_first) {
//    if (cur == D) return 0;
//    if (dp[cur][hor] != INF) return dp[cur][hor];
//    for (int i = 1; i <= N; i++) {
//        if (dist[cur][i] != INF && !visited[cur][i]) {
//            visited[cur][i] = true;
//            if (is_first) {
//                if (horse[hor].dist >= dist[cur][i]) {
//                    horse[hor].dist -= dist[cur][i];
//                    double time = 1.0 * dist[cur][i] / horse[hor].speed;
//                    dp[cur][hor] = min(dp[cur][hor], solve(i, hor, false) + time);
//                    horse[hor].dist += dist[cur][i];
//                }
//            }else {
//                double time1 = 1.0 * dist[cur][i] / horse[hor].speed;
//                double time2 = 1.0 * dist[cur][i] / horse[cur].speed;
//                if (horse[hor].dist >= dist[cur][i]) {
//
//                    if (horse[cur].dist >= dist[cur][i]) {
//                        horse[hor].dist -= dist[cur][i];
//                        horse[cur].dist -= dist[cur][i];
//                        dp[cur][hor] = min(dp[cur][hor], min(solve(i, hor, false) + time1, solve(i, cur, false) + time2));
//                        horse[hor].dist += dist[cur][i];
//                        horse[cur].dist += dist[cur][i];
//                    }
//                    else {
//                        horse[hor].dist -= dist[cur][i];
//                        dp[cur][hor] = min(dp[cur][hor], solve(i, hor, false) + time1);
//                        horse[hor].dist += dist[cur][i];
//                    }
//                }else if (horse[cur].dist >= dist[cur][i]) {
//                    horse[cur].dist -= dist[cur][i];
//                    dp[cur][hor] = min(dp[cur][hor], solve(i, cur, false) + time2);
//                    horse[cur].dist += dist[cur][i];
//                }
//            }
//            visited[cur][i] = false;
//        }
//    }
//    return dp[cur][hor];
//}
//
//int main() {
//    cin >> T;
//
//    for (int t = 1; t <= T; t++) {
//        cin >> N >> Q;
//        horse = vector<INFO> (N+1);
//
//        for (int i = 1; i <= N; i++) cin >> horse[i].dist >> horse[i].speed;
//
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                int d; cin >> d;
//                if (d == -1) dist[i][j] = INF;
//                else dist[i][j] = d;
//            }
//        }
//
//        for (int q = 0; q < Q; q++) {
//            for (int i = 1; i <= N; i++) fill(dp[i]+1, dp[i]+1+N, INF);
//            cin >> S >> D;
//            if (!q) cout << "Case #" << t << ": ";
//            printf("%.7f ", solve(S, S, true));
//        }
//        cout << '\n';
//    }
//}