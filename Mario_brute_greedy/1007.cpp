////https://seongjuk.tistory.com/entry/BOJ-%EB%B0%B1%EC%A4%80-1007%EB%B2%88-%EB%B2%A1%ED%84%B0-%EB%A7%A4%EC%B9%AD
////N개의 좌표점이 주어지고 (N/2)개의 벡터를 만들 때, 모든 벡터의 합이 최소가 되는 크기를 구하는 문제
//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const double IMP = 1e9;
//int N;
//double ans;
//vector<pair<double, double>> loc;
//int check[21];
//
//void solve(int idx, int n) {
//    if (n == N / 2) {
//        double delta_x = 0, delta_y = 0;
//        for (int i = 0; i < N; i++) {
//            if (check[i] == 1) { //+
//                delta_x += loc[i].first;
//                delta_y += loc[i].second;
//            }else { //-
//                delta_x -= loc[i].first;
//                delta_y -= loc[i].second;
//            }
//        }
//        ans = min(ans, sqrt(pow(delta_x,2) + pow(delta_y,2)));
//    }
//    for (int i = idx; i < N; i++) {
//        if (!check[i]) {
//            check[i] = 1;
//            solve(i, n+1);
//            check[i] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    for (int t = 0; t < T; t++) {
//        //data
//        ans = IMP;
//        cin >> N;
//        loc = vector<pair<double, double>>(N);
//        fill(check, check+N, 0);
//        for (int i = 0; i < N; i++) cin >> loc[i].first >> loc[i].second;
//        //solve start
//        solve(0,0);
//        //print answer
//        printf("%.6f\n", ans);
//    }
//}
//