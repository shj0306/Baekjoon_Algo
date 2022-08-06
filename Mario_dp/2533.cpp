#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e6+1;
int N, dp[MAX][2], visited[MAX];
vector<vector<int>> tree;

int solve(int cur, int ea) { //현재 노드가 얼리어답터인지 아닌지

    int &ret = dp[cur][ea];
    if (ret != -1) return ret;

    visited[cur] = 1;
    ret = (ea ? 1 : 0);

    for (auto nxt : tree[cur]) {
        int cnt = 0;
        if (!visited[nxt]) {
            if (ea == 0) cnt = solve(nxt, 1);
            else cnt = min(solve(nxt, 1) , solve(nxt, 0));
            ret += cnt;
        }
    }
    visited[cur] = 0;

    return ret;
}

int main() {
    fast_io;
    cin >> N;
    tree.resize(N+1);

    for (int i = 1; i < N; i++) {
        int u, v; cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    memset(dp, -1, sizeof(dp));
    cout << min(solve(1, 0), solve(1,1)) << '\n';
}