/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

vector<vector<char>> picture;
bool visited[101][101];
int n;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void dfs(int r, int c, bool flag) { //flag : 0 normal 1 : abnormal
    visited[r][c] = true;
    for (int i = 0; i < 4; i++) {
        int nr = r + dy[i];
        int nc = c + dx[i];
        if (nr < 1 || nr > n || nc < 1 || nc > n || visited[nr][nc]) continue;
        if ((flag && ((picture[r][c] == 'R' && picture[nr][nc] == 'G')
        || (picture[r][c] == 'G' && picture[nr][nc] == 'R')))
        || picture[r][c] == picture[nr][nc]) dfs(nr,nc,flag);

    }
}

int main() {
    cin >> n;
    picture = vector<vector<char>>(n+1,vector<char>(n+1));
    memset(visited, false, sizeof(visited));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> picture[i][j];
        }
    }

    int normal = 0, abnormal = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (!visited[i][j]) {
                dfs(i,j, 0);
                normal++;
            }
        }
    }
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (!visited[i][j]) {
                dfs(i,j, 1);
                abnormal++;
            }
        }
    }

    cout << normal << ' ' << abnormal << '\n';
}

*/
