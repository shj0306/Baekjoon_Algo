/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int l, r, c; //층, 행, 열
queue<tuple<int,int,int>> q;
int dist[31][31][31];
char building[31][31][31];
int src_l, src_r, src_c, des_l, des_r, des_c;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dl[] = {1,-1};

int bfs(int f, int row, int col) {
    q.push({f, row, col});
    while(!q.empty()) {
        tuple<int,int,int> cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) { //동,서,남,북
            int nl = get<0>(cur);
            int nr = get<1>(cur) + dy[i];
            int nc = get<2>(cur) + dx[i];
            if (nr >= 1 && nr <= r && nc >= 1 && nc <= c && !dist[nl][nr][nc] && building[nl][nr][nc] != '#') {
                q.push(make_tuple(nl,nr,nc));
                dist[nl][nr][nc] = dist[nl][get<1>(cur)][get<2>(cur)] + 1;
            }

            if (nl == des_l && nr == des_r && nc == des_c) return dist[nl][nr][nc];
        }
        for (int i : dl) { //위,아래
            int nl = get<0>(cur) + i;
            int nr = get<1>(cur);
            int nc = get<2>(cur);
            if (nl >= 1 && nl <= l && !dist[nl][nr][nc] && building[nl][nr][nc] != '#') {
                q.push(make_tuple(nl, nr,nc));
                dist[nl][nr][nc] = dist[get<0>(cur)][nr][nc] + 1;
            }
            if (nl == des_l && nr == des_r && nc == des_c) return dist[nl][nr][nc];
        }
    }
    return -1;
}

int main() {
    while(true) {
        cin >> l >> r >> c;
        if (l == 0 && r == 0 && c == 0) break;
        memset(building, ' ', sizeof(building));
        memset(dist, 0, sizeof(dist));
        for (int i = 1; i <= l; i++) {
            for (int j = 1; j <= r; j++) {
                for (int k = 1; k <= c; k++) {
                    cin >> building[i][j][k];
                    if (building[i][j][k] == 'S') {
                        src_l = i; src_r = j; src_c = k;
                    }
                    if (building[i][j][k] == 'E') {
                        des_l = i; des_r = j; des_c = k;
                    }
                }
            }
        }
        int ans = bfs(src_l, src_r, src_c);
        if (ans == -1) {
            cout << "Trapped!" << '\n';
        }else {
            cout << "Escaped in " << ans << " minute(s)." << '\n';
        }
        while(!q.empty()) {q.pop();}
    }
    return 0;
}*/
