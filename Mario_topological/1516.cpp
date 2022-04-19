//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, val, indegree[501], dist[501];
//vector<int> build;
//vector<vector<int>> adj;
//
//int main() {
//    fast_io;
//    cin >> N;
//    build.resize(N+1);
//    adj.resize(N+1);
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> val;
//            if (val == -1) break;
//            if (j == 0) build[i] = val;
//            else {
//                adj[val].push_back(i);
//                indegree[i]++;
//            }
//        }
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) {
//            q.push(i);
//            dist[i] = build[i];
//        }
//    }
//
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        for (int nxt : adj[cur]) {
//            dist[nxt] = max(dist[nxt], dist[cur] + build[nxt]);
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//
//    for (int i = 1; i <= N; i++) {
//        cout << dist[i] << '\n';
//    }
//}