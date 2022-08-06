#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 2e5;
int N, cost[125][125], dist[125][125];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

bool is_in(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

void init() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dist[i][j] = INF;
        }
    }
}

int bfs(int x, int y) {
    queue<pii> q;
    q.push({x,y});
    init();
    dist[y][x] = cost[y][x];

    while(!q.empty()) {
        auto [c_x, c_y] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = c_x + dx[d];
            int ny = c_y + dy[d];

            if (!is_in(nx, ny)) continue;
            if (dist[ny][nx] > dist[c_y][c_x] + cost[ny][nx]) {
                dist[ny][nx] = dist[c_y][c_x] + cost[ny][nx];
                q.push({nx, ny});
            }
        }
    }
    return dist[N-1][N-1];
}

int main() {
    fast_io;

    for (int t = 1; ; t++) {
        cin >> N;
        if (N == 0) break;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> cost[i][j];
            }
        }
        cout <<"Problem " << t << ": " << bfs(0, 0) << '\n';
    }
}