//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 100000;
//int N, M, dist[1001], Prev[1001];
//bool visited[1001];
//vector<vector<pii>> adj;
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    adj.resize(N+1);
//    fill(dist, dist+N+1, INF);
//    dist[1] = 0;
//
//    for (int i = 0; i < M; i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        adj[a].emplace_back(b,c);
//        adj[b].emplace_back(a,c);
//    }
//
//    priority_queue<pii, vector<pii>, greater<>> pq;
//
//    pq.push({0,1});
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
//                Prev[nxt] = cur;
//                pq.push({dist[nxt], nxt});
//            }
//        }
//    }
//
//    int k = 0;
//    vector<pii> res;
//    for (int i = 2; i <= N; i++) {
//        if (dist[i] != INF) {
//            k++;
//            res.emplace_back(Prev[i], i);
//        }
//    }
//    cout << k << '\n';
//    for (auto [u, v] : res) cout << u << ' ' << v << '\n';
//}