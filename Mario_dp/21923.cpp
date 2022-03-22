//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
//const int INF = -1e9;
//const int MAX = 1001;
//
//int n, m, arr[MAX][MAX];
//int dp1[MAX][MAX], dp2[MAX][MAX];
//int d1[][2] = {{-1,0}, {0,1}};
//int d2[][2] = {{1,0}, {0,1}};
//
//bool is_in(int r, int c) {
//    return r >= 1 && r <= n && c >= 1 && c <= m;
//}
//
//int solve1(int r, int c) {
//    if (r == n && c == 1) return arr[r][c];
//    int &ret = dp1[r][c];
//    if (ret != INF) return ret;
//    for (int i = 0; i < 2; i++) {
//        int nr = r + d1[i][1];
//        int nc = c + d1[i][0];
//        if (is_in(nr,nc)) ret = max(ret, solve1(nr,nc) + arr[r][c]);
//    }
//    return ret;
//}
//
//int solve2(int r, int c) {
//    if (r == n && c == m) return arr[r][c];
//    int &ret = dp2[r][c];
//    if (ret != INF) return ret;
//    for (int i = 0; i < 2; i++) {
//        int nr = r + d2[i][1];
//        int nc = c + d2[i][0];
//        if (is_in(nr,nc)) ret = max(ret, solve2(nr,nc) + arr[r][c]);
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            dp1[i][j] = dp2[i][j] = INF;
//        }
//    }
//
//    int res = INF;
//    //n,1에서 i,j까지 상승비행 후 i,j에서 n,m까지 하강 비행할 때 점수 값
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            res = max(res, solve1(i,j) + solve2(i,j));
//        }
//    }
//    cout << res;
//}
///*
// * (n,m)
// * (n,1) -> (i,j) 상향비행 => (i,j) => (n,1) 하향비행과 동치
// * (i,j) -> (n,m) 하향비행
// */