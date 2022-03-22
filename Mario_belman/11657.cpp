/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 501;
const long long INF = 1e18;
int n, m;
vector<pair<int,int>> v[MAX];
long long dist[MAX];

int main() {
    fast_io;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].emplace_back(b,c);
    }

    fill(dist+1, dist+n+1, INF);
    dist[1] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            //n-1번 루프에 걸쳐 각 정점이 i+1개 정점을 거쳐오는 최단 경로
            for (auto &p : v[j]) {
                int nxt = p.first; int d = p.second;
                if (dist[j] != INF && dist[nxt] > dist[j] + d) {
                    dist[nxt] = dist[j] + d;
                    if (i == n-1) { //n-1번 이후에도 최단거리가 갱신된다면 음의 싸이클이 존재하는 것
                        cout << -1; return 0;
                    }
                }
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        (dist[i] == INF) ? cout << -1 << '\n' : cout << dist[i] << '\n';
    }
    return 0;
}*/
