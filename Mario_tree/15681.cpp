//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//int N, R, Q;
//vector<vector<int>> adj, tree;
//int child_cnt[MAX];
//bool checked[MAX];
//
//int make_tree(int root) {
//    checked[root] = true;
//    for (int ch : adj[root]) {
//        if (!checked[ch]) {
//            tree[root].push_back(ch);
//            child_cnt[root] += make_tree(ch);
//        }
//    }
//    return child_cnt[root];
//}
//
//int main() {
//    fast_io;
//    cin >> N >> R >> Q;
//    adj.resize(N+1);
//    tree.resize(N+1);
//    fill(child_cnt, child_cnt + N + 1, 1);
//
//    for (int i = 1; i < N; i++) {
//        int u, v; cin >> u >> v;
//        adj[u].push_back(v);
//        adj[v].push_back(u);
//    }
//
//    make_tree(R);
//
//    for (int i = 0; i < Q; i++) {
//        int node; cin >> node;
//        cout << child_cnt[node] << '\n';
//    }
//}