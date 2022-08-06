#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, W[10001], dp[10001][2], visited[10001];
vector<vector<int>> tree;
vector<int> ans;

int solve(int cur, int state) {
    int &ret = dp[cur][state];
    if (ret != -1) return ret;
    visited[cur] = 1;
    ret = (state ? W[cur] : 0);
    for (auto nxt : tree[cur]) {
        int cnt = 0;
        if (!visited[nxt]) {
            if (state) cnt = solve(nxt, 0);
            else cnt = max(solve(nxt, 0), solve(nxt, 1));
            ret += cnt;
        }
    }
    visited[cur] = 0;
    return ret;
}

void trackAnswer(int cur, int prev) {
    if (dp[cur][1] > dp[cur][0] && !visited[prev]) {
        ans.push_back(cur);
        visited[cur] = 1;
    }
    for (auto nxt : tree[cur]) {
        if (nxt == prev) continue;
        trackAnswer(nxt, cur);
    }
}

int main() {
    fast_io;
    cin >> N;
    tree.resize(N+1);

    for (int i = 1; i <= N; i++) cin >> W[i];

    for (int i = 1; i < N; i++) {
        int u,v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    memset(dp, -1, sizeof(dp));
    cout << max(solve(1, 0), solve(1,1)) << '\n';
    trackAnswer(1, 0);

    sort(all(ans));
    for (auto p : ans) cout << p << ' ';
}