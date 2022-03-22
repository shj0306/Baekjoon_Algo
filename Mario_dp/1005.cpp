//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int n, k, w, indegree[1001], dist[1001];
//
//int main() {
//    fast_io;
//    int t; cin >> t;
//    while(t--) {
//        cin >> n >> k;
//        vector<int> T(n+1);
//        vector<vector<int>> V(n+1);
//        memset(indegree, 0, sizeof(indegree));
//        memset(dist, -1, sizeof(indegree));
//        for (int i = 1; i <= n; i++) cin >> T[i];
//        for (int i = 0; i < k; i++) {
//            int x, y; cin >> x >> y;
//            indegree[y]++;
//            V[x].push_back(y);
//        }
//
//        queue<int> q;
//        for (int i = 1; i <= n; i++){
//            if (indegree[i] == 0) {
//                q.push(i);
//                dist[i] = T[i];
//            }
//        }
//
//        cin >> w;
//        while(!q.empty()) {
//            int cur = q.front();
//            q.pop();
//
//            for (auto nxt : V[cur]) {
//                if (--indegree[nxt] == 0) q.push(nxt);
//                dist[nxt] = max(dist[nxt], dist[cur] + T[nxt]);
//            }
//        }
//        cout << dist[w] << '\n';
//    }
//}