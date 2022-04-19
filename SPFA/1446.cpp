//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//const int MAX = 10001;
//int N, D, dist[MAX];
//vector<vector<pii>> adj;
//
//int main() {
//    fast_io;
//    cin >> N >> D;
//    adj = vector<vector<pii>>(D + 1);
//    vector<int> src, des;
//
//    for (int i = 0; i < N; i++) {
//        int u, v, w;
//        cin >> u >> v >> w;
//        if (v > D || v - u <= w) continue;
//        adj[u].emplace_back(v, w);
//    }
//
//    for (int i = 0; i <= D; i++) dist[i] = i;
//
//    int before = 0;
//    for (int i = 0; i <= D; i++) {
//        if (i) before = dist[i - 1];
//        dist[i] = min(dist[i], before + 1);
//        for (auto [nxt, cost] : adj[i]) {
//            if (nxt > D) continue;
//            if (dist[nxt] > dist[i] + cost) {
//                dist[nxt] = dist[i] + cost;
//            }
//        }
//    }
//    cout << dist[D];
//}