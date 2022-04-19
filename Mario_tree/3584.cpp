//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, N, parent[10001], root;
//set<int> par_set;
//
//void find_parent(int cur) {
//    if (cur == root) {
//        par_set.insert(cur);
//        return;
//    }
//    par_set.insert(cur);
//    find_parent(parent[cur]);
//}
//
//int dfs(int node) {
//    if (node == root) return root;
//    if (par_set.find(node) != par_set.end()) return node;
//    return dfs(parent[node]);
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N;
//        memset(parent, 0, sizeof(parent));
//        for (int i = 1; i < N; i++) {
//            int p, c;
//            cin >> p >> c;
//            parent[c] = p;
//        }
//        for (int i = 1; i <= N; i++) {
//            if (parent[i] == 0) {
//                root = i;
//                break;
//            }
//        }
//
//        int node1, node2;
//        cin >> node1 >> node2;
//        find_parent(node1);
//        cout << dfs(node2) << '\n';
//        par_set.clear();
//    }
//}