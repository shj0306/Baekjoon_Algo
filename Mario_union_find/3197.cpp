/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 1501;

int r, c;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int lake[MAX][MAX];
vector<pair<int,int>> swan; //백조가 있는 강의 영역
int p[MAX*MAX];
int visited[MAX][MAX];

queue<pair<int,int>> union_q;
queue<pair<int,int>> bfs_q;

int find(int idx) {
    if (p[idx] == idx) return idx;
    return p[idx] = find(p[idx]);
}

void merge(int idx1, int idx2) {
    int r1 = find(idx1);
    int r2 = find(idx2);
    if (r1 != r2) p[r1] = r2;
}

bool is_same_river(int idx1, int idx2) {
    int r1 = find(idx1);
    int r2 = find(idx2);
    return r1 == r2;
}

//각 호수 영역 부여
void dfs(int row, int col, int idx) {
    visited[row][col] = 1;
    lake[row][col] = idx;
    union_q.push({row,col});
    for (int i = 0; i < 4; i++) {
        int nr = row + dy[i];
        int nc = col + dx[i];
        if (nr < 0 || nc < 0 || nr >= r || nc >= c || visited[nr][nc]) continue;
        if (lake[nr][nc] == -1) continue;
        dfs(nr,nc,idx);
    }
}

//인접한 다른 강가와 합침
void bfs1() {
    while(!union_q.empty()) {
        int row = union_q.front().first;
        int col = union_q.front().second;
        int cur_river = lake[row][col];
        bfs_q.push({row,col});
        union_q.pop();

        for (int i = 0; i < 4; i++) {
            int nr = row + dy[i];
            int nc = col + dx[i];
            int neighbor_river = lake[nr][nc];

            if (nr < 0 || nc < 0 || nr >= r || nc >= c || neighbor_river == -1) continue;
            if (cur_river == neighbor_river || is_same_river(cur_river, neighbor_river)) continue;

            merge(cur_river, neighbor_river);
        }

    }
}

//녹을 빙하로 해당 강가 전파
void bfs2() {
    while(!bfs_q.empty()) {
        int row = bfs_q.front().first;
        int col = bfs_q.front().second;
        bfs_q.pop();

        for (int i = 0; i < 4; i++) {
            int nr = row + dy[i];
            int nc = col + dx[i];

            if (nr < 0 || nc < 0 || nr >= r || nc >= c || lake[nr][nc] != -1) continue;

            lake[nr][nc] = lake[row][col];
            union_q.push({nr,nc});
        }
    }
}

void solve() {
    //2마리의 백조가 속해 있는 강이 하나가 될때까지
    int day = 0;
    int swan1 = lake[swan[0].first][swan[0].second];
    int swan2 = lake[swan[1].first][swan[1].second];
    while(true) {
        bfs1(); //인접한 강가 합침
        if (find(swan1) == find(swan2)) {
            cout << day << '\n'; return;
        }
        bfs2(); //인접한 빙하를 해당 영역으로 전파
        day++;
    }
}

int main() {
    fast_io;
    cin >> r >> c;

    int idx = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char a;
            cin >> a;
            if (a == '.') lake[i][j] = 0;
            else if (a == 'L') {
                lake[i][j] = 0;
                swan.emplace_back(i,j);
            }else lake[i][j] = -1;
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (lake[i][j] == 0 && !visited[i][j]) {
                ++idx;
                dfs(i,j,idx);
            }
        }
    }

    for (int i = 1; i <= idx; i++) p[i] = i;
    solve();
    return 0;
}
*/
