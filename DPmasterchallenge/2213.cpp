//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//const int MAX = 1e4+1;
//
//int N, W[MAX];
//int dp[MAX][2];
//bool visited[MAX];
//bool selected[MAX];
//vector<int> res;
//vector<vector<int>> tree;
//
//void track(int nodeNum, int prev) {
//    if (dp[nodeNum][1] > dp[nodeNum][0] && !selected[prev]) { //부모노드가 선택되지 않은 경우
//        selected[nodeNum] = true;
//        res.push_back(nodeNum);
//    }
//    for (auto nxt : tree[nodeNum]) {
//        if (nxt == prev) continue;
//        track(nxt, nodeNum);
//    }
//}
//
//int solve(int nodeNum, int is_sel) {
//
//    int &ret = dp[nodeNum][is_sel];
//    if (ret != 0) return ret;
//    ret = is_sel ? W[nodeNum] : 0;
//    visited[nodeNum] = true;
//
//    for (auto nxt : tree[nodeNum]) {
//        if (!visited[nxt]) {
//            if (is_sel) ret += solve(nxt, 0);
//            else ret += max(solve(nxt,0), solve(nxt,1));
//        }
//    }
//
//    visited[nodeNum] = false;
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    tree.resize(N + 1);
//    for (int i = 1; i <= N; i++) cin >> W[i];
//
//    for (int i = 0; i < N - 1; i++) {
//        int u, v;
//        cin >> u >> v;
//        tree[u].push_back(v);
//        tree[v].push_back(u);
//    }
//    cout << max(solve(1,1), solve(1, 0)) << '\n';
//    track(1,0);
//    sort(all(res));
//    for (auto val : res) cout << val << ' ';
//}