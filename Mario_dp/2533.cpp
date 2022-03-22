//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using pll = pair<long long, long long>;
//const int MAX = 1e6 + 1;
//
//int n, checked[MAX];
//int dp[MAX][2];
//vector<vector<int>> tree;
//
////dp[root][is_ea] : 얼리어답터 상태가 is_ea일때 root를 루트로 하는 얼리어답터 최솟값
//int solve(int root, int is_ea) {
//    checked[root] = true;
//    int &ret = dp[root][is_ea];
//    if (ret != 0) return ret;
//    int res = (is_ea) ? 1 : 0;
//    for (auto child : tree[root]) {
//        if (!checked[child]) {
//            if (is_ea) res += min(solve(child, 1), solve(child, 0));
//            else res += solve(child, 1);
//        }
//    }
//    checked[root] = false;
//    return ret = res;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    tree.resize(n + 1);
//    memset(checked, true, sizeof(checked));
//
//    for (int i = 1; i < n; i++) {
//        int u, v;
//        cin >> u >> v;
//        tree[u].push_back(v);
//        tree[v].push_back(u);
//        checked[v] = false;
//    }
//
//    memset(checked, false, sizeof(checked));
//    cout << min(solve(1,1), solve(1,0));
//}