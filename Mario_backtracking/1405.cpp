//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, arr[35][35];
//double ans, dir_p[4];
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//
//void back_tracking(int cnt, int x, int y, double prob) {
//    if (cnt == N) {
//        ans += prob;
//        return;
//    }
//
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//
//        if (arr[ny][nx]) continue;
//        arr[ny][nx] = 1;
//        back_tracking(cnt+1, nx, ny, prob * dir_p[i]);
//        arr[ny][nx] = 0;
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < 4; i++) {
//        int p; cin >> p;
//        dir_p[i] = (double)p / 100;
//    }
//
//    arr[15][15] = 1;
//    back_tracking(0, 15, 15, 1.0);
//    printf("%.9lf\n", ans);
//}