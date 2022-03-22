//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//#define f first
//#define s second;
//
//char coin[3][3];
//bool visited[512];
////0 혹은 511상태가 목표상태
//
//int col_change(int i, int state) {
//    int new_state = state;
//    for (int idx = i; idx < 9; idx += 3)
//        new_state ^= (1 << idx);
//    return new_state;
//}
//
//int row_change(int i, int state) {
//    int new_state = state;
//    for (int idx = 0; idx < 3; idx++)
//        new_state ^= (1 << (3 * i + idx));
//    return new_state;
//}
//
//int dia_change(int i, int state) {
//    int new_state = state;
//    if (i == 0) {
//        for (int idx = 0; idx < 9; idx += 4)
//            new_state ^= (1 << idx);
//    } else {
//        for (int idx = 2; idx < 8; idx += 2)
//            new_state ^= (1 << idx);
//    }
//    return new_state;
//}
//
//int bfs(int state) {
//    queue<pii> q;
//    visited[state] = true;
//    q.push({state, 0});
//    while (!q.empty()) {
//        auto[cur, cnt] = q.front();
//        q.pop();
//
//        if (cur == 0 || cur == 511) return cnt; //동전이 전부 앞면 혹은 뒷면
//
//        //col_change
//        for (int i = 0; i < 3; i++) {
//            int nxt = col_change(i, cur);
//            if (!visited[nxt]) {
//                visited[nxt] = true;
//                q.push({nxt, cnt + 1});
//            }
//        }
//
//        //row_change
//        for (int i = 0; i < 3; i++) {
//            int nxt = row_change(i, cur);
//            if (!visited[nxt]) {
//                visited[nxt] = true;
//                q.push({nxt, cnt + 1});
//            }
//        }
//
//        //diagonal_change
//        for (int i = 0; i <= 1; i++) {
//            int nxt = dia_change(i, cur);
//            if (!visited[nxt]) {
//                visited[nxt] = true;
//                q.push({nxt, cnt+1});
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    while (T--) {
//        int state = 0;
//        memset(visited, false, sizeof(visited));
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                cin >> coin[i][j];
//                if (coin[i][j] == 'H') state |= 1 << (9 - (3 * i) - j - 1);
//            }
//        }
//        cout << bfs(state) << '\n';
//    }
//}