/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
vector<vector<char>> maze;
pair<int,int> node;
int visited[1000][1000],c,r,max_weight;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
//트리의 지름 문제와 유사
int dfs(pair<int,int> root) {
    visited[root.first][root.second] = 1;
    int len1 = 0, len2 = 0;
    for (int i = 0; i < 4; i++) {
        int nr = root.first + dy[i];
        int nc = root.second + dx[i];
        if (nr < 0 || nr >= r || nc < 0 || nc >= c || visited[nr][nc]) continue;
        if (maze[nr][nc] == '#') continue;
        int len = dfs({nr,nc}) + 1;
        if (len > len1) { len2 = len1; len1 = len; }
        else if (len > len2) { len2 = len; }
    }
    max_weight = max(max_weight, len1 + len2);
    return len1;
}


int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) {
        cin >> c >> r; //col, row
        maze = vector<vector<char>>(r, vector<char>(c));
        pair<int,int> root;
        memset(visited, 0, sizeof(visited));
        max_weight = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> maze[i][j];
                if (maze[i][j] == '.') {root = make_pair(i,j);}
            }
        }
        dfs(root);
        cout << "Maximum rope length is " << max_weight << ".\n";
    }
    return 0;
}
*/
