//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, indegree[101], dist[101][101];
//vector<int> basic;
//vector<vector<pii>> adj;
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    adj.resize(N+1);
//
//    for (int i = 1; i <= M; i++) {
//        int x, y, k;
//        cin >> x >> y >> k;
//        adj[y].emplace_back(x,k);
//        indegree[x]++;
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) {
//            q.push(i);
//            dist[i][i] = 1;
//            basic.push_back(i);
//        }
//    }
//
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        for (auto [nxt, cnt] : adj[cur]) {
//            if (dist[cur][cur] != 1) { //not basic
//                for (int num : basic) {
//                    dist[nxt][num] += dist[cur][num] * cnt;
//                }
//            }else dist[nxt][cur] += cnt;
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//
//    for (int num : basic) {
//        cout << num << ' ' << dist[N][num] << '\n';
//    }
//}