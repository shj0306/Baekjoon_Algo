//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, N, k, x, y, W, indegree[1001];
//int dist[1001];
//vector<int> build_time;
//vector<vector<int>> craft;
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N >> k;
//        memset(dist, 0, sizeof(dist));
//        memset(indegree, 0, sizeof(indegree));
//        craft = vector<vector<int>>(N+1);
//        build_time = vector<int>(N+1);
//
//        for (int i = 1; i <= N; i++) cin >> build_time[i];
//        for (int i = 0; i < k; i++) {
//            cin >> x >> y;
//            craft[x].push_back(y);
//            indegree[y]++;
//        }
//        cin >> W;
//        queue<int> q;
//        for (int i = 1; i <= N; i++) {
//            if (indegree[i] == 0) {
//                q.push(i);
//                dist[i] = build_time[i];
//            }
//        }
//        while(!q.empty()) {
//            int cur = q.front();
//            q.pop();
//
//            if (cur == W) break;
//            for (int nxt : craft[cur]) {
//                dist[nxt] = max(dist[nxt], dist[cur] + build_time[nxt]);
//                if (--indegree[nxt] == 0) q.push(nxt);
//            }
//        }
//
//        cout << dist[W] << '\n';
//    }
//}