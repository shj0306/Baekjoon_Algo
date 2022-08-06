#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, a, b, dist[501][501];

int main() {
    fast_io;
    cin >> N >> M;
    memset(dist, 0, sizeof(dist));

    for (int i = 1; i <= M; i++) {
        cin >> a >> b;
        dist[a][b] = 1;
        dist[b][a] = -1;
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {

            }
        }
    }

    int cnt = 0; bool is_possible;
    for (int i = 1; i <= N; i++) {
        is_possible = true;
        for (int j = 1; j <= N; j++) {
            if (i == j) continue;
            if (dist[i][j] == 0) {
                is_possible = false;
                break;
            }
        }
        if (is_possible) cnt++;
    }

    cout << cnt;
}