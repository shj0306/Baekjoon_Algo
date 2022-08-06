#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using pli = pair<long long, int>;
using ll = long long;
const ll INF = 1e12;
int N, M, K, u, v, t, visited[10001][21];
ll dist[10001][21], ans = INF;
vector<vector<pii>> adj;

struct Info {
    ll time;
    int node;
    int k;
};

struct CMP {
    bool operator() (Info &a, Info &b) {
        return a.time > b.time;
    }
};

void init() {
    for (int i = 1; i <= N; i++) {
        fill(dist[i], dist[i]+K+1, INF);
    }
}

void dijkstra() {
    init();
    dist[1][K] = 0;
    priority_queue<Info, vector<Info>, CMP> pq;
    pq.push({dist[1][K], 1, K});

    while(!pq.empty()) {
        int cur, k;
        do {
            cur = pq.top().node;
            k = pq.top().k;
            pq.pop();
        }while(!pq.empty() && visited[cur][k]);

        if (visited[cur][k]) break;
        visited[cur][k] = true;

        for (auto [nxt, time] : adj[cur]) {

            if (dist[nxt][k] > dist[cur][k] + time) {
                dist[nxt][k] = dist[cur][k] + time;
                pq.push({dist[nxt][k], nxt, k});
            }
            if (k) { //해당 도로를 포장할 수 있는 경우
                if (dist[nxt][k-1] > dist[cur][k]) {
                    dist[nxt][k-1] = dist[cur][k];
                    pq.push({dist[nxt][k-1], nxt, k-1});
                }
            }
        }
    }
}

int main() {
    fast_io;
    cin >> N >> M >> K;
    adj.resize(N+1);

    for (int i = 1; i <= M; i++) {
        cin >> u >> v >> t;

        adj[u].emplace_back(v,t);
        adj[v].emplace_back(u,t);
    }

    dijkstra();

    for (int i = 0; i <= K; i++)
        ans = min(ans, dist[N][i]);
    cout << ans;
}