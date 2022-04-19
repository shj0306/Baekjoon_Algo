//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, final_dist;
//vector<vector<pii>> tree;
//bool visited[1001];
//
//void dfs(int cur, int node, int d) {
//    visited[cur] = true;
//    if (cur == node) {
//        final_dist = d;
//        return;
//    }
//
//    for (auto [nxt,dist] : tree[cur]) {
//        if (!visited[nxt]) {
//            dfs(nxt, node, d + dist);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    tree.resize(N+1);
//
//    for (int i = 1; i < N; i++) {
//        int u, v, dist;
//        cin >> u >> v >> dist;
//        tree[u].emplace_back(v, dist);
//        tree[v].emplace_back(u, dist);
//    }
//    for (int i = 0; i < M; i++) {
//        int u, v; cin >> u >> v;
//        final_dist = 0;
//        memset(visited, false, sizeof(visited));
//        dfs(u, v, 0);
//        cout << final_dist << '\n';
//    }
//}