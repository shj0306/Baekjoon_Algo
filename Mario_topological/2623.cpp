//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int N, M;
//int indegree[1001];
//int res[1001];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    vector<vector<int>> adj(N+1);
//    for (int i = 1; i <= M; i++) {
//        int num; cin >> num;
//        int prev = 0;
//        for (int j = 0; j < num; j++) {
//            int singer; cin >> singer;
//            if (prev) {
//                adj[prev].push_back(singer);
//                indegree[singer]++;
//            }
//            prev = singer;
//        }
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) q.push(i);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (q.empty()) {
//            puts("0");
//            return 0;
//        }
//        int cur = q.front();
//        res[i] = cur;
//        q.pop();
//        for (auto nxt : adj[cur]) {
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//
//    for (int i = 1; i <= N; i++) cout << res[i] << '\n';
//}
//
///*
// * 1. 들어오는 간선이 없는 정점을 큐에 모두 넣는다.
// * 2. 정점 개수만큼 이 행동을 반복한다: 큐의 front 원소를 빼서 그 정점에서 나가는 간선을 모두 삭제한다.
// * 이 때 진입차수가 0이 된 새로운 정점이 생기면 그 정점도 큐에 넣는다.
// * 3. 이 때 큐에서 빼는 정점 순서가 위상정렬 결과다.
// *
// * 루프를 정점의 개수만큼 돌기 전에 큐가 비어버리면 위상정렬이 불가능하다 -> 싸이클이 존재함
// * 큐의 크기가 2이상인 경우 => 위상정렬 결과가 2개 이상
// *
// * 간선 삭제 : 정점마다 진입차수의 개수만 세어주고 (u,v) 간선이 삭제 될 때 v의 indegree를 1감소시키면 된다.
// */