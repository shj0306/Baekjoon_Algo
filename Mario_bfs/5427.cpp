/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int w, h, src_r, src_c;
vector<vector<int>> dist;
vector<vector<char>> building;
queue<pair<int,int>> q1, q2; // q1 : 불 위치, q2 : 상근이 위치
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int bfs(int r, int c) {
    q2.push({r,c});
    while(!q2.empty()) { //상근이가 더 탈출 하기 전에 더 갈곳이 없을 때까지
        if (!q1.empty()) {
            int f_size = q1.size();
            for (int ii = 0; ii < f_size; ii++) {
                pair<int,int> fire = q1.front();
                q1.pop();
                for (int i = 0; i < 4; i++) { //불 먼저 이동
                    int nr = fire.first + dy[i];
                    int nc = fire.second + dx[i];
                    if (nr >= 1 && nr <= h && nc >= 1 && nc <= w
                        && building[nr][nc] != '#' && building[nr][nc] != '*') {
                        q1.push({nr,nc});
                        building[nr][nc] = '*';
                    }
                }
            }
        }
        int h_size = q2.size();
        for (int ii = 0; ii < h_size; ii++) {
            pair<int,int> human = q2.front();
            q2.pop();
            for (int i = 0; i < 4; i++) {
                int nr = human.first + dy[i];
                int nc = human.second + dx[i];
                if (nr >= 1 && nr <= h && nc >= 1 && nc <= w
                && !dist[nr][nc] && building[nr][nc] == '.') {
                    q2.push({nr,nc});
                    dist[nr][nc] = dist[human.first][human.second] + 1;
                    if (nr == 1 || nr == h || nc == 1 || nc == w) return dist[nr][nc] + 1;
                }
            }
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> w >> h;
        building = vector<vector<char>>(h+1, vector<char>(w+1, ' '));
        dist = vector<vector<int>>(h+1, vector<int>(w+1,0));
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                cin >> building[i][j];
                if (building[i][j] == '@') {
                    src_r = i; src_c = j;
                }
                if (building[i][j] == '*')
                    q1.push({i,j});
            }
        }
        if (src_r == 1 || src_r == h || src_c == 1 || src_c == w) {
            cout << 1 << '\n';
        }else{
            int ans = bfs(src_r, src_c);
            if (ans == -1) cout << "IMPOSSIBLE" << '\n';
            else cout << ans << '\n';
        }
        while(!q1.empty()) q1.pop();
        while(!q2.empty()) q2.pop();
    }
}*/
