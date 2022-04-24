#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int R,C,T;
int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};
int dr2[] = {1,0,-1,0};
int dc2[] = {0,1,0,-1};
pii arr[51][51];
int top_r, top_c, bot_r, bot_c;

void update() {
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            if (arr[i][j].second) {
                arr[i][j].first += arr[i][j].second;
                arr[i][j].second = 0;
            }
        }
    }
}

void diffuse_dust() {
    for (int r = 1; r <= R; r++) {
        for (int c = 1; c <= C; c++) {
            if (arr[r][c].first == -1 || arr[r][c].first == 0) continue;
            int cnt = 0;
            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr < 1 || nc < 1 || nr > R || nc > C) continue;
                if ((nr == top_r && nc == top_c) || (nr == bot_r && nc == bot_c)) {
                    continue;
                }

                if (arr[r][c].first >= 5) {
                    arr[nr][nc].second += arr[r][c].first / 5;
                    cnt++;
                }else break;
            }
            arr[r][c].first -= (arr[r][c].first / 5) * cnt;
        }
    }

    update();
}

void air_cleaner(int r, int c, int type) {
    int dir = 0;
    if (type) { //top_aircleaner
        while(dir < 4) {
            int nr = r + dr[dir];
            int nc = c + dc[dir];

            if (nr == top_r && nc == top_c) break;
            if (nr >= 1 && nr <= top_r && nc >= 1 && nc <= C) {
                if (r != top_r || c != top_c)
                    arr[r][c].second = arr[nr][nc].first;
                arr[nr][nc].first = 0;
                r = nr; c = nc;
            }else dir++;
        }
    }else { //bot_aircleaner
        while(dir < 4) {
            int nr = r + dr2[dir];
            int nc = c + dc2[dir];

            if (nr == bot_r && nc == bot_c) break;
            if (nr >= bot_r && nr <= R && nc >= 1 && nc <= C) {
                if (r != bot_r || c != bot_c) arr[r][c].second = arr[nr][nc].first;
                arr[nr][nc].first = 0;
                r = nr; c = nc;
            }else dir++;
        }
    }

    update();
}

int main() {
    fast_io;
    cin >> R >> C >> T;

    bool is_first = true;

    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            cin >> arr[i][j].first;
            if (is_first && arr[i][j].first == -1) {
                is_first = false;
                top_r = i; top_c = j;
            }else if (arr[i][j].first == -1) {
                bot_r = i;
                bot_c = j;
            }
        }
    }

    for (int t = 0; t < T; t++) {

        //미세먼지 확산
        diffuse_dust();
        //공기청정기 작동
        air_cleaner(top_r, top_c, 1);
        air_cleaner(bot_r, bot_c, 0);
    }

    int ans = 0;
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            if (arr[i][j].first != -1 && arr[i][j].first)
                ans += arr[i][j].first;
        }
    }
    cout << ans;
}