//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//// row[x][i] = x행에 i숫자가 있는 지
//// col[y][i] = y열에 i숫자가 있는 지
//// square[z][i] = z칸에 i숫자가 있는 지
//
//int row[9][10], col[9][10], square[9][10];
//int sudoku[9][9];
//vector<pair<int, int>> zero;
//int N;
//
//void back_tracking(int idx) {
//    if (idx == N) { //빈칸을 모두 채운 경우
//        for (int i = 0; i < 9; i++) {
//            for (int j = 0; j < 9; j++) {
//                cout << sudoku[i][j] << ' ';
//            }
//            cout << '\n';
//        }
//        exit(0);
//    }
//
//    auto [r, c] = zero[idx];
//
//    for (int num = 1; num <= 9; num++) {
//        int sq = (r / 3) * 3 + c / 3;
//        if (!row[r][num] && !col[c][num] && !square[sq][num]) {
//            row[r][num] = 1; col[c][num] = 1; square[sq][num] = 1;
//            sudoku[r][c] = num;
//            back_tracking(idx + 1);
//            row[r][num] = 0; col[c][num] = 0; square[sq][num] = 0;
//            sudoku[r][c] = 0;
//        }
//    }
//}
//int main() {
//    fast_io;
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            cin >> sudoku[i][j];
//            if (sudoku[i][j] == 0) {
//                N++;
//                zero.emplace_back(i, j);
//            }
//            else {
//                row[i][sudoku[i][j]] = 1;
//                col[j][sudoku[i][j]] = 1;
//                int sq = (i / 3) * 3 + j / 3;
//                square[sq][sudoku[i][j]] = 1;
//            }
//        }
//    }
//    back_tracking(0);
//    return 0;
//}
