//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//const int MAX = 15;
//
//int N, res;
//int col[MAX];
//
//bool is_possible(int idx, int row) {
//    for (int i = 1; i < idx; i++) {
//        if (col[i] == row || abs(col[i] - row) == abs(i - idx)) return false;
//    }
//    return true;
//}
//
//void N_Queen(int idx) {
//    if (idx == N+1) {
//        res++;
//        return;
//    }
//    for (int row = 1; row <= N; row++) {
//        if (is_possible(idx, row)) { //해당 위치에 퀸을 놓아도 되는 지 확인
//            col[idx] = row;
//            N_Queen(idx+1);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    N_Queen(1); //1열부터 시작
//    cout << res;
//}