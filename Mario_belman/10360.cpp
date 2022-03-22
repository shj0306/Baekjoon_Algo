/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 1001;
const int INF = 2e9;
int t, n, m;
vector<pair<int,int>> adj[MAX];
int dist[MAX]; bool check[MAX]; queue<int> q;

void belman_ford() {
    fill(dist, dist+n+1, INF);
    dist[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (auto &p: adj[j]) {
                int nxt = p.first;
                int time = p.second;
                if (dist[j] != INF && dist[nxt] > dist[j] + time) {
                    dist[nxt] = dist[j] + time;
                    if (i == n - 1) {
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
        for (auto nxt : adj[cur]) {
            if (!check[nxt.first]) {
                q.push(nxt.first);
                check[nxt.first] = true;
            }
        }
    }

    return check[0];
}

int main() {
    fast_io;
    cin >> t; int cnt = 0;
    while(t--) {
        cin >> n >> m;
        fill(check, check+n+1, false);
        for (int i = 0; i < n; i++) adj[i].clear();
        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].emplace_back(v,w);
        }
        belman_ford();
        (bfs()) ? printf("Case #%d: possible\n", ++cnt) : printf("Case #%d: not possible\n", ++cnt);
    }
}*/
