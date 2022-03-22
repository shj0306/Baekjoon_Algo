//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 1001;
//int indegree[MAX];
//int main() {
//    fast_io;
//    int T, K, M, P; cin >> T;
//    for (int t = 0; t < T; t++) {
//        cin >> K >> M >> P;
//        vector<int> adj[MAX];
//        fill(indegree + 1, indegree + M + 1, 0);
//        for (int i = 0; i < P; i++) {
//            int src, des;
//            cin >> src >> des;
//            indegree[des]++;
//            adj[src].push_back(des);
//        }
//
//        queue<pair<int,int>> q;
//        vector<pair<int,int>> res(M+1, {0,0});
//
//        for (int i = 1; i <= M; i++) {
//            if (indegree[i] == 0) q.push({i,1});
//        }
//
//        for (int i = 1; i <= M; i++) {
//            if (q.empty()) {
//                cout << "IMPOSSIBLE" << '\n';
//                return 0;
//            }
//            auto [cur, idx] = q.front();
//            q.pop();
//            if (i == M) {
//                cout << K << ' ' << idx << '\n';
//                break;
//            }
//            for (auto nxt : adj[cur]) {
//                if (res[nxt].first < idx) {
//                    res[nxt].first = idx;
//                    res[nxt].second = 1;
//                }else if (res[nxt].first == idx) res[nxt].second++;
//                if (--indegree[nxt] == 0) {
//                    if (res[nxt].second >= 2) q.push({nxt, res[nxt].first + 1});
//                    else q.push({nxt, res[nxt].first});
//                }
//            }
//        }
//    }
//}