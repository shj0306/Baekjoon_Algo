#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 10001;
int N, M, a,b,c, ans, dist[1001], visited[1001], route[1001];
vector<vector<pii>> adj;

void dijkstra() {
    fill(dist, dist+N+1, INF);
    dist[1] = 0;
    priority_queue<pii, vector<pii>, greater<>> pq;

    pq.push({dist[1], 1});
    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur]);

        if (visited[cur]) break;
        visited[cur] = 1;
        for (auto [nxt, time] : adj[cur]) {
            if (dist[nxt] > dist[cur] + time) {
                dist[nxt] = dist[cur] + time;
                route[nxt] = cur;
                pq.push({dist[nxt], nxt});
            }
        }
    }
}

int main() {
    fast_io;
    cin >> N >> M;
    adj.resize(N+1);

    for (int i = 1; i <= M; i++) {
        cin >> a >> b >> c;
        adj[a].emplace_back(b,c);
        adj[b].emplace_back(a,c);
    }
    dijkstra();

    for (int i = 2; i <= N; i++) {
        if (route[i]) ans++;
    }
    cout << ans << '\n';
    for (int i = 2; i <= N; i++) {
        cout << route[i] << ' ' << i << '\n';
    }
}