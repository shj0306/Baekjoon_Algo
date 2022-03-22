//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//int T, N, M, K, dist[101][10001];
//vector<vector<pair<int, pii>>> adj;
//
//int dijkstra() {
//    priority_queue<pair<int, pii>, vector<pair<int, pii>>, greater<>> pq;
//    memset(dist,-1,sizeof(dist));
//    pq.push({0, {1,M}});
//
//    dist[1][M] = 0;
//
//    while(!pq.empty()) {
//        int time = pq.top().first;
//        auto [cur, bal] = pq.top().second;
//        pq.pop();
//
//        if (time > dist[cur][bal]) continue;
//
//        for (int i = 0; i < adj[cur].size(); i++) {
//            int nxt = adj[cur][i].first;
//            auto [c, t] = adj[cur][i].second;
//
//            if (bal >= c) { //현재남은 돈이 비행기값보다 같거나 크다면
//                if (dist[nxt][bal-c] == -1 || dist[nxt][bal-c] > dist[cur][bal] + t) {
//                    dist[nxt][bal-c] = dist[cur][bal] + t;
//                    pq.push({dist[nxt][bal-c], {nxt, bal-c}});
//                }
//            }
//        }
//    }
//    int res = INF;
//    for (int i = 0; i <= M; i++)
//        if (dist[N][i] != -1) res = min(res, dist[N][i]);
//
//    return res;
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N >> M >> K;
//        adj.resize(N+1);
//
//        for (int i = 0; i < K; i++) {
//            int u, v, c, d;
//            cin >> u >> v >> c >> d;
//            adj[u].emplace_back(v, make_pair(c,d));
//        }
//
//        int res = dijkstra();
//        if (res == INF) cout << "Poor KCM" << '\n';
//        else cout << res << '\n';
//        adj.clear();
//    }
//}