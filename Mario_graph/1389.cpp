//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//int N, M;
//int rel[101][101];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            rel[i][j] = INF;
//        }
//    }
//
//    for (int i = 0; i < M; i++) {
//        int u, v;
//        cin >> u >> v;
//        rel[u][v] = 1;
//        rel[v][u] = 1;
//    }
//
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1;j <= N; j++) {
//                rel[i][j] = min(rel[i][j], rel[i][k] + rel[k][j]);
//            }
//        }
//    }
//
//    int min_kevin = INF;
//    int ans = 0;
//
//    for (int i = 1; i <= N; i++) {
//        int tmp = 0;
//        for (int j = 1; j <= N; j++) {
//            if (i == j) continue;
//            tmp += rel[i][j];
//        }
//        if (min_kevin > tmp) {
//            min_kevin = tmp;
//            ans = i;
//        }
//    }
//    cout << ans << '\n';
//}