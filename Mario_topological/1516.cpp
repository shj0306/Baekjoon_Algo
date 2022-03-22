//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int N;
//int indegree[501];
//int res[501];
//int main() {
//    fast_io;
//    cin >> N;
//    vector<int> time(N+1, 0);
//    vector<vector<int>> adj(N+1);
//    for (int i = 1; i <= N; i++) {
//        int t, num;
//        cin >> t;
//        time[i] = t;
//        while(cin >> num) {
//            if (num == -1) break;
//            indegree[i]++;
//            adj[num].push_back(i);
//        }
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) {
//            res[i] = time[i];
//            q.push(i);
//        }
//    }
//
//    //정점의 개수만큼 반복
//    for (int i = 1; i <= N; i++) {
////        if (q.empty()) { //싸이클 발생
////            cout << -1 << '\n';
////            return 0;
////        }
//        int cur = q.front();
//        q.pop();
//        for (auto nxt : adj[cur]) {
//            res[nxt] = max(res[nxt], res[cur] + time[nxt]);
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//    for (int i = 1; i <= N; i++) {
//        cout << res[i] << '\n';
//    }
//}
///*
// * 위상정렬 알고리즘
// * 각 정점의 진입차수 개수 저장후
// * 진입차수가 0인 정점을 큐에 넣는다.
// * 큐가 빈 상태가 될 때까지 큐에 있는 정점들의 진출간선을 제거하고
// * 그로 인해 생기는 새로운 진입차수가 0인 정점들을 큐에 넣어준다.
// */