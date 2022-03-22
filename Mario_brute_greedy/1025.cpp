//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//#define f first
//#define s second;
//
//int N, M;
//int res = -1;
//int table[10][10];
//
//bool check(int _num) {
//    int root = (int)sqrt(_num);
//    return root * root == _num;
//}
//
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            char num;
//            cin >> num;
//            table[i][j] = num-'0';
//        }
//    }
//
//    //모든 칸에 대해 모든 행, 열의 등차 값에 대한 완전 탐색 실행
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            for (int dx = -N; dx < N; dx++) {
//                for (int dy = -M; dy < M; dy++) {
//                    if (dx == 0 && dy == 0) continue;
//                    int a = i, b= j;
//                    int now = 0;
//                    while (a >= 1 && a <= N && b >= 1 && b <= M) {
//                        now *= 10;
//                        now += table[a][b];
//                        if (check(now)) res = max(res, now);
//                        a += dx;
//                        b += dy;
//                    }
//                    if (check(now)) res= max(res, now);
//                }
//            }
//        }
//    }
//    cout << res;
//}
////https://qgqg264.tistory.com/83 참고