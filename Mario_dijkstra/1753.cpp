#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 4e6;
const int MAX = 20001;
int V, E, K, u, v, w, dist[MAX], visited[MAX];
vector<vector<pii>> adj;

int main() {
    fast_io;
    cin >> V >> E >> K;
    adj.resize(V+1);
    fill(dist, dist+V+1, INF);
    dist[K] = 0;

    for (int i = 1; i <= E; i++) {
        cin >> u >> v >> w;

        adj[u].emplace_back(v,w);
    }

    priority_queue<pii, vector<pii>, greater<>> pq;
    pq.push({dist[K], K});

    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur]);

        if (visited[cur]) break;
        visited[cur] = true;

        for (auto [nxt, cost] : adj[cur]) {
            if (dist[nxt] > dist[cur] + cost) {
                dist[nxt] = dist[cur] + cost;
                pq.push({dist[nxt], nxt});
            }
        }
    }

    for (int i = 1; i <= V; i++) {
        if (dist[i] == INF) cout << "INF" << '\n';
        else cout << dist[i] << '\n';
    }
}