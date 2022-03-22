//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//const int INF = 1e9;
//int N, M, cnt, dist[251][251];
//void floyd() {
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                if (i == j) continue;
//                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//            }
//        }
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
//        int u, v, b;
//        cin >> u >> v >> b;
//
//        if (b) { //¾ç¹æÇâ
//            dist[u][v] = 0;
//            dist[v][u] = 0;
//        }else {
//            dist[u][v] = 0;
//            dist[v][u] = 1;
//        }
//    }
//
//    floyd();
//    int K; cin >> K;
//    for (int i = 0; i < K; i++) {
//        int s, e;
//        cin >> s >> e;
//        cout << dist[s][e] << '\n';
//    }
//}