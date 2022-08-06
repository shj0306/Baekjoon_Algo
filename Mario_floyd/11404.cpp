#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9+7;
int N, M, u, v, c, dist[101][101];

void init() {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
}

int main() {
    fast_io;
    cin >> N >> M;
    init();
    for (int i = 1; i <= M; i++) {
        cin >> u >> v >> c;
        dist[u][v] = min(dist[u][v], c);
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (i == j) continue;
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (dist[i][j] == INF) cout << 0 << ' ';
            else cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }
}