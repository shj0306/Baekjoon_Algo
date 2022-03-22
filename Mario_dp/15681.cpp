//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int MAX = 100001;
//
//int n, r, q;
//int dp[MAX];
//bool visited[MAX];
//vector<vector<int>> tree;
//
//int solve(int root) {
//    int &ret = dp[root];
//    if (root != r && tree[root].size() == 1) return ret = 1;
//    if (ret != 0) return ret;
//    visited[root] = true;
//    ret = 1;
//    for (auto child : tree[root]) {
//        if (!visited[child]) ret += solve(child);
//    }
//    visited[root] = false;
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> r >> q;
//    tree.resize(n+1);
//    for (int i = 1; i < n; i++) {
//        int u, v; cin >> u >> v;
//        tree[u].push_back(v);
//        tree[v].push_back(u);
//    }
//    solve(r);
//    for (int i = 0; i < q; i++) {
//        //print
//        int node; cin >> node;
//        cout << dp[node] << '\n';
//    }
//}