#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, arr[1001][1001];
int dr[2] = {0,1};
int dc[2] = {1,0};
int dp[1001][1001][4];

int solve(int r, int c, int prev) {
    if (r == N && c == N) return (prev + 1) % 3 == arr[r][c];
    int &ret = dp[r][c][prev];
    if (ret != 0) return ret;

    for (int i = 0; i < 2; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        //범위를 벗어남.
        if (nr > N || nc > N) continue;

        //안 마시고 그냥 지나가는 경우
        ret = max(ret, solve(nr, nc, prev));

        if ((prev+1) % 3 == arr[nr][nc]) {
            ret = max(ret, solve(nr,nc, arr[nr][nc]) + 1);
        }
    }
    return ret;
}

int main() {
    fast_io;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }

    int ans;
    if (arr[1][1]) ans = solve(1,1,3);
    else ans = max(solve(1,1,3), solve(1,1,0) + 1);
    cout << ans;
}
