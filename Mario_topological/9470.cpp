//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, K, M, P, indegree[1001], stra[1001], cnt[1001];
//vector<vector<int>> adj;
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> K >> M >> P;
//        adj = vector<vector<int>> (M+1);
//        memset(indegree,0,sizeof(indegree));
//        memset(stra,0,sizeof(stra));
//
//        for (int i = 0; i < P; i++) {
//            int u, v; cin >> u >> v;
//            indegree[v]++;
//            adj[u].push_back(v);
//        }
//
//        queue<int> q;
//        for (int i = 1; i <= M; i++) {
//            if (indegree[i] == 0) {
//                q.push(i);
//                stra[i] = 1;
//            }
//        }
//
//        while(!q.empty()) {
//            int cur = q.front();
//            q.pop();
//
//            for (int nxt : adj[cur]) {
//                if (stra[nxt] < stra[cur]) {
//                    stra[nxt] = stra[cur];
//                    cnt[nxt] = 1;
//                }else if (stra[nxt] == stra[cur]) cnt[nxt]++;
//
//                if (--indegree[nxt] == 0) {
//                    if (cnt[nxt] > 1) stra[nxt]++;
//                    q.push(nxt);
//                }
//            }
//        }
//
//        int max_stra = 0;
//        for (int i = 1; i <= M; i++)
//            max_stra = max(max_stra, stra[i]);
//        cout << K << ' ' << max_stra << '\n';
//    }
//}