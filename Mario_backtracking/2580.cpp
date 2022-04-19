//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, sudoku[10][10];
//vector<pii> blank;
//
//bool is_promising(int num, int idx) {
//    auto [r, c] = blank[idx];
//
//    for (int i = 0; i < 9; i++) {
//        if (sudoku[r][i] == num || sudoku[i][c] == num) return false;
//    }
//    int r2 = (r / 3) * 3, c2 = (c / 3) * 3;
//
//    for (int i = r2; i < r2 + 3; i++) {
//        for (int j = c2; j < c2 + 3; j++) {
//            if (sudoku[i][j] == num) return false;
//        }
//    }
//    return true;
//}
//
//void back_tracking(int idx) {
//
//    if (idx == N) {
//        for (int i = 0; i < 9; i++) {
//            for (int j = 0; j < 9; j++) {
//                cout << sudoku[i][j] << ' ';
//            }
//            cout << '\n';
//        }
//        exit(0);
//    }
//
//    for (int i = 1; i <= 9; i++) {
//        if (is_promising(i, idx)) {
//            auto [r,c] = blank[idx];
//            sudoku[r][c] = i;
//            back_tracking(idx+1);
//            sudoku[r][c] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            cin >> sudoku[i][j];
//            if (sudoku[i][j] == 0)
//                blank.emplace_back(i,j);
//        }
//    }
//    N = (int)blank.size();
//    back_tracking(0);
//}