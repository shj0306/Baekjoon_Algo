//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 10001;
//const int INF = 1e8;
////topological sort, dp
//
//int n;
//int T[MAX], indegree[MAX], dist[MAX];
//vector<int> V[MAX];
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        int t, cnt; cin >> t >> cnt;
//        T[i] = t;
//        for (int j = 0; j < cnt; j++) {
//            int num; cin >> num;
//            V[num].push_back(i);
//            indegree[i]++;
//        }
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= n; i++) {
//        if (indegree[i] == 0) {
//            q.push(i);
//            dist[i] = T[i];
//        }
//    }
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        for (auto nxt : V[cur]) {
//            if (--indegree[nxt] == 0) q.push(nxt);
//            dist[nxt] = max(dist[nxt], dist[cur] + T[nxt]);
//        }
//    }
//
//    int res = 0;
//    for (int i = 1; i <= n; i++) res = max(res, dist[i]);
//    cout << res;
//}