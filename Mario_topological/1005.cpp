//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 1001;
//int N, K, W;
//int indegree[MAX];
//int res[MAX];
//
///*
// * Algorithm : 1.위상정렬, 2.그래프, 3.dp
// *
// * 그래프를 통해서 건물 짓는 순서를 정해줘야 한다.
// * res라는 1차원 배열을 통해 각 건물의 최소 시간을 저장해 놓는다.
// */
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    for (int t = 0; t < T; t++) {
//        cin >> N >> K;
//        vector<int> building(N+1);
//        vector<vector<int>> adj(N+1);
//        fill(indegree, indegree + N+1, 0);
//        fill(res+1, res+N+1, 0);
//
//        for (int i = 1; i <= N; i++) cin >> building[i];
//
//        for (int i = 0; i < K; i++) {
//            int u,v; cin >> u >> v; //u -> v
//            adj[u].push_back(v);
//            indegree[v]++;
//        }
//        cin >> W;
//        queue<int> q;
//        for (int i = 1; i <= N; i++) {
//            if (indegree[i] == 0) {
//                res[i] = building[i];
//                q.push(i);
//            }
//        }
//        for (int i = 1; i <= N; i++) {
//            int curr = q.front();
//            q.pop();
//            for (int nxt : adj[curr]) {
//                res[nxt] = max(res[nxt], res[curr] + building[nxt]);
//                if (--indegree[nxt] == 0) q.push(nxt);
//            }
//            if (curr == W) {
//                cout << res[W] << '\n';
//                break;
//            }
//        }
//    }
//}