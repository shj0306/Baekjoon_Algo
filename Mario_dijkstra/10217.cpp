#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;

int T, N, M, K, u, v, c, d, dist[101][10001];
struct Info {
    int nxt;
    int C;
    int D;
};

struct Info2 {
    int time;
    int city;
    int cost;
};

struct CMP {
    bool operator() (Info2 &a, Info2 &b) {
        return a.time > b.time;
    }
};

vector<vector<Info>> adj;

void init() {
    adj.resize(N+1);
    for (int i = 1; i <= N; i++) {
        fill(dist[i], dist[i]+M+1, INF);
    }
}

void dijkstra() {
    priority_queue<Info2, vector<Info2>, CMP> pq;
    dist[1][M] = 0;
    pq.push({dist[1][M], 1, M});

    while(!pq.empty()) {
        auto [time, cur, cost] = pq.top();
        pq.pop();

        if (dist[cur][cost] < time) continue;

        for (auto [nxt, C, D] : adj[cur]) {
            if (cost >= C) {
                if (dist[nxt][cost-C] > dist[cur][cost] + D) {
                    dist[nxt][cost-C] = dist[cur][cost] + D;
                    pq.push({dist[nxt][cost-C], nxt, cost-C});
                }
            }
        }
    }
}

int main() {
    fast_io;
    cin >> T;
    while(T--) {
        cin >> N >> M >> K;
        init();

        for (int i = 1; i <= K; i++) {
            cin >> u >> v >> c >> d;
            adj[u].push_back({v,c,d});
        }

        dijkstra();
        int ans = INF;
        for (int i = 0; i <= M; i++)
            ans = min(ans, dist[N][i]);

        if (ans == INF) cout << "Poor KCM" << '\n';
        else cout << ans << '\n';
        adj.clear();
    }
}