////https://yabmoons.tistory.com/161
//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n,m,k;
//
//vector<pii> ground[11][11];
//int cur_food[11][11]; //현재 남아 있는 양분의 양
//int food[11][11]; //겨울에 각 칸에 추가되는 양분의 양
//int new_tree_cnt[11][11];
//int dx[] = {1,1,1,-1,-1,-1, 0,0};
//int dy[] = {-1,0,1,-1,0,1,-1,1};
//
//void spring_summer() {
//
//   for (int i = 1; i <= n; i++) {
//       for (int j = 1; j <= n; j++) {
//           int total_add = food[i][j];
//
//           for (int t = ground[i][j].size()-1; t >= 0; t--) {
//               auto [age, cnt] = ground[i][j][t];
//
//               if (age * cnt <= cur_food[i][j]) {
//                   cur_food[i][j] -= age * cnt;
//                   ground[i][j][t].first++;
//               }else {
//                   int e = t + 1;
//                   int alive = cur_food[i][j] / age,
//                   dead = ground[i][j][t].second - alive;
//
//                   if (alive) {
//                       cur_food[i][j] -= alive * age;
//                       ground[i][j][t].first++;
//                       ground[i][j][t].second = alive;
//                       e--;
//                   }
//                   total_add += dead * (age >> 1);
//                   for (t--; t >= 0; t--) total_add += (ground[i][j][t].first >> 1) * ground[i][j][t].second;
//
//                   ground[i][j].erase(begin(ground[i][j]), begin(ground[i][j]) + e);
//               }
//           }
//           cur_food[i][j] += total_add;
//       }
//   }
//}
//
//void winter() {
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            for (auto [age, cnt] : ground[i][j]) {
//                if (age % 5 == 0) {
//                    for (int d = 0; d < 8; d++) {
//                        int nx = i + dx[d], ny = j + dy[d];
//                        if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
//                            if (!ground[nx][ny].empty() && ground[nx][ny].back().first == 1)
//                                ground[nx][ny].back().second += cnt;
//                            else ground[nx][ny].push_back({1, cnt});
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//int main() {
//    fast_io;
//    cin >> n >> m >> k;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> food[i][j];
//            cur_food[i][j] = 5;
//        }
//    }
//    for (int i = 1; i <= m; i++) {
//        int x, y, age;
//        cin >> x >> y >> age;
//        ground[x][y].push_back({age,1});
//    }
//
//    for (int ii = 0; ii < k; ii++) {
//        //봄,여름,가을,겨울
//        spring_summer();
//        winter();
//    }
//
//    int res = 0;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (!ground[i][j].empty()) {
//                for (auto [age, cnt] : ground[i][j])
//                    res += cnt;
//            }
//        }
//    }
//    cout << res;
//}