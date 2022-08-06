#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using pli = pair<long long,int>;
using ll = long long;
const ll INF = 1e13;
const int MAX = 100001;
int N, M, D, E, H[MAX], visited[MAX], a, b, n;
ll distS[MAX], distE[MAX];
vector<vector<pii>> adj;
//https://mapocodingpark.blogspot.com/2020/06/16681.html 참고
//집에서 증가하는 방향으로 갈 때 최단 거리
//고려대에서 증가하는 방향으로 갈 때 최단 거리
//2번의 다익스트라로 해결 가능
//얻을 수 있는 성취감은 목표에 따라 고정이기 때문에

void dijkstra(ll dist[], int start, int type) {
    fill(dist, dist+N+1, INF);
    memset(visited, false, sizeof(visited));
    dist[start] = 0;
    priority_queue<pli, vector<pli>, greater<>> pq;

    pq.push({dist[start], start});

    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur]);

        if (visited[cur]) break;
        visited[cur] = true;

        for (auto [nxt, d] : adj[cur]) {
            if (H[cur] >= H[nxt]) continue;
            if (dist[nxt] > dist[cur] + d) {
                dist[nxt] = dist[cur] + d;
                pq.push({dist[nxt], nxt});
            }
        }
    }
    if (type == 1) memcpy(distS, dist, sizeof(distS));
    else memcpy(distE, dist, sizeof(distE));
}

int main() {
    fast_io;
    cin >> N >> M >> D >> E;
    adj.resize(N+1);

    for (int i = 1; i <= N; i++) cin >> H[i];

    for (int i = 1; i <= M; i++) {
        cin >> a >> b >> n;
        adj[a].emplace_back(b,n);
        adj[b].emplace_back(a,n);
    }

    dijkstra(distS, 1, 1);
    dijkstra(distE, N, 0);

    ll ans = -INF;
    for (int i = 2; i < N; i++) {
        if (distS[i] == INF || distE[i] == INF) continue;
        ans = max(ans, H[i] * E - (distS[i] + distE[i]) * D);
    }

    if (ans == -INF) cout << "Impossible";
    else cout << ans;
}