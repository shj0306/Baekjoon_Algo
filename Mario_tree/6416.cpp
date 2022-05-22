#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, a, b, max_node;
bool is_possi, is_finish, is_unique;
vector<vector<int>> tree;
vector<int> P, visited;

void init() {
    tree.clear();
    P.clear();
    visited.clear();
}

void dfs(int root) {
    visited[root] = 1;
    for (auto ch : tree[root]) {
        if (visited[ch]) {
            is_unique = false;
            continue;
        }
        dfs(ch);
    }
}

int main() {
    fast_io;
    for (int t = 1; ; t++) {
        init();
        vector<pii> adj;
        max_node = 1;
        is_unique = true;
        is_finish = false;
        is_possi = true;
        int root_cnt = 0, root = -1;
        while(true) {
            cin >> a >> b;
            max_node = max(max_node, max(a,b));
            if (a == 0 && b == 0) break;
            if (a == -1 && b == -1) {
                is_finish = true;
                break;
            }
            adj.emplace_back(a,b);
        }
        if (is_finish) break;

        tree.resize(max_node+1);
        visited.resize(max_node+1, false);
        P.resize(max_node+1, 0);

        for (auto [p, c] : adj) {
            tree[p].push_back(c);
            if (P[c] == 0 || P[c] == -1) P[c] = p;
            else {
                is_possi = false;
                break;
            }
            if (P[p] == 0) P[p] = -1;
        }

        if (!is_possi) {
            cout << "Case " << t << " is not a tree." << '\n';
            continue;
        }

        for (int i = 1; i <= max_node; i++) {
            if (P[i] == -1) {
                root_cnt++;
                root = i;
            }
        }
        if (root_cnt != 1) {
            cout << "Case " << t << " is not a tree." << '\n';
            continue;
        }

        dfs(root);

        if (!is_unique) cout << "Case " << t << " is not a tree." << '\n';
        else cout << "Case " << t << " is a tree." << '\n';
    }
}