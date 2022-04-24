#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N,L,R, arr[51][51], check[51][51];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
vector<pii> track;

void dfs(int x, int y) {

    track.emplace_back(x,y);
    check[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 1 || ny < 1 || nx > N || ny > N) continue;
        if (check[nx][ny]) continue;
        int diff = abs(arr[x][y] - arr[nx][ny]);
        if (L <= diff && diff <= R) {
            dfs(nx, ny);
        }
    }
}

int main() {
    fast_io;
    cin >> N >> L >> R;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }

    bool flag = true;
    int day = 0;
    while(true) {
        flag = false;
        memset(check,0,sizeof(check));

        for (int x = 1; x <= N; x++) {
            for (int y = 1; y <= N; y++) {
                if (check[x][y]) continue;
                track.clear();
                dfs(x,y);

                if (track.size() > 1) {
                    flag = true;
                    int sum = 0;
                    for (auto [x2, y2] : track) sum += arr[x2][y2];
                    for (auto [x2, y2] : track) arr[x2][y2] = sum / track.size();
                }
            }
        }
        if (!flag) break;
        day++;
    }
    cout << day;
}