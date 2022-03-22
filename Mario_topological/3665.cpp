//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 501;
//int N, M;
//int indegree[MAX];
//int res[MAX];
//vector<vector<int>> adj;
//vector<int> past1, past2;
//
//void solve(queue<int> q) {
//    for (int i = 1; i <= N; i++) {
//        if (q.empty()) {
//            cout << "IMPOSSIBLE" << '\n';
//            return;
//        }
//        if (q.size() > 1) {
//            cout << '?' << '\n';
//            return;
//        }
//        int cur = q.front();
//        q.pop();
//        res[i] = cur;
//        for (auto nxt : adj[cur]) {
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//    for (int i = 1; i <= N; i++) cout << res[i] << ' ';
//    cout << '\n';
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    for (int t = 0; t < T; t++) {
//        cin >> N;
//        fill(indegree+1, indegree+N+1, 0);
//        past1 = vector<int>(N+1);
//        past2 = vector<int>(N+1);
//        adj = vector<vector<int>>(N+1);
//        for (int i = 1; i <= N; i++) {
//            int team; cin >> team;
//            past1[i] = team;
//            past2[team] = i;
//            indegree[team] = i-1;
//        }
//        for (int i = 1; i <= N; i++) {
//            int team = past1[i];
//            for (int j = i+1; j <= N; j++) adj[team].push_back(past1[j]);
//        }
//        cin >> M;
//        for (int i = 1; i <= M; i++) {
//            int team1, team2;
//            cin >> team1 >> team2;
//            if (past2[team1] < past2[team2]) { //team1의 순위가 더 좋았다면
//                indegree[team1]++;
//                indegree[team2]--;
//                adj[team1].erase(find(all(adj[team1]), team2));
//                adj[team2].push_back(team1);
//            }else { //team2의 순위가 더 좋았다면
//                indegree[team1]--;
//                indegree[team2]++;
//                adj[team2].erase(find(all(adj[team2]), team1));
//                adj[team1].push_back(team2);
//            }
//        }
//
//        queue<int> q;
//        for (int i = 1; i <= N; i++) {
//            if (indegree[i] == 0) q.push(i);
//        }
//        solve(q);
//    }
//}