//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 101;
//int N, M, K, dist[101][101];
//bool visited[101];
//vector<int> candi[101], ans;
//
//void floyd() {
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//            }
//        }
//    }
//}
//
//void dfs(int idx) {
//    visited[idx] = true;
//    candi[K].push_back(idx);
//    for (int i = 1; i <= N; i++) {
//        if (dist[idx][i] == 1 && !visited[i]) dfs(i);
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            if (i == j) dist[i][j] = 0;
//            else dist[i][j] = INF;
//        }
//    }
//
//    for (int i = 0; i < M; i++) {
//        int u, v;
//        cin >> u >> v;
//        dist[u][v] = 1;
//        dist[v][u] = 1;
//    }
//
//    floyd();
//    for (int i = 1; i <= N; i++) {
//        if (!visited[i]) {
//            K++;
//            dfs(i);
//        }
//    }
//    cout << K << '\n';
//
//
//    for (int i = 1; i <= K; i++) {
//        int res, rep = 0;
//        for (int ii = 0; ii < candi[i].size(); ii++) {
//            int man1 = candi[i][ii], max_dist = 0;
//            for (int man2 = 1; man2 <= N; man2++) {
//                if (man1 == man2 || dist[man1][man2] == INF) continue;
//                max_dist = max(max_dist, dist[man1][man2]);
//            }
//            if (ii == 0) {
//                res = max_dist;
//                rep = man1;
//            }else if (res > max_dist) {
//                res = max_dist;
//                rep = man1;
//            }
//        }
//        ans.push_back(rep);
//    }
//    sort(all(ans));
//    for (auto val : ans) cout << val << '\n';
//}