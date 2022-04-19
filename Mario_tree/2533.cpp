/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 1000001;

int n, dp[MAX][2], visited[MAX];
vector<vector<int>> vec;

int solve(int root, bool is_early) {
    visited[root] = 1;
    if (dp[root][is_early] != -1) return dp[root][is_early];
    int res = (is_early) ? 1 : 0;
    for (int child : vec[root]) {
        if (!visited[child]) {
            if (is_early) res += min(solve(child, true), solve(child, false));
            else res += solve(child, true);
        }
    }
    visited[root] = 0;
    return dp[root][is_early] = res;
}

int main() {
    fast_io;
    cin >> n;
    vec = vector<vector<int>>(n+1);
    for (int i = 0; i < n - 1; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }
    memset(visited, 0 ,sizeof(visited));
    memset(dp, -1, sizeof(dp));

    int ans = min(solve(1, false), solve(1, true));
    cout << ans << '\n';
    return 0;
}*/
