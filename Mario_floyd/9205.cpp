#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int T, N, dist[110][110], visited[101];
bool is_success;
vector<pii> store;

void init() {
    for (int i = 1; i <= N+2; i++) {
        fill(dist[i], dist[i]+N+2, INF);
    }
    memset(visited, false, sizeof(visited));
    is_success = false;
}

void floyd() {
    for (int k = 1; k <= N+2; k++) {
        for (int i = 1; i <= N+2; i++) {
            for (int j = 1; j <= N+2; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

bool DFS(int cur) {
    if (cur == N+2) {
        is_success = true;
        return true;
    }
    visited[cur] = true;
    for (int i = 1; i <= N+2; i++) {
        if (visited[i]) continue;
        if (cur == i || dist[cur][i] > 1000) continue;
        if (DFS(i)) return true;
    }
    return false;
}

int main() {
    fast_io;
    cin >> T;
    while(T--) {
        cin >> N;
        store.resize(N+3);
        init();
        for (int i = 1; i <= N + 2; i++) // 2 ~ N+1
            cin >> store[i].first >> store[i].second;

        for (int i = 1; i <= N+2; i++) {
            for (int j = 1; j <= N+2; j++) {
                if (i == j) dist[i][j] = 0;
                else {
                    auto [x1, y1] = store[i];
                    auto [x2, y2] = store[j];

                    dist[i][j] = abs(x1-x2) + abs(y1-y2);
                }
            }
        }

        floyd();
        DFS(1);
        cout << (is_success ? "happy" : "sad") << '\n';
        store.clear();
    }
}