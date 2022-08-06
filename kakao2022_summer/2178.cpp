#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, check[101][101];
vector<vector<int>> arr;
int dr[] = {1,-1,0,0};
int dc[] = {0,0,1,-1};
bool is_possi;

struct Info{
    int r,c,dist;
};

int bfs() {
    queue<Info> q;
    q.push({1,1,1});

    while(!q.empty()) {
        auto [r,c,dist] = q.front();
        q.pop();

        if (r == N && c == M) return dist;

        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d];
            int nc = c + dc[d];
            is_possi = false;
            if (nr < 1 || nc < 1 || nr > N || nc > M) continue;
            if (check[nr][nc]) continue;
            check[nr][nc] = 1;
            for (auto w : arr[nr]) {
                if (w == nc) {
                    is_possi = true;
                    break;
                }
            }
            if (is_possi) {
                q.push({nr,nc,dist+1});
            }
        }

    }
    return -1;
}


int main() {
    fast_io;
    cin >> N >> M;
    arr.resize(N+1);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            char c; cin >> c;
            if (c-'0') arr[i].push_back(j);
        }
    }

    cout << bfs();
}