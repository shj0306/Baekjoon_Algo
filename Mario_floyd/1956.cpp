/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int INF = 1e9;
int dist[401][401];
int v,e;

void FloydWarshall() {
    for (int k = 1; k <= v; ++k)
        for (int i = 1; i <= v; ++i)
            for (int j = 1; j <= v; ++j)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}

int main() {
    fast_io;
    cin >> v >> e;

    for (int i = 1; i <= v; i++) fill(dist[i]+1, dist[i]+v+1, INF);
    for (int i = 0; i < e; i++) {
        int a,b,c; cin >> a >> b >> c;
        dist[a][b] = c;
    }

    FloydWarshall();
    int min_d = INF;
    for (int i = 1; i <= v; i++) {
        if (dist[i][i] != INF) {
            min_d = min(min_d, dist[i][i]);
        }
    }
    min_d == INF ? cout << -1 << '\n' : cout << min_d << '\n';
}
*/