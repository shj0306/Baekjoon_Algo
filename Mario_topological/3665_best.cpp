//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int indegree[501], res[501];
//vector<int> team_to_rank;
//vector<int> rank_to_team;
//int N, M;
//
//void solve(queue<int> q) {
//
//    for (int i = 1; i <= N; i++) {
//        if (q.empty()) {
//            cout << "IMPOSSIBLE" << '\n';
//            return;
//        }
//        if (q.size() > 1) {
//            cout << "?" << '\n';
//            return;
//        }
//        int cur = q.front();
//        q.pop();
//        res[i] = cur;
//        for (int j = 1; j <= N; j++) {
//            if (indegree[j] > indegree[cur]) {
//                if (--indegree[j] == 0) q.push(j);
//            }
//        }
//    }
//
//    for (int i = 1; i <= N; i++) cout << res[i] << ' ';
//    cout << '\n';
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    for (int t = 0; t < T; t++) {
//        cin >> N;
//        fill(indegree + 1, indegree + N + 1, 0);
//        team_to_rank = vector<int>(N + 1);
//        rank_to_team = vector<int>(N + 1);
//        for (int i = 1; i <= N; i++) {
//            int team;
//            cin >> team;
//            team_to_rank[team] = i;
//            rank_to_team[i] = team;
//            indegree[team] = i-1;
//        }
//
//        cin >> M;
//        for (int i = 1; i <= M; i++) {
//            int team1, team2;
//            cin >> team1 >> team2;
//            if (team_to_rank[team1] < team_to_rank[team2]) { //team1의 순위가 더 좋았다면
//                indegree[team1]++;
//                indegree[team2]--;
//            } else { //team2의 순위가 더 좋았다면
//                indegree[team1]--;
//                indegree[team2]++;
//            }
//        }
//        queue<int> q;
//        for (int i = 1; i <= N; i++) {
//            if (indegree[i] == 0) q.push(i);
//        }
//        solve(q);
//    }
//}