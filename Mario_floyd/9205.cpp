//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, N, dist[103][103];
//vector<pii> adj;
//
//bool check_dist(int i, int j) {
//    int diff = abs(adj[i].first - adj[j].first)
//            + abs(adj[i].second - adj[j].second);
//    return diff <= 1000;
//}
//
//bool floyd() {
//    for (int k = 1; k <= N+2; k++) {
//        for (int i = 1; i <= N+2; i++) {
//            for (int j = 1; j <= N+2; j++) {
//                if (dist[i][j]) continue;
//                dist[i][j] = dist[i][k] && dist[k][j];
//            }
//        }
//    }
//    return dist[1][N+2];
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N;
//        adj.resize(N+3);
//
//        for (int i = 1; i <= N + 2; i++) {
//            int x, y; cin >> x >> y;
//            adj[i].first = x;
//            adj[i].second = y;
//        }
//
//        for (int i = 1; i <= N + 2; i++) {
//            for (int j = 1; j <= N + 2; j++) {
//                if (i == j) dist[i][j] = 1;
//                else dist[i][j] = 0;
//            }
//        }
//
//        for (int i = 1; i <= N + 2; i++) {
//            for (int j = 1; j <= N + 2; j++) {
//                if (i == j) continue;
//                if (check_dist(i, j)) dist[i][j] = 1;
//            }
//        }
//
//        if (floyd()) cout << "happy" << '\n';
//        else cout << "sad" << '\n';
//    }
//}