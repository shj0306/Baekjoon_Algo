#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int N, M, X, u, v, t, distS[1001], distE[1001], visited[1001];
vector<vector<pii>> adj, radj;
/*
 * 정방향 인접 리스트로 다익스트라 한번
 * 역방향 인접 리스트로 다익스트라 한번
 */
void dijkstra(const vector<vector<pii>>& road_info, int type) {

    int dist[1001];
    fill(dist, dist+N+1, INF);
    memset(visited, false, sizeof(visited));

    dist[X] = 0;
    priority_queue<pii, vector<pii>, greater<>> pq;

    pq.push({dist[X], X});

    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur]);

        if (visited[cur]) break;
        visited[cur] = true;

        for (auto [nxt, time] : road_info[cur]) {
            if (dist[nxt] > dist[cur] + time) {
                dist[nxt] = dist[cur] + time;
                pq.push({dist[nxt], nxt});
            }
        }
    }

    if (type == 1) memcpy(distS, dist, sizeof(distS));
    else memcpy(distE, dist, sizeof(distE));
}

int main() {
    fast_io;
    cin >> N >> M >> X;
    adj.resize(N+1);
    radj.resize(N+1);

    for (int i = 1; i <= M; i++) {
        cin >> u >> v >> t;
        adj[u].emplace_back(v,t);
        radj[v].emplace_back(u,t);
    }

    dijkstra(adj, 1);
    dijkstra(radj, -1);

    int ans = 0;
    for (int i = 1; i <= N; i++)
        ans = max(ans, distS[i] + distE[i]);
    cout << ans;
}