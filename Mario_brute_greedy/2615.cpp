//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int board[20][20];
//
//bool check(int r, int c, int num) {
//    //r,c 기준 왼쪽 + 오른쪽 길이 확인
//    int tmp1 = 0, tmp2 = 0;
//    for (int i = c-1; i >= 1; i--) {
//        if (board[r][i] != num) break;
//        else tmp1++;
//    }
//    for (int i = c+1; i <= 19; i++) {
//        if (board[r][i] != num) break;
//        else tmp2++;
//    }
//    if (tmp1 + tmp2 + 1 == 5) return true;
//    //r,c 기준 위 + 아래 길이 확인
//    tmp1 = tmp2 = 0;
//    for (int i = r-1; i >= 1; i--) {
//        if (board[i][c] != num) break;
//        else tmp1++;
//    }
//    for (int i = r+1; i <= 19; i++) {
//        if (board[i][c] != num) break;
//        else tmp2++;
//    }
//    if (tmp1 + tmp2 + 1 == 5) return true;
//    //r,c 기준 왼쪽 위 대각선 + 오른쪽 아래 대각선 길이 확인
//    tmp1 = tmp2 = 0;
//    for (int i = r-1, j = c-1; i >= 1 && j >= 1; i--, j--) {
//        if (board[i][j] != num) break;
//        else tmp1++;
//    }
//    for (int i = r+1, j = c+1; i <= 19 && j <= 19; i++, j++) {
//        if (board[i][j] != num) break;
//        else tmp2++;
//    }
//    if (tmp1+tmp2+1 == 5) return true;
//
//    //r,c 기준 오른쪽 위 대각선 + 왼쪽 아래 대각선 길이 확인인
//   tmp1 = tmp2 = 0;
//    for (int i = r-1, j = c+1; i >= 1 && j <= 19; i--, j++) {
//        if (board[i][j] != num) break;
//        else tmp1++;
//    }
//    for (int i = r+1, j = c-1; i <= 19 && j >= 1; i++, j--) {
//        if (board[i][j] != num) break;
//        else tmp2++;
//    }
//
//    if (tmp1+tmp2+1 == 5) return true;
//
//    return false;
//}
//
//int main() {
//
//    for (int i = 1; i <= 19; i++) {
//        for (int j = 1; j <= 19; j++) {
//            cin >> board[i][j];
//        }
//    }
//
//    for (int i = 1; i <= 19; i++) {
//        for (int j = 1; j <= 19; j++) {
//            if (board[j][i] == 1) {
//                if (check(j, i, 1)) {
//                    cout << 1 << '\n' << j << ' ' << i;
//                    return 0;
//                }
//            }else if (board[j][i] == 2) {
//                if (check(j, i, 2)) {
//                    cout << 2 << '\n' << j << ' ' << i;
//                    return 0;
//                }
//            }
//        }
//    }
//    cout << 0 << '\n';
//}
//
///*
// * 검은색이 이겼을 경우에는 1을,
// * 흰색이 이겼을 경우에는 2를,
// * 아직 승부가 결정되지 않았을 경우에는 0
// *
// * 가장 왼쪽 위에 있는 바둑알 가로줄 번호, 세로줄 번호 출력
// */