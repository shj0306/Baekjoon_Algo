#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, K, S, u, v, dist[401][401];

int main() {
    fast_io;
    cin >> N >> K;

    for (int i = 1; i <= K; i++) {
        cin >> u >> v;
        dist[u][v] = 1;
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (dist[i][j]) continue;
                dist[i][j] = (dist[i][k] & dist[k][j]);
            }
        }
    }

    cin >> S;
    for (int i = 1; i <= S; i++) {
        cin >> u >> v;
        if (dist[u][v]) cout << -1 << '\n';
        else if (dist[v][u]) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}