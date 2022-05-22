#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, node, leaf_cnt, P[51], visited[51];
vector<vector<int>> tree;

void dfs(int root) {
    visited[root] = 1;
    if (tree[root].empty() || (tree[root].size() == 1 && P[node] == root)) leaf_cnt++;
    for (auto nxt : tree[root]) {
        if (!visited[nxt]) {
            dfs(nxt);
        }
    }
}

int main() {
    fast_io;
    cin >> N;
    tree.resize(N);
    int root;

    for (int i = 0; i < N; i++) {
        int p; cin >> p;
        if (p == -1) {
            root = i;
            continue;
        }
        tree[p].push_back(i);
        P[i] = p;
    }
    cin >> node;
    visited[node] = 1;

    if (!visited[root]) dfs(root);
    cout << leaf_cnt;
}