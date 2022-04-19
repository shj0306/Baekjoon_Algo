//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int INF = 1e9;
//int N, M, K, X;
//vector<vector<int>> adj;

//// dijkstra algorithm

//int main() {
//    fast_io;
//    cin >> N >> M >> K >> X;
//    adj = vector<vector<int>>(N+1);
//    for (int i = 0; i < M; i++) {
//        int u, v; cin >> u >> v;
//        adj[u].push_back(v);
//    }
//
//    queue<int> q;
//    vector<int> dist(N+1, INF);
//    dist[X] = 0;
//    q.push(X);
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        for (auto nxt : adj[cur]) {
//            if (dist[nxt] > dist[cur] + 1) {
//                dist[nxt] = dist[cur] + 1;
//                q.push(nxt);
//            }
//        }
//    }
//
//    bool is_possible = false;
//    for (int i = 1; i <= N; i++) {
//        if (dist[i] == K) {
//            cout << i << '\n';
//            is_possible = true;
//        }
//    }
//    if (!is_possible) cout << -1 << '\n';
//}