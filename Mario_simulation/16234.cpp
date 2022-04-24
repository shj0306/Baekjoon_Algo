#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int, int>;
using ll = long long;
int N, L, R, arr[51][51], check[51][51];
bool is_conti = true;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void update(int human, vector<pii> track) {
    for (auto [x,y] : track) {
        arr[x][y] = human;
    }
}

void bfs(int x, int y) {
    queue<pii> q;
    vector<pii> track;
    int human = arr[x][y], cnt = 1;
    q.push({x,y});
    track.emplace_back(x,y);
    check[x][y] = 1;

    while(!q.empty()) {
        auto [sx, sy] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)  {
            int nx = sx + dx[i];
            int ny = sy + dy[i];
            if (nx < 1 || nx > N || ny < 1 || ny > N) continue;
            if (check[nx][ny]) continue;
            int diff = abs(arr[sx][sy] - arr[nx][ny]);
            if (L <= diff && diff <= R) {
                track.emplace_back(nx,ny);
                is_conti = true;
                check[nx][ny] = 1;
                human += arr[nx][ny];
                cnt++;
                q.push({nx,ny});
            }
        }
    }

    update(human / cnt, track);
}

int main() {
    fast_io;
    cin >> N >> L >> R;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }

    int day = 0;

    while (is_conti) {
        is_conti = false;
        memset(check, 0, sizeof(check));
        //조건에 해당하는 국경선을 연다.

        for (int x = 1; x <= N; x++) {
            for (int y = 1; y <= N; y++) {
                if (check[x][y]) continue;
                bfs(x, y);
            }
        }
        if (is_conti) day++;
    }

    cout << day;
}