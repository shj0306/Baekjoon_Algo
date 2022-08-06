#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e7;
int V, E, a, b, c, dist[401][401];

void floyd() {
    for (int k = 1; k <= V; k++) {
        for (int i = 1; i <= V; i++) {
            for (int j = 1; j <= V; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

void init() {
    for (int i = 1; i <= V; i++) {
        fill(dist[i], dist[i]+V+1, INF);
    }
}

int main() {
    fast_io;
    cin >> V >> E;
    init();
    for (int i = 1; i <= E; i++) {
        cin >> a >> b >> c;
        dist[a][b] = c;
    }

    floyd();

    int ans = INF;
    for (int i = 1; i <= V; i++) {
        ans = min(ans, dist[i][i]);
    }

    cout << (ans == INF ? -1 : ans) << '\n';
}