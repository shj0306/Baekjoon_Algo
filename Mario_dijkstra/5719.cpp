#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 501;
const int INF = 1e9;
//https://kimtaehyun98.tistory.com/86 참고
vector<vector<pii>> adj;
vector<vector<int>> trace;
int N, M, S, D, dist[MAX], checked[MAX][MAX], check[MAX];

void find_shortest_path(int start) {
    queue<int> q;
    q.push(start);
    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        if (check[cur]) continue;
        check[cur] = 1;
        for (auto nxt : trace[cur]) {
            for (auto [node, _] : adj[nxt]) {
                if (node == cur) checked[nxt][cur] = 1;
            }
            q.push(nxt);
        }
    }
}

void dijkstra() {
    fill(dist, dist+N, INF);
    dist[S] = 0;
    priority_queue<pii, vector<pii>, greater<>> pq;

    pq.push({dist[S], S});

    while(!pq.empty()) {
        auto [cost, cur] = pq.top();
        pq.pop();

        if (dist[cur] < cost) continue;

        for (auto [nxt, d] : adj[cur]) {
            if (checked[cur][nxt]) continue;
            if (dist[nxt] > dist[cur] + d) {
                dist[nxt] = dist[cur] + d;
                trace[nxt].clear();
                trace[nxt].push_back(cur);
                pq.push({dist[nxt], nxt});
            }else if (dist[nxt] == dist[cur] + d) {
                trace[nxt].push_back(cur);
            }
        }
    }
}

void init() {
    memset(checked, 0, sizeof(checked));
    memset(check, 0, sizeof(check));
}

int main() {
    fast_io;
    while(true) {
        cin >> N >> M;
        if (N == 0 && M == 0) break;
        cin >> S >> D;

        adj.resize(N);
        trace.resize(N);
        init();

        for (int i = 1; i <= M; i++) {
            int u, v, w; cin >> u >> v >> w;
            adj[u].emplace_back(v,w);
        }

        dijkstra();
        find_shortest_path(D);
        dijkstra();

        cout << (dist[D] == INF ? -1 : dist[D]) << '\n';
        adj.clear();
        trace.clear();
    }
}