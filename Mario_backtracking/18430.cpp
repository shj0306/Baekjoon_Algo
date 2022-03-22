//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//#define f first
//#define s second;
//const int MAX = 6;
//int N, M, res;
//bool checked[MAX][MAX];
//int boo[MAX][MAX];
//
//int d[4][2] = {{1,  0},
//               {0,  1},
//               {-1, 0},
//               {0,  -1}};
//
//bool is_possible(pii p1, pii p2) {
//    if (p1.first < 1 || p1.second < 1 || p1.first > N || p1.second > M) return false;
//    if (p2.first < 1 || p2.second < 1 || p2.first > N || p2.second > M) return false;
//    if (checked[p1.first][p1.second] || checked[p2.first][p2.second]) return false;
//    return true;
//}
//
//void solve(int r, int c, int sum) {
//
//    if (r == N + 1) {
//        res = max(res, sum);
//        return;
//    }
//    if (c == M + 1) {
//        solve(r + 1, 1, sum);
//        return;
//    }
//    if (!checked[r][c]) {
//        for (int k = 0; k < 4; k++) {
//            pii p1 = {r + d[k][0], c + d[k][1]};
//            pii p2 = {r + d[(k + 1) % 4][0], c + d[(k + 1) % 4][1]};
//
//            if (is_possible(p1, p2)) {
//                checked[r][c] = true;
//                checked[p1.first][p1.second] = true;
//                checked[p2.first][p2.second] = true;
//                solve(r, c + 1, sum + boo[r][c] * 2 + boo[p1.first][p1.second]
//                + boo[p2.first][p2.second]);
//                checked[r][c] = false;
//                checked[p1.first][p1.second] = false;
//                checked[p2.first][p2.second] = false;
//            }
//        }
//    }
//    solve(r, c+1, sum);
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            cin >> boo[i][j];
//        }
//    }
//
//    if (N < 2 || M < 2) {
//        cout << 0;
//        return 0;
//    }
//
//    solve(1,1,0);
//    cout << res;
//}