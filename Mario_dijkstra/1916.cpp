/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
const int MAX = 1001;
const int INF = 1e9;
int n, m;
vector<vector<pii>> bus;
int dist[MAX];
bool visited[MAX];
priority_queue<pii, vector<pii>, greater<>> pq;

int main() {
    cin >> n >> m;
    bus = vector<vector<pii>>(n+1);
    fill(dist+1, dist+1+n, INF);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        bus[u].emplace_back(v,w);
    }
    int s, t;
    cin >> s >> t;
    dist[s] = 0;
    pq.push({0, s});
    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur]);
        if (visited[cur]) break;
        visited[cur] = true;
        for (auto &p : bus[cur]) {
            int nxt = p.first; int cost = p.second;
            if (visited[nxt]) continue;
            if (dist[nxt] > dist[cur] + cost) {
                dist[nxt] = dist[cur] + cost;
                pq.push({dist[nxt], nxt});
            }
        }
    }

    cout << dist[t] << '\n';
}*/
