//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int MAX = 10001;
//
//int n;
//int W[MAX], dp[MAX][2];
//bool visited[MAX];
//vector<vector<int>> T;
//vector<int> res;
///*
// * 경로 출력
// */
//void trace(int now, int prev) {
//    if (dp[now][1] > dp[now][0] && !visited[prev]) {
//        res.push_back(now);
//        visited[now] = true;
//    }
//    for (auto nxt : T[now]) {
//        if (nxt == prev) continue;
//        trace(nxt, now);
//    }
//}
//
//int solve(int now, int is_sel) {
//    int &ret = dp[now][is_sel];
//    if (ret != 0) return ret;
//
//    visited[now] = true;
//    ret = (is_sel) ? W[now] : 0;
//
//    for (auto nxt : T[now]) {
//        if (!visited[nxt]) {
//            if (is_sel) ret += solve(nxt, 0);
//            else ret += max(solve(nxt, 1), solve(nxt, 0));
//        }
//    }
//    visited[now] = false;
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> W[i];
//
//    T.resize(n+1);
//    for (int i = 1; i < n; i++) {
//        int u, v; cin >> u  >> v;
//        T[u].push_back(v);
//        T[v].push_back(u);
//    }
//    cout << max(solve(1, 0), solve(1,1)) << '\n';
//    memset(visited,false,sizeof(visited));
//    trace(1,0);
//    sort(all(res));
//    for (auto val : res) cout << val << ' ';
//}