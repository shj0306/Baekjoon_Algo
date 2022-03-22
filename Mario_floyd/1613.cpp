//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int INF = 1e9;
//int dist[401][401];
//
//int main() {
//    fast_io;
//    int n, k, s;
//    int u, v;
//    cin >> n >> k;
//    for (int i = 1; i <= n; i++) fill(dist[i]+1, dist[i]+n+1, INF);
//    for (int i = 0; i < k; i++) {
//        cin >> u >> v;
//        dist[u][v] = 1;
//    }
//
//    for (int kk = 1; kk <= n; kk++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                dist[i][j] = min(dist[i][j], dist[i][kk] + dist[kk][j]);
//            }
//        }
//    }
//    cin >> s;
//    for (int i = 0; i < s; i++) {
//        cin >> u >> v;
//        if (dist[u][v] != INF) cout << -1 <<'\n';
//        else if (dist[v][u] != INF) cout << 1 << '\n';
//        else cout << 0 << '\n';
//    }
//}
