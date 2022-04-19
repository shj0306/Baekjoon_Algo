//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 500001;
//int N, ans;
//vector<vector<int>> tree;
//bool visited[MAX];
//
//void dfs(int cur, int depth) {
//
//    visited[cur] = true;
//    if (cur != 1 && tree[cur].size() == 1) {
//        ans += depth;
//        return;
//    }
//    for (int ch : tree[cur]) {
//        if (!visited[ch]) {
//            dfs(ch, depth+1);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    tree.resize(N+1);
//    for (int i = 1; i < N; i++) {
//        int a, b;
//        cin >> a >> b;
//        tree[a].push_back(b);
//        tree[b].push_back(a);
//    }
//    dfs(1, 0);
//    cout << (ans % 2 == 0 ? "No" : "Yes") << '\n';
//}