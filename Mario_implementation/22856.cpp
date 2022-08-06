//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//int N, last_node, dist, visited[MAX];
//pii tree[MAX];
//
//void dfs(int root) {
//    auto [lc, rc] = tree[root];
//
//    if (lc != -1 && !visited[lc]) {
//        visited[lc] = 1;
//        dist++;
//        dfs(lc);
//        dist++;
//    }
//    if (rc != -1 && !visited[rc]) {
//        visited[rc] = 1;
//        dist++;
//        dfs(rc);
//        dist++;
//    }
//    if (root == last_node) {
//        cout << dist;
//        exit(0);
//    }
//}
//
//void find_final_node(int root) {
//    auto [lc, rc] = tree[root];
//
//    if (rc != -1) find_final_node(rc);
//    else last_node = root;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        int a,b,c;
//        cin >> a >> b >> c;
//        tree[a].first = b;
//        tree[a].second = c;
//    }
//
//    find_final_node(1); // 가장 마지막에 출력되는 노드를 구한다.
//    dfs(1);
//}