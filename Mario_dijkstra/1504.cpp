//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//
//const int MAX = 801;
//const int INF = 1e9;
//int N, E, dist[MAX];
//bool visited[MAX];
//vector<vector<pii>> adj;
//
//int dijkstra(int s, int e) {
//    fill(dist+1, dist+1+N, INF);
//    dist[s] = 0;
//    priority_queue<pii, vector<pii>, greater<>> pq;
//    pq.push({0, s});
//    memset(visited, false, sizeof(visited));
//
//    while (!pq.empty()) {
//        int cur;
//        do {
//            cur = pq.top().second;
//            pq.pop();
//        }while(!pq.empty() && visited[cur]);
//        if (visited[cur]) break;
//        visited[cur] = true;
//
//        for (auto[nxt, w]: adj[cur]) {
//            if (dist[nxt] > dist[cur] + w) {
//                dist[nxt] = dist[cur] + w;
//                pq.push({dist[nxt], nxt});
//            }
//        }
//    }
//    return dist[e];
//}
//
//int main() {
//    fast_io;
//    cin >> N >> E;
//    adj.resize(N + 1);
//
//    for (int i = 0; i < E; i++) {
//        int u, v, w;
//        cin >> u >> v >> w;
//        adj[u].emplace_back(v, w);
//        adj[v].emplace_back(u, w);
//    }
//
//    int s, e; cin >> s >> e;
//
//    int d1 = dijkstra(1, s);
//    int d2 = dijkstra(s, e);
//    int d3 = dijkstra(e, N);
//
//    int d4 = dijkstra(1,e);
//    int d5 = dijkstra(e,s);
//    int d6 = dijkstra(s, N);
//
//    int res = -1;
//    if (d1 != INF && d2 != INF && d3 != INF) res = d1 + d2 + d3;
//    if (d4 != INF && d5 != INF && d6 != INF) res = min(res, d4+d5+d6);
//
//    cout << res;
//}