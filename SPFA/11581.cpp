//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 101;
//vector<vector<int>> adj;
//int visited[MAX];
//
//int dfs(int cur) {
//    visited[cur] = 1;
//    for (int nxt : adj[cur]) {
//        if (visited[nxt] < 2) {
//            if (visited[nxt] == 1 || dfs(nxt)) return 1;
//        }
//    }
//    visited[cur] = 2;
//    return 0;
//}
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    adj = vector<vector<int>> (N+1);
//    for (int i = 1; i < N; i++) {
//        int cnt; cin >> cnt;
//        for (int j = 0; j < cnt; j++) {
//            int nxt; cin >> nxt;
//            adj[i].push_back(nxt);
//        }
//    }
//    printf("%s", dfs(1) ? "CYCLE" : "NO CYCLE");
//}