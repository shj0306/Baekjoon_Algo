//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, res, col[15]; //col[i] = row i열에 row행에 퀸이 존재한다.
//
//bool is_possible(int r, int c) {
//    for (int i = 1; i < c; i++) {
//        if (col[i] == r || abs(col[i]-r) == abs(i-c)) return false;
//    }
//    return true;
//}
//
//void NQueen(int c) {
//
//    if (c == N+1) {
//        res++;
//        return;
//    }
//    for (int r = 1; r <= N; r++) {
//        if (is_possible(r, c)) {
//            col[c] = r;
//            NQueen(c+1);
//            col[c] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    NQueen(1);
//    cout << res;
//}