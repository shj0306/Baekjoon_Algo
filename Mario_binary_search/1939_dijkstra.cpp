//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 100001;
//const int INF = 1e9;
//int N, M, max_cost;
//int fac_1, fac_2;
//vector<vector<pii>> bridge;
//bool visited[MAX];
//int dist[MAX];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    bridge = vector<vector<pii>> (N+1);
//    for (int i = 0; i < M; i++) {
//        int a,b,c;
//        cin >> a >> b >> c; //a섬과 b섬 사이 중량제한 c인 다리
//        bridge[a].emplace_back(b,c);
//        bridge[b].emplace_back(a,c);
//        max_cost = max(max_cost, c);
//    }
//
//    cin >> fac_1 >> fac_2;
//    priority_queue<pii, vector<pii>, less<>> pq;
//    memset(visited, false, sizeof(visited));
//    fill(dist, dist+N+1, 0);
//    dist[fac_1] = INF;
//    pq.push(make_pair(INF,fac_1));
//
//    while(!pq.empty()) {
//        auto [cost, cur] = pq.top();
//        pq.pop();
//        if (visited[cur]) continue;
//        visited[cur] = true;
//        for (auto [nxt, w] : bridge[cur]) {
//            int new_cost = min(cost, w);
//            if (dist[nxt] < new_cost) {
//                dist[nxt] = new_cost;
//                pq.push({dist[nxt], nxt});
//            }
//        }
//    }
//    cout << dist[fac_2];
//}
////only dijkstra
////최대 힙을 활용