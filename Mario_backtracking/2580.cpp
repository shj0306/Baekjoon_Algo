//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//#define f first
//#define s second;
//
//int sudoku[10][10], N;
//vector<pii> blank;
//
//bool is_possible(int r, int c, int num) {
//
//    int row = (r-1) / 3, col = (c-1) / 3;
//    for (int i = 1; i <= 9; i++) {
//        if (sudoku[r][i] == num) return false;
//        if (sudoku[i][c] == num) return false;
//        for (int ii = row * 3; ii < row * 3 + 3; ii++) {
//            for (int jj = col * 3; jj < col * 3 + 3; jj++) {
//                if (sudoku[ii+1][jj+1] == num) return false;
//            }
//        }
//    }
//    return true;
//}
//
//void solve(int idx) {
//    if (idx == N) { //모든 빈칸을 채운 다면
//        for (int i = 1; i <= 9; i++) {
//            for (int j = 1; j <= 9; j++) {
//                cout << sudoku[i][j] << ' ';
//            }
//            cout << '\n';
//        }
//        exit(0); //출력 후 바로 종료
//    }
//
//    auto [r, c] = blank[idx];
//
//    for (int i = 1; i <= 9; i++) {
//        if (is_possible(r, c, i)) {
//            sudoku[r][c] = i;
//            solve(idx+1);
//        }
//    }
//    sudoku[r][c] = 0;
//}
//
//int main() {
//    cin.tie(0)->sync_with_stdio(0);
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 1; j <= 9; j++) {
//            cin >> sudoku[i][j];
//            if (sudoku[i][j] == 0) {
//                N++;
//                blank.emplace_back(i, j);
//            }
//        }
//    }
//    solve(0);
//}