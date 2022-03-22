/*
#include <bits/stdc++.h>

#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 101;
const long long INF = 1e18;
int n, m;
vector<pair<int, int>> route[MAX];
vector<pair<int, int>> r_route[MAX];
long long dist[MAX];
int trace[MAX]; bool check[MAX];
//획득한 금품을 음으로 빼앗긴 금품을 양으로 바꿈

void extract_route(int e) {
    if (e == 1) return;
    extract_route(trace[e]);
    cout << trace[e] << ' ';
    if (e == n) cout << n << ' ';
}

int main() {
    fast_io;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        route[u].emplace_back(v, w);
        r_route[v].emplace_back(u, w);
    }


    queue<int> q;
    q.push(n);
    check[n] = true;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto adj: r_route[cur]) {
            if (!check[adj.first]) {
                q.push(adj.first);
                check[adj.first] = true;
            }
        }
    }
    //belman-ford
    fill(dist + 1, dist + 1 + n, INF);
    dist[1] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            for (auto &p: route[j]) {
                int nxt = p.first;
                int cost = -p.second;
                if (dist[j] != INF && dist[nxt] > dist[j] + cost) {
                    dist[nxt] = dist[j] + cost;
                    trace[nxt] = j;
                    if (i == n - 1 && check[nxt]) { //음의 싸이클 존재
                        cout << -1 << '\n';
                        return 0;
                    }
                }
            }
        }
    }
    //목적지로 경로가 없거나 음의싸이클을 통해서 목적지에 도달가능한 경우 -1
    if (dist[n] == INF) cout << -1 << '\n';
    else extract_route(n);
}*/
