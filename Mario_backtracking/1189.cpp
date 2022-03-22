/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

char arr[5][5];
int visited[5][5];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int r, c, k, ans;

//도착 0,c-1
void back_tracking(int row, int col, int cnt) {

    if (row == 0 && col == c - 1) {
        if (cnt == k) ans++;
        return;
    }
    if (cnt >= k) return;
    visited[row][col] = 1;
    for (int i = 0; i < 4; i++) {
        int nr = row + dy[i];
        int nc = col + dx[i];
        if (nr < 0 || nc < 0 || nr >= r || nc >= c || visited[nr][nc]) continue;
        if (arr[nr][nc] == 'T') continue;
        back_tracking(nr,nc,cnt+1);
    }
    visited[row][col] = 0;
}


int main() {
    cin >> r >> c >> k;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    memset(visited, 0, sizeof(visited));
    back_tracking(r - 1, 0, 1);
    cout << ans << '\n';
    return 0;
}

*/
