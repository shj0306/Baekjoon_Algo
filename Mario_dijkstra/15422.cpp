//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pli = pair<long long, int>;
//using ll = long long;
//int N, M, F, S, T;
//const ll INF = 1e10;
//const int MAX = 50001;
//ll dist1[MAX], dist2[MAX];
////N : 도시 수, M : 도로 수, F : 비행편 수, S: 여행 시작 도시, T : 목적지
//bool visited[MAX];
//vector<vector<pii>> adj;
//
//void dijkstra(int s, ll dist[]) {
//    priority_queue<pli, vector<pli>, greater<>> pq;
//    pq.push({0,s});
//    memset(visited,false,sizeof(visited));
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
//        for (auto [nxt, c] : adj[cur]) {
//            if (dist[nxt] > dist[cur] + c) {
//                dist[nxt] = dist[cur] + c;
//                pq.push({dist[nxt], nxt});
//            }
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M >> F >> S >> T;
//
//    fill(dist1,dist1+N, INF);
//    fill(dist2,dist2+N, INF);
//    dist1[S] = dist2[T] = 0;
//    adj.resize(N);
//    for (int i = 0; i < M; i++) {
//        int u, v, w;
//        cin >> u >> v >> w;
//        adj[u].emplace_back(v,w);
//        adj[v].emplace_back(u,w);
//    }
//
//    dijkstra(S, dist1);
//    dijkstra(T, dist2);
//
//    ll res = dist1[T]; //S -> T
//
//
//    for (int i = 0; i < F; i++) {
//        int u, v; cin >> u >> v;
//        res = min(res, dist1[u] + dist2[v]);
//    }
//    cout << res;
//}