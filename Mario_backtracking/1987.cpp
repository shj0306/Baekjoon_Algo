// 내가 푼 풀이 : 배열 활용(524ms)
// https://www.acmicpc.net/source/43405780  풀이 : 비트마스킹 활용(12ms)
// for문으로 코드 가독성 올린 코드: 24ms
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int R,C,dp[21][21],ans,alpha;
int board[21][21];
int dr[] = {1,-1,0,0};
int dc[] = {0,0,1,-1};

bool is_in(int r, int c) {
    return r >= 1 && r <= R && c >= 1 && c <= C;
}

void backtracking(int r, int c, int dist, int alphabetHistory) {
    alphabetHistory |= (1 << board[r][c]);
    if (dp[r][c] == alphabetHistory) return;
    if (dist > ans) ans = dist;
    dp[r][c] = alphabetHistory;

    for (int d = 0; d < 4; d++) {
        int nr = r + dr[d];
        int nc = c + dc[d];
        if (is_in(nr,nc) && !(alphabetHistory & (1 << board[nr][nc]))) {
            backtracking(nr,nc,dist+1, alphabetHistory);
        }
    }
}

int main() {
    fast_io;
    cin >> R >> C;

    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            char c; cin >> c;
            board[i][j] = c-'A';
        }
    }

    backtracking(1,1,1,alpha);
    cout << ans;
}