//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 32001;
//int indegree[MAX];
//int res[MAX];
//
//int main() {
//    fast_io;
//    int N, M;
//    cin >> N >> M;
//    vector<int> adj[MAX];
//    for (int i = 0; i < M; i++) {
//        int p1, p2;
//        cin >> p1 >> p2;
//        indegree[p2]++;
//        adj[p1].push_back(p2);
//    }
//
//    priority_queue<int, vector<int>, greater<>> pq;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) pq.push(i);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (pq.empty()) {
//            cout << "IMPOSSIBLE" << '\n';
//            return 0;
//        }
//        int cur = pq.top();
//        pq.pop();
//        res[i] = cur;
//        for (auto nxt : adj[cur]) {
//            if (--indegree[nxt] == 0) pq.push(nxt);
//        }
//    }
//    for (int i = 1; i <= N; i++) cout << res[i] << ' ';
//}
///*
// * 문제 번호와 난이도가 비례한다.
// * N개의 문제는 모두 풀어야 한다.
// * 먼저 푸는 것이 좋은 문제가 있는 문제는, 먼저 푸는 것이 좋은 문제를 반드시 먼저 풀어야 한다.
// * 가능하면 쉬운 문제부터 풀어야 한다.
// *
// * 위상 정렬
// * priority_queue 최소힙
// * 3->1->4->2
// */