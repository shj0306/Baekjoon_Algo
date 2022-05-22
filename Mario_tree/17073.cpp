#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, u, v, visited[500001], leaf_cnt;
double W;
vector<vector<int>> tree;
/*
 * 물의 양 / 리프노드 수
 * https://imnotabear.tistory.com/28
 */

void dfs(int cur, int is_root) {

    if (!is_root && tree[cur].size() == 1) {
        leaf_cnt++;
        return;
    }
    visited[cur] = 1;
    for (auto nxt : tree[cur]) {
        if (!visited[nxt]) {
            dfs(nxt, false);
        }
    }
}

int main() {
    fast_io;
    cin >> N >> W;
    tree.resize(N+1);
    cout.precision(11);

    for (int i = 1; i < N; i++) {
        cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, true);

    cout << W / leaf_cnt;
}