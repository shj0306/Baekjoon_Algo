//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 51;
//const int IMP = 64;
//int N, M, ans = IMP;
//char chess[MAX][MAX];
//void input();
//int solve();
//
//int paint(int row, int col) {
//    int cnt = 0;
//    //첫시작 무조건 B로 잡는다.
//    char _cur = 'B';
//    for (int i = row; i < row + 8; i++) {
//        if (i > row) _cur = (_cur == 'B') ? 'W' : 'B';
//        for (int j = col; j < col + 8; j++) {
//            if (chess[i][j] != _cur) cnt++;
//            _cur = (_cur == 'B') ? 'W' : 'B';
//        }
//    }
//    return min(cnt, 64 - cnt);
//}
//
//int main() {
//    fast_io;
//    input();
//    cout << solve() << '\n';
//}
//
//int solve() {
//    for (int i = 0; i <= N - 8; i++) {
//        for (int j = 0; j <= M-8; j++) {
//            ans = min(ans, paint(i, j));
//        }
//    }
//    return ans;
//}
//
//void input() {
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            cin >> chess[i][j];
//        }
//    }
//}
