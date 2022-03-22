//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//int N, M, S, E, dist[500];
//bool visited[500];
//bool cut[500][500];
//
//vector<vector<pii>> adj;
//vector<vector<int>> pre; //경로 저장
//
//void dijkstra() {
//    fill(dist,dist+N, INF);
//    dist[S] = 0;
//    priority_queue<pii, vector<pii>, greater<>> pq;
//    memset(visited, false, sizeof(visited));
//    pq.push({0,S});
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
//        for (auto[nxt, w] : adj[cur]) {
//            if (cut[cur][nxt]) continue;
//            if (dist[nxt] > dist[cur] + w) {
//                dist[nxt] = dist[cur] + w;
//                if (!pre[nxt].empty()) pre[nxt].clear();
//                pre[nxt].push_back(cur);
//                pq.push({dist[nxt], nxt});
//            }else if (dist[nxt] == dist[cur] + w) {
//                pre[nxt].push_back(cur);
//            }
//        }
//    }
//}
//
////최단경로에 포함되는 간선 제거
//void remove_edge(int e) {
//    if (e == S) return;
//    for (auto nxt : pre[e]) {
//        if (cut[nxt][e]) continue;
//        cut[nxt][e] = true; //nxt->e 간선 삭제
//        remove_edge(nxt);
//    }
//}
//int main() {
//    fast_io;
//    while(true) {
//        cin >> N >> M;
//        adj.resize(N);
//        pre.resize(N);
//        if (N == 0 && M == 0) break;
//        cin >> S >> E;
//        for (int i = 0; i < M; i++) {
//            int u, v, w;
//            cin >> u >> v >> w;
//            adj[u].emplace_back(v,w);
//        }
//
//        memset(cut, false, sizeof(cut));
//        dijkstra();
//        remove_edge(E);
//        dijkstra();
//
//        if (dist[E] >= INF) cout << -1 << '\n';
//        else cout << dist[E] << '\n';
//        adj.clear();
//        pre.clear();
//    }
//}