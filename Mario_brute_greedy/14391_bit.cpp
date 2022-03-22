//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//int paper[4][4];
//
//int main() {
//    fast_io;
//    int n, m; cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            char c; cin >> c;
//            paper[i][j] = c - '0';
//        }
//    }
//    int res = 0;
//
//    //0 : 가로, 1: 세로
//    for (int s = 0; s < (1 << (n*m)); s++) {
//        int sum = 0;
//        //가로 찾기
//        for (int i = 0; i < n; i++) {
//            int cur = 0;
//            for (int j = 0; j < m; j++) {
//                int k = i * m + j;
//                if ((s & (1 << k)) == 0) {
//                    cur = cur * 10 + paper[i][j];
//                }else {
//                    sum += cur;
//                    cur = 0;
//                }
//            }
//            sum += cur;
//        }
//        //세로 찾기
//        for (int j = 0; j < m; j++) {
//            int cur = 0;
//            for (int i = 0; i < n; i++) {
//                int k = i * m + j;
//                if ((s & (1<<k)) != 0) {
//                    cur = cur * 10 + paper[i][j];
//                }else {
//                    sum += cur;
//                    cur = 0;
//                }
//            }
//            sum += cur;
//        }
//        res = max(res, sum);
//    }
//    cout << res;
//}