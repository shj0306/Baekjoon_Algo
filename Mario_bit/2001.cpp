//#include <bits/stdc++.h>
//#include <unordered_map>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int N, M, K, ans;
//int treasure[101];
//vector<pair<int,int>> island[101];
//bool check[101][1 << 14];
//
//int bit_count(int state) {
//    int ret = 0;
//    while(state != 0) {
//        ret += state % 2;
//        state >>= 1;
//    }
//    return ret;
//}
//
//void solve(int cur, int state) {
//    queue<pair<int, int>> q;
//    check[cur][state] = true;
//    q.push({cur, state});
//    while (!q.empty()) {
//        auto[cur_island, cur_state] = q.front();
//        q.pop();
//        int jewel_cnt = bit_count(cur_state);
//        if (cur_island == 1) ans = max(ans, jewel_cnt);
//        for (auto[nxt_idx, limit]: island[cur_island]) {
//            if (jewel_cnt <= limit) {
//                if (treasure[nxt_idx]) {
//                    int treasure_idx = treasure[nxt_idx] - 1;
//                    if (cur_state & (1 << treasure_idx)) { //해당 보석을 이미 갖고 있다면
//                        if (!check[nxt_idx][cur_state]) {
//                            check[nxt_idx][cur_state] = true;
//                            q.push({nxt_idx, cur_state});
//                        }
//                    }else { //해당 보석이 아직 없다면
//                        if (!check[nxt_idx][cur_state | 1 << treasure_idx]) {
//                            check[nxt_idx][cur_state | 1 << treasure_idx] = true;
//                            q.push({nxt_idx, cur_state | 1 << treasure_idx});
//                        }
//                        if (!check[nxt_idx][cur_state]) {
//                            check[nxt_idx][cur_state] = true;
//                            q.push({nxt_idx, cur_state});
//                        }
//                    }
//                }else { //섬에 보석이 없는 경우
//                    if (!check[nxt_idx][cur_state]) {
//                        check[nxt_idx][cur_state] = true;
//                        q.push({nxt_idx, cur_state});
//                    }
//                }
//            }
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M >> K;
//    memset(check, false, sizeof(check));
//    for (int i = 1; i <= K; i++) {
//        int town;
//        cin >> town;
//        treasure[town] = i;
//    }
//    for (int i = 1; i <= M; i++) {
//        int src, des, limit;
//        cin >> src >> des >> limit;
//        island[src].emplace_back(des, limit);
//        island[des].emplace_back(src, limit);
//    }
//    solve(1, 0);
//    cout << ans << '\n';
//}