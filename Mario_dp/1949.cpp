//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, town[10001], dp[10001][2];
//bool visited[10001];
//vector<vector<int>> tree;
//
//int solve(int node, int state) {
//
//    if (dp[node][state] != -1) return dp[node][state];
//    int res = (state == 1 ? town[node] : 0);
//    visited[node] = true;
//
//    for (int nxt : tree[node]) {
//        if (!visited[nxt]) {
//            if (state) res += solve(nxt, 0);
//            else res += max(solve(nxt, 0), solve(nxt, 1));
//        }
//    }
//    visited[node] = false;
//    return dp[node][state] = res;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    tree.resize(N+1);
//
//    for (int i = 1; i <= N; i++) cin >> town[i];
//    memset(dp, -1, sizeof(dp));
//
//    for (int i = 1; i < N; i++) {
//        int u, v; cin >> u >> v;
//        tree[u].push_back(v);
//        tree[v].push_back(u);
//    }
//
//    cout << max(solve(1, 0), solve(1, 1)) << '\n';
//}