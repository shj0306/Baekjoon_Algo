//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int INF = -1e9;
//
//int n, town[10001], dp[10001][2];
//bool visited[10001];
//vector<vector<int>> tree;
//
////dp[now][is_good] : now번 마을이 is_good상태일 때
//// 해당 마을을 루트로 하는 서브트리의 우수마을들 인구수 최댓값
//void solve(int now) {
//    visited[now] = true;
//    dp[now][0] = 0;
//    dp[now][1] = town[now];
//
//    for (auto nxt : tree[now]) {
//        if (visited[nxt]) continue;
//        solve(nxt);
//        dp[now][0] += max(dp[nxt][0], dp[nxt][1]);
//        dp[now][1] += dp[nxt][0];
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> town[i];
//
//    tree.resize(n+1);
//    for (int i = 1; i < n; i++) {
//        int u, v; cin >> u >> v;
//        tree[u].push_back(v);
//        tree[v].push_back(u);
//    }
//    memset(visited, false, sizeof(visited));
//    solve(1);
//    cout << max(dp[1][0], dp[1][1]);
//}