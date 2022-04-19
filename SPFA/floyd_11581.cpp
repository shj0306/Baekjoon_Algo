//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int d[101][101];
//
//int main() {
//    fast_io;
//    int N,M,X; cin >> N;
//    for (int i = 1; i < N; i++) {
//        for (cin >> M; M--;) {
//            cin >> X;
//            d[i][X] = 1;
//        }
//    }
//
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                d[i][j] |= d[i][k] & d[k][j];
//            }
//        }
//    }
//
//    bool ans = false;
//    for (int i = 1; i <= N; i++) {
//        ans |= d[1][i] & d[i][i];
//    }
//    puts(ans ? "CYCLE" : "NO CYCLE");
//}