//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//int N, parent[MAX];
//bool visited[MAX];
//vector<vector<int>> tree;
//
//void dfs(int root) {
//    visited[root] = true;
//
//    for (auto nxt : tree[root]) {
//        if (!visited[nxt]) {
//            parent[nxt] = root;
//            dfs(nxt);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    tree.resize(N+1);
//
//    for (int i = 0; i < N-1; i++) {
//        int u, v; cin >> u >> v;
//        tree[u].push_back(v);
//        tree[v].push_back(u);
//    }
//    dfs(1);
//
//    for (int node = 2; node <= N; node++) {
//        cout << parent[node] << '\n';
//    }
//}