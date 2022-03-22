//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 32001;
//int indegree[MAX];
//int res[MAX];
//int main() {
//    fast_io;
//    int N, M;
//    cin >> N >> M;
//    vector<vector<int>> adj(N+1);
//    for (int i = 0; i < M; i++) {
//        int s1, s2;
//        cin >> s1 >> s2;
//        indegree[s2]++;
//        adj[s1].push_back(s2);
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) q.push(i);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (q.empty()) {
//            cout << "IMPOSSIBLE" << '\n';
//            return 0;
//        }
//        int cur = q.front();
//        q.pop();
//        res[i] = cur;
//        for (auto nxt : adj[cur]) {
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//
//    for (int i = 1; i <= N; i++) cout << res[i] << '\n';
//}
///*
// * 학생 A가 학생 B의 앞에 서야 한다는 의미이다.
// * B보다 A가 먼저 선행되어야 한다. => 위상정렬
// */