//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//int N, M, s, e, dist[1001];
//vector<vector<pii>> adj;
//bool visited[1001];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    adj.resize(N+1);
//    for (int i = 1; i <= M; i++) {
//        int u, v, w;
//        cin >> u >> v >> w;
//
//        adj[u].emplace_back(v,w);
//    }
//
//    cin >> s >> e;
//
//    fill(dist, dist+N+1, INF);
//    dist[s] = 0;
//    priority_queue<pii, vector<pii>, greater<>> pq;
//    pq.push({0,s});
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
//        for (auto [nxt, cost] : adj[cur]) {
//            if (dist[nxt] > dist[cur] + cost) {
//                dist[nxt] = dist[cur] + cost;
//                pq.push({dist[nxt], nxt});
//            }
//        }
//    }
//
//    cout << dist[e] << '\n';
//}