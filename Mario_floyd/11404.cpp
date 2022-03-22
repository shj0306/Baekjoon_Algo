//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e7;
//int N, M, dist[101][101];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++){
//        fill(dist[i]+1, dist[i]+N+1, INF);
//    }
//
//    for (int i = 0; i < M; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        dist[a][b] = min(dist[a][b], c);
//    }
//
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                if (i == j) dist[i][j] = INF;
//                else dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//            }
//        }
//    }
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            if (dist[i][j] == INF) cout << 0 << ' ';
//            else cout << dist[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//}