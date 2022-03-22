/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 50;
const long long INF = -1e18;
int n, s, t, m;
long long dist[MAX]; int city[MAX]; //각 도시를 방문했을 때 벌 수 있는 돈
vector<pair<int,int>> adj[MAX];
queue<int> q;
bool check[MAX];

void belman_ford(int start) {
    fill(dist, dist+n, INF);
    dist[start] = city[start];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (auto &p : adj[j]) {
                int nxt = p.first; int d = p.second;
                if (dist[j] != INF && dist[nxt] < dist[j] - d + city[nxt]) {
                    dist[nxt] = dist[j] - d + city[nxt];
                    if (i == n-1) {
                        check[nxt] = true;
                        q.push(nxt);
                    }
                }
            }
        }
    }
}

bool bfs() {
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto &nxt : adj[cur]) {
            if (!check[nxt.first]) {
                check[nxt.first] = true;
                q.push(nxt.first);
            }
        }
    }
    return check[t];
}

int main() {
    fast_io;
    cin >> n >> s >> t >> m; //도시 개수, 시작 도시, 도착 도시, 교통수단 개수
    for (int i = 0; i < m; i++) {
        int u, v, d;
        cin >> u >> v >> d;
        adj[u].emplace_back(v,d);
    }
    for (int i = 0; i < n; i++) cin >> city[i];
    belman_ford(s);
    if (dist[t] == INF) cout << "gg" << '\n';
    else {
        if (bfs()) cout << "Gee" << '\n';
        else cout << dist[t] << '\n';
    }
}
*/

// * 도착 도시에 가지 못하는 경우 gg -> dist[des] = INF
// * 돈을 무한히 가지는 경우 gee -> 버는 돈을 음수로 취했을 때 시작도시에서 음의싸이클을 거쳐 도착도시로 갈 수 있는 경우

