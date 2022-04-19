//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, indegree[10001], dist[10001];
//vector<vector<int>> adj;
//vector<int> T;
//
//int main() {
//    fast_io;
//    cin >> N;
//    adj.resize(N+1);
//    T.resize(N+1);
//
//    for (int i = 1; i <= N; i++) {
//        int time, cnt;
//        cin >> time >> cnt;
//        T[i] = time;
//        for (int j = 0; j < cnt; j++) {
//            int pre; cin >> pre;
//            adj[pre].push_back(i);
//        }
//        indegree[i] += cnt;
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) {
//            q.push(i);
//            dist[i] = T[i];
//        }
//    }
//
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        for (int nxt : adj[cur]) {
//            dist[nxt] = max(dist[nxt], dist[cur] + T[nxt]);
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//    int ans = 0;
//    for (int i = 1; i <= N; i++) ans = max(ans, dist[i]);
//    cout << ans;
//}