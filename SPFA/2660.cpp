//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//const int MAX = 51;
//const int INF = 1e9;
//int N; int dist[MAX][MAX];
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 1; i <= N; i++) {
//        fill(dist[i]+1, dist[i]+1+N, INF);
//    }
//    while(true) {
//        int u, v;
//        cin >> u >> v;
//        if (u == -1 && v == -1) break;
//        dist[u][v] = dist[v][u] = 1;
//    }
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                if (i == j) continue;
//                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//            }
//        }
//    }
//
//    int min_val = INF;
//    vector<int> candi;
//    for (int i = 1; i <= N; i++) {
//        int min_tmp = 0;
//        for (int j = 1; j <= N; j++) {
//            if (i == j) continue;
//            min_tmp = max(min_tmp, dist[i][j]);
//        }
//        if (min_val > min_tmp) {
//            min_val = min_tmp;
//            candi.clear();
//            candi.push_back(i);
//        }else if (min_val == min_tmp) candi.push_back(i);
//    }
//
//    cout << min_val << ' ' << candi.size() << '\n';
//    for (auto val : candi) cout << val << ' ';
//}