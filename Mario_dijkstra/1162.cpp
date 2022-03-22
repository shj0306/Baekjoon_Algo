//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pli = pair<long long,int>;
//using ll = long long;
//const ll INF = 1e12;
//int N, M, K;
//ll cost[10001][21];
//vector<vector<pii>> adj;
//
//ll dijkstra() {
//    priority_queue<pair<ll, pii>, vector<pair<ll, pii>>, greater<>> pq;
//    //{cost, {node, k}}
//    pq.push({0,{1,K}});
//    cost[1][K] = 0;
//    while(!pq.empty()) {
//        ll money = pq.top().first;
//        auto [cur, k] = pq.top().second;
//        pq.pop();
//
//        if (money > cost[cur][k]) continue;
//
//        for (auto [nxt, w] : adj[cur]) {
//            if (k > 0) {
//                if (cost[nxt][k-1] == -1 || cost[nxt][k-1] > money) {
//                    cost[nxt][k-1] = money;
//                    pq.push({cost[nxt][k-1], make_pair(nxt,k-1)});
//                }
//            }
//            if (cost[nxt][k] == -1 || cost[nxt][k] > money + w) {
//                cost[nxt][k] = money + w;
//                pq.push({cost[nxt][k], make_pair(nxt, k)});
//            }
//        }
//    }
//
//    ll res = cost[N][0];
//    for (int i = 1; i <= K; i++) {
//        if (cost[N][i] == -1) continue;
//        res = min(res, cost[N][i]);
//    }
//    return res;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M >> K;
//    adj.resize(N+1);
//
//    for (int i = 0; i < M; i++) {
//        int u,v,c;
//        cin >> u >> v >> c;
//        adj[u].emplace_back(v,c);
//        adj[v].emplace_back(u,c);
//    }
//    memset(cost,-1,sizeof(cost));
//    cout << dijkstra();
//}