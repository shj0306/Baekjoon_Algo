#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 50000;
const ll INF = 2e10;
/**
 * N : 도시 수 (0~N-1)
 * M : 도로 수
 * F : 비행기 수
 * S : 피터가 여행을 시작 하는 도시 번호
 * T : 피터가 가려고 하는 도시 번호
 *
 * 비행기는 한번만 탈 수 있다.
 */

int N, M, F, S, T, u, v, c;
bool visited[MAX];
ll distS[MAX], distT[MAX];
vector<vector<pii>> adj;

void dijkstra(ll dist[], int s) {
    fill(dist, dist + N, INF);
    memset(visited, false, sizeof(visited));

    dist[s] = 0;
    priority_queue<pii, vector<pii>, greater<>> pq;
    pq.push({dist[s], s});

    while (!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        } while (!pq.empty() && visited[cur]);

        if (visited[cur]) break;
        visited[cur] = true;

        for (auto [nxt, cost]: adj[cur]) {
            if (dist[nxt] > dist[cur] + cost) {
                dist[nxt] = dist[cur] + cost;
                pq.push({dist[nxt], nxt});
            }
        }
    }
    if (s == S) memcpy(distS, dist, N);
    else memcpy(distT, dist, N);
}

int main() {
    fast_io;
    cin >> N >> M >> F >> S >> T;
    adj.resize(N);

    for (int i = 1; i <= M; i++) {
        cin >> u >> v >> c;
        adj[u].emplace_back(v,c);
        adj[v].emplace_back(u,c);
    }

    dijkstra(distS, S);
    dijkstra(distT, T);

    ll ans = distS[T]; //비행기를 타지 않고 갔을 때 최소 비용
    for (int i = 1; i <= F; i++) {
        cin >> u >> v;
        ans = min(ans, distS[u] + distT[v]); //해당 비행기를 이용했을 때 최소비용과 비교
    }
    cout << ans;
}