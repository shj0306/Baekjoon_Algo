#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int N, E, u, v, w, v1, v2, dist[801], visited[801];
vector<vector<pii>> adj;

void dijkstra(int start) {
    priority_queue<pii, vector<pii>, greater<>> pq;
    fill(dist, dist+N+1, INF);
    dist[start] = 0;
    pq.push({0, start});
    memset(visited, 0, sizeof(visited));

    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur]);

        if (visited[cur]) break;
        visited[cur] = 1;

        for (auto [nxt, weight] : adj[cur]) {
            if (dist[nxt] > dist[cur] + weight) {
                dist[nxt] = dist[cur] + weight;
                pq.push({dist[nxt], nxt});
            }
        }
    }
}

int main() {
    fast_io;
    cin >> N >> E;
    adj.resize(N+1);

    for (int i = 1; i <= E; i++) {
        cin >> u >> v >> w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }

    cin >> v1 >> v2; //반드시 거쳐야 하는 두 정점
    dijkstra(v1);
    int dist11 = dist[1]; //1->v1
    int dist1N = dist[N]; //v1->N
    int dist1v2 = dist[v2]; //v1->v2
    dijkstra(v2);
    int dist21 = dist[1]; //1->v2
    int dist2N = dist[N]; //v2->N

    if (dist1v2 == INF) { //v1과v2사이 경로가 없다면
        cout << -1;
        return 0;
    }
    else if (dist11 == INF || dist2N == INF) { //1->v1 혹은 v2->N으로 가는 경로 중 하나가 없다면
        if (dist21 == INF || dist1N == INF) { //1->v2 혹은 v1->N으로 가는 경로 중 하나가 없다면
            cout << -1;
            return 0;
        }
    }
    cout << min(dist11 + dist2N, dist21 + dist1N) + dist1v2;
}