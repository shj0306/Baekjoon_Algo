#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 10001;
const int INF = 1e5;
int N, u, ch1, ch2, cnt = 1, is_root[MAX];
vector<pii> tree;
pii res[MAX];

void DFS(int cur, int depth) {
    auto [lc, rc] = tree[cur];
    if (lc != -1) DFS(lc, depth+1);
    res[depth].first = min(res[depth].first, cnt);
    res[depth].second = max(res[depth].second, cnt++);
    if (rc != -1) DFS(rc, depth + 1);
}

int main() {
    fast_io;
    cin >> N;
    tree.resize(N+1);
    memset(is_root, true, sizeof(is_root));
    for (int i = 1; i <= N; i++) res[i].first = INF;

    for (int i = 1; i <= N; i++) {
        cin >> u >> ch1 >> ch2;
        tree[u].first = ch1;
        tree[u].second = ch2;
        is_root[ch1] = false;
        is_root[ch2] = false;
    }

    int root = -1;
    for (int i = 1; i <= N; i++) {
        if (is_root[i]) {
            root = i;
            break;
        }
    }
    DFS(root, 1);

    int num_lev = -1, max_lev = 0;
    for (int i = 1; i <= N; i++) {
        auto [l, r] = res[i];
        if (max_lev < r - l + 1) {
            max_lev = r - l + 1;
            num_lev = i;
        }
    }

    cout << num_lev << ' ' << max_lev;
}