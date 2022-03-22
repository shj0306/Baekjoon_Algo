//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 20001;
//const int INF = 4e6;
//int V,e,k, dist[MAX];
//bool visited[MAX];
//vector<vector<pii>> adj;
//
//int main() {
//    fast_io;
//    cin >> V >> e >> k;
//    adj.resize(V+1);
//
//    fill(dist, dist+V+1, INF);
//    dist[k] = 0;
//    for (int i = 0; i < e; i++) {
//        int u, v, w; cin >> u >> v >> w;
//        adj[u].emplace_back(v,w);
//    }
//
//    priority_queue<pii, vector<pii>, greater<>> pq;
//
//    pq.push({0, k});
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
//        for (auto [nxt, w] : adj[cur]) {
//            if (dist[nxt] > dist[cur] + w) {
//                dist[nxt] = dist[cur] + w;
//                pq.push({dist[nxt],nxt});
//            }
//        }
//    }
//
//    for (int i = 1; i <= V; i++) {
//        if (dist[i] == INF) cout << "INF" << '\n';
//        else cout << dist[i] << '\n';
//    }
//}