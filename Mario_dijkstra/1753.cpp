//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 20001;
//const int INF = 1e7;
//int V, E, k, dist[MAX];
//bool visited[MAX];
//vector<vector<pii>> graph;
//
//int main() {
//    fast_io;
//    cin >> V >> E >> k;
//    graph.resize(V+1);
//    for (int i = 1; i <= E; i++) {
//        int u, v, w;
//        cin >> u >> v >> w;
//        graph[u].emplace_back(v,w);
//    }
//
//    fill(dist, dist+V+1, INF);
//    dist[k] = 0;
//
//    priority_queue<pii, vector<pii>, greater<>> pq;
//    pq.push({0,k});
//
//    while(!pq.empty()) {
//        int cur;
//        do {
//            cur = pq.top().second;
//            pq.pop();
//        }while(!pq.empty() && visited[cur]);
//
//        if (visited[cur]) break;
//        visited[cur] = true;
//
//        for (auto [nxt, cost] : graph[cur]) {
//            if (dist[nxt] > dist[cur] + cost) {
//                dist[nxt] = dist[cur] + cost;
//                pq.push({dist[nxt], nxt});
//            }
//        }
//    }
//
//    for (int i = 1; i <= V; i++) {
//        if (dist[i] == INF) cout << "INF" << '\n';
//        else cout << dist[i] << '\n';
//    }
//}