/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 501;
const int INF = 1e9;
int n, m, w;
int a,b,c;
int dist[MAX]; bool visited[MAX];
vector<pair<int,int>> adj[MAX];

// 컴포넌트가 여러개일 수 있기때문에
// dist[cur] != INF를 제거한다.

bool is_minus_cycle() {
    fill(dist+1, dist+n+1, INF);
    dist[1] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            for (auto &p : adj[j]) {
                int nxt = p.first; int time = p.second;
                if (dist[nxt] > dist[j] + time) {
                    visited[nxt] = true;
                    dist[nxt] = dist[j] + time;
                    if (i == n-1) return true;
                }
            }
        }
    }
    return false;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m >> w;
        fill(visited+1, visited+1+n, false);
        for (int i = 1; i <= n; i++) adj[i].clear();
        for (int i = 0; i < m; i++) {
            cin >> a >> b >> c;
            adj[a].emplace_back(b,c);
            adj[b].emplace_back(a,c);
        }
        for (int i = 0; i < w; i++) {
            cin >> a >> b >> c;
            adj[a].emplace_back(b,-c);
        }
        (is_minus_cycle()) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
}*/
