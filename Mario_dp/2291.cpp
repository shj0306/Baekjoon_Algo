/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int N,M,K;
int dp[11][222][222];

int solve(int n, int m, int prev) {
    if (N < n || M < m) return 0;
    int &ret = dp[n][m][prev];
    if (ret != -1) return ret;
    ret = 0;
    for (int i = prev; i <= M; i++) {
        if (m + i > M) break;
        ret += solve(n + 1, m + i, i);
    }
    return ret;
}

void skip(int n, int m, int prev, int k) {
    if (n == N) return;
    for (int i = prev; i <= M; i++) {
        if (dp[n+1][m+i][i] == -1) continue;
        if (dp[n+1][m+i][i] < k) {
            k -= dp[n+1][m+i][i];
            continue;
        }
        cout << i << ' ';
        skip(n+1, m + i, i, k);
        break;
    }
}
int main() {
    fast_io;
    cin >> N >> M >> K;
    memset(dp, -1, sizeof(dp));

    for (int i = 1; i <= M; i++) dp[N][M][i] = 1;

    solve(0,0,1);
    skip(0, 0, 1, K);
}
*/
