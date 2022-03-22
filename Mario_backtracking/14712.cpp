//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//#define f first
//#define s second;
//
//int N, M, res;
//int sqsq[26][26];
//
//bool check(int r, int c) {
//    if (r > 1 && c > 1) return sqsq[r - 1][c] && sqsq[r][c - 1] && sqsq[r - 1][c - 1];
//    return false;
//}
//
//void solve(int row, int col) {
//    if (row == N+1) {
//        res++;
//        return;
//    }
//    if (col == M+1){
//        solve(row+1, 1);
//    }else {
//        solve(row, col+1);
//        if (!check(row, col)) {
//            sqsq[row][col] = 1;
//            solve(row, col+1);
//            sqsq[row][col] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    solve(1,1);
//    cout << res << '\n';
//}