/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 1000001;
int N;
vector<vector<int>> friends;
bool visited[MAX];
int dp[MAX][2];

int solve(int idx, int is_early) {
    visited[idx] = true;
    if (dp[idx][is_early] != -1) return dp[idx][is_early];
    int res = (is_early == 1) ? 1 : 0;
    for (auto nxt : friends[idx]) {
        if (!visited[nxt]) {
            if (is_early) res += min(solve(nxt, 0), solve(nxt,1));
            else res += solve(nxt, 1);
        }
    }
    visited[idx] = false;
    return dp[idx][is_early] = res;
}

int main() {
    fast_io;
    cin >> N;
    friends = vector<vector<int>>(N+1);
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < N-1; i++) {
        int u, v; cin >> u >> v;
        friends[u].push_back(v);
        friends[v].push_back(u);
    }
    int ans = min(solve(1,1), solve(1, 0));
    cout << ans << '\n';
}
*/
