/*
#include <bits/stdc++.h>
#include <unordered_map>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 2001;
int n, k, cnt;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int p[100001];
int world[MAX][MAX];
queue<pair<int,int>> union_q;
queue<pair<int,int>> bfs_q;

int find(int idx) {
    if (p[idx] == idx) return idx;
    return p[idx] = find(p[idx]);
}

void union_set(int idx1, int idx2) {
    int r1 = find(idx1);
    int r2 = find(idx2);

    if (r1 != r2) p[r1] = r2;
}

bool is_same_root(int idx1, int idx2) {
    int r1 = find(idx1);
    int r2 = find(idx2);

    return r1 == r2;
}

//인접한 문명을 결합
void bfs1() {
    while(!union_q.empty()) {
        int x = union_q.front().first;
        int y = union_q.front().second;

        bfs_q.push({x,y});
        union_q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int cur_civil = world[x][y];
            int neighbor_civil = world[nx][ny];

            if (nx < 0 || ny < 0 || nx >= n || ny >= n || neighbor_civil == 0) continue;

            //인접한 문명이 다른 번호이며 다른 문명에 속해있어야 결합
            if (cur_civil == neighbor_civil || is_same_root(cur_civil, neighbor_civil)) continue;

            union_set(cur_civil, neighbor_civil);
            // 두 문명이 하나의 문명으로 결합되었으므로, 전체 문명의 수를 하나 낮춘다
            k--;
        }
    }
}

//인접한 칸에 문명 전파
void bfs2() {
    while(!bfs_q.empty()) {
        int x = bfs_q.front().first;
        int y = bfs_q.front().second;
        bfs_q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= n || world[nx][ny] != 0) continue;

            //인접한 칸에 문명이 존재하지 않는 경우
            world[nx][ny] = world[x][y];
            union_q.push({nx,ny});
        }
    }
}

int main() {
    fast_io;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        union_q.push({x-1,y-1});
        world[x-1][y-1] = i+1;
    }

    for (int i = 0; i < 100001; i++) p[i] = i;

    while (k > 1) {
        bfs1();
        if (k == 1) {
            cout << cnt << '\n';
            return 0;
        }
        bfs2();
        cnt++;
    }
    return 0;
}
// 김인재님 코드 참고
// https://injae-kim.github.io/problem_solving/2020/03/19/baekjoon-14868.html 참고*/
