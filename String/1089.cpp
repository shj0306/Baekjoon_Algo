//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 9;
//char board[5][4 * MAX];
//int trans_num[MAX][5][3];
//void input(int N);
//bool check(int N, const vector<vector<int>> &candi);
//double avg;
//
//int num[10][5][3] = {
//        {{1,1,1},{1,0,1},{1,0,1},{1,0,1},{1,1,1}}, //0
//        {{0,0,1},{0,0,1},{0,0,1},{0,0,1},{0,0,1}}, //1
//        {{1,1,1},{0,0,1},{1,1,1},{1,0,0},{1,1,1}}, //2
//        {{1,1,1},{0,0,1},{1,1,1},{0,0,1},{1,1,1}}, //3
//        {{1,0,1},{1,0,1},{1,1,1},{0,0,1},{0,0,1}}, //4
//        {{1,1,1},{1,0,0},{1,1,1},{0,0,1},{1,1,1}}, //5
//        {{1,1,1},{1,0,0},{1,1,1},{1,0,1},{1,1,1}}, //6
//        {{1,1,1},{0,0,1},{0,0,1},{0,0,1},{0,0,1}}, //7
//        {{1,1,1},{1,0,1},{1,1,1},{1,0,1},{1,1,1}}, //8
//        {{1,1,1},{1,0,1},{1,1,1},{0,0,1},{1,1,1}}  //9
//};
//
//bool is_possible(int num2[5][3], int i) {
//    for (int ii = 0; ii < 5; ii++) {
//        for (int jj = 0; jj < 3; jj++) {
//            if (num2[ii][jj] == 1 && num[i][ii][jj] == 0)
//                return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    fast_io;
//    int N;
//    cin >> N;
//    vector<vector<int>> candi(N);
//    input(N);
//
//    int idx = 0, stop = 3;
//    for (int i = 0; i < 4 * N - 1; i++) {
//        if (i == stop) { //빈 공간
//            stop += 4;
//            idx++;
//            continue;
//        }
//        for (int j = 0; j < 5; j++) {
//            if (board[j][i] == '#') trans_num[idx][j][i % 4] = 1;
//            else trans_num[idx][j][i % 4] = 0;
//        }
//    }
//
//    for (int j = 0; j < N; j++) {
//        for (int i = 0; i <= 9; i++) {
//            if (is_possible(trans_num[j], i)) { //j번째 상태가 i로 만들어질 수 있는 지
//                candi[j].push_back(i);
//            }
//        }
//    }
//
//    if (check(N, candi)) cout << -1 << '\n';
//    else {
//        for (int i = 0; i < N; i++) {
//            double s = 0;
//            for (auto val : candi[i]) s += val;
//            s *= pow(10,N-i-1);
//            s /= candi[i].size();
//            avg += s;
//        }
//        printf("%.5f\n", avg);
//    }
//}
//
//bool check(int N, const vector<vector<int>> &candi) {
//    for (int i = 0; i < N; i++) {
//        if (candi[i].empty())
//            return true;
//    }
//    return false;
//}
//
//void input(int N) {
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 4 * N - 1; j++) {
//            cin >> board[i][j];
//        }
//    }
//}
//
////자리수마다 평균을 구하고, 그 값들을 더해 전체 수의 평균을 구한다.
//