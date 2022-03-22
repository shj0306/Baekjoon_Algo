/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
struct RGB {
    int r;
    int g;
    int b;
};
int N;
int dp[1001][4];
vector<RGB> home;

int solve(int idx, int color) {
    if (dp[idx][color] != -1) return dp[idx][color];
    if (idx == N) {
        if (color == 1) return min(home[idx].g, home[idx].b);
        if (color == 2) return min(home[idx].r, home[idx].b);
        if (color == 3) return min(home[idx].r, home[idx].g);
    }
    if (color == 0) { //처음
        dp[idx][0] = min(solve(idx+1, 1) + home[idx].r,
                         min(solve(idx+1, 2) + home[idx].g, solve(idx+1, 3) + home[idx].b));
    }else if (color == 1) {
        dp[idx][1] = min(solve(idx+1, 2) + home[idx].g, solve(idx+1, 3) + home[idx].b);
    }else if (color == 2) {
        dp[idx][2] = min(solve(idx+1, 1) + home[idx].r, solve(idx+1, 3) + home[idx].b);
    }else if (color == 3) {
        dp[idx][3] = min(solve(idx+1, 1) + home[idx].r, solve(idx+1, 2) + home[idx].g);
    }
    return dp[idx][color];
}

int main() {
    fast_io;
    cin >> N;
    home = vector<RGB> (N+1);
    memset(dp, -1, sizeof(dp));
    for (int i = 1; i <= N; i++) {
        cin >> home[i].r >> home[i].g >> home[i].b;
    }
    cout << solve(1, 0) << '\n';
}*/
