//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int row, col, num, sr, sc;
//int arr[40][40];
//int sticker[100][10][10];
//bool avail;
//
//struct info {
//    int row, col;
//};
//info tmp;
//vector<info> s;
//
//void rotate(int s_num) {		//90�� ȸ���ϴ� �Լ�, ��ƼĿ ��ȣ
//    int dup[10][10];
//    int r = s[s_num].row;
//    int c = s[s_num].col;
//    for (int i = 0; i < r; i++)
//        for (int j = 0; j < c; j++) {
//            dup[j][r - 1 - i] = sticker[s_num][i][j];
//            sticker[s_num][i][j] = 0;
//        }
//    for (int i = 0; i < c; i++)
//        for (int j = 0; j < r; j++)
//            sticker[s_num][i][j] = dup[i][j];
//    s[s_num].row = c;
//    s[s_num].col = r;
//}
//
//void check(int s_num) {		//��ƼĿ�� ���� �� �ִ��� Ȯ�� �ϴ� �Լ�, ��ƼĿ ��ȣ
//    sr = s[s_num].row;
//    sc = s[s_num].col;
//    for (int i = 0; i <= row - sr; i++) {
//        for (int j = 0; j <= col - sc; j++) {
//            bool add = true;
//            for (int k = 0; k < sr; k++) {
//                for (int m = 0; m < sc; m++) {
//                    if (sticker[s_num][k][m] && arr[i + k][j + m]) {
//                        add = false;
//                        break;
//                    }
//                }
//                if (!add) break;
//            }
//            if (add) {
//                avail = true;
//                for (int k = 0; k < sr; k++)
//                    for (int m = 0; m < sc; m++)
//                        if (sticker[s_num][k][m] == 1)
//                            arr[i + k][j + m] = 1;
//                break;
//            }
//        }
//        if (avail) 	break;
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> row >> col >> num;
//    for (int k = 0; k < num; k++) {
//        cin >> sr >> sc;
//        tmp.col = sc;
//        tmp.row = sr;
//        s.push_back(tmp);
//        for (int i = 0; i < sr; i++)
//            for (int j = 0; j < sc; j++)
//                cin >> sticker[k][i][j];
//    }
//    for (int k = 0; k < num; k++) {
//        avail = false;		//���� �� �ִ��� ����
//        check(k);				//���� ���·� ���� �� �ִ°�
//        if (avail) continue;
//        for (int i = 0; i < 3; i++) {
//            rotate(k);			//90�� ȸ��
//            check(k);
//            if (avail) break;		//���� �� �ִٸ� ���̰� ���� ��ƼĿ
//        }
//    }
//    int result = 0;
//    for (int i = 0; i < row; i++)
//        for (int j = 0; j < col; j++)
//            if (arr[i][j] == 1)
//                result++;
//    cout << result;
//    return 0;
//}