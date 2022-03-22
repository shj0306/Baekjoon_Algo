//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int p, w;
//int bw, cw, res;
//vector<vector<pii>> adj;
//int checked[1001][1001];
//
//void bfs() {
//    queue<pii> q;
//   q.push({bw, 1001});
//    while(!q.empty()) {
//        auto [now, min_wid] = q.front();
//        q.pop();
//
//        if (now == cw) {
//            res = max(res, min_wid);
//            continue;
//        }
//        for (auto [nxt, width] : adj[now]) {
//            int tmp_wid = min(min_wid, width);
//            if (checked[now][nxt] < tmp_wid) {
//                checked[now][nxt] = tmp_wid;
//                q.push({nxt, tmp_wid});
//            }
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> p >> w;
//    cin >> bw >> cw;
//
//    adj.resize(p+1);
//
//    for (int i = 1; i <= w; i++) {
//        int b, c, cost;
//        cin >> b >> c >> cost;
//        adj[b].emplace_back(c, cost);
//        adj[c].emplace_back(b, cost);
//    }
//
//    bfs();
//    cout << res;
//}