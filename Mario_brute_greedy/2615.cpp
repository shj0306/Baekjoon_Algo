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
//    //r,c ���� ���� + ������ ���� Ȯ��
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
//    //r,c ���� �� + �Ʒ� ���� Ȯ��
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
//    //r,c ���� ���� �� �밢�� + ������ �Ʒ� �밢�� ���� Ȯ��
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
//    //r,c ���� ������ �� �밢�� + ���� �Ʒ� �밢�� ���� Ȯ����
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
// * �������� �̰��� ��쿡�� 1��,
// * ����� �̰��� ��쿡�� 2��,
// * ���� �ºΰ� �������� �ʾ��� ��쿡�� 0
// *
// * ���� ���� ���� �ִ� �ٵϾ� ������ ��ȣ, ������ ��ȣ ���
// */