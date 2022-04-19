//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//
//const int MAX = 501;
//int N, M;
//int adj[MAX][MAX];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> adj[i][j];
//        }
//    }
//
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j<= N; j++) {
//                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
//            }
//        }
//    }
//
//    for (int i = 1; i <= M; i++) {
//        int src, des, time;
//        cin >> src >> des >> time;
//        if (adj[src][des] > time) cout << "Stay here" << '\n';
//        else cout << "Enjoy other party" << '\n';
//    }
//}