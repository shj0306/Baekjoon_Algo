//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int N, M, ans, check[6][6];
//int arr[6][6], tmp;
//int dir[4][2][2] = {{{0,-1},{1,0}},
//                 {{0,-1},{-1,0}},
//                 {{0,1},{-1,0}},
//                 {{0,1},{1,0}}};
//
//bool is_possible(int r1, int c1, int r2, int c2) {
//    return r1 >= 1 && r2 >= 1 && c1 >= 1 && c2 >= 1
//    && r1 <= N && r2 <= N && c1 <= M && c2 <= M && !check[r1][c1] && !check[r2][c2];
//}
//
//void back_tracking(int num, int val) {
//    if (num == N * M) {
//        ans = max(ans, val);
//        return;
//    }
//    int r = num / M + 1;
//    int c = num % M + 1;
//
//    if (check[r][c]) {
//        back_tracking(num+1, val);
//        return;
//    }
//
//    check[r][c] = true;
//    for (int i = 0; i < 4; i++) {
//        int dr1 = r + dir[i][0][0]; int dc1 = c + dir[i][0][1];
//        int dr2 = r + dir[i][1][0]; int dc2 = c + dir[i][1][1];
//
//        if (is_possible(dr1, dc1, dr2, dc2)) {
//            check[dr1][dc1] = true;
//            check[dr2][dc2] = true;
//            back_tracking(num+1,  val + arr[r][c] * 2 + arr[dr1][dc1] + arr[dr2][dc2]);
//            check[dr1][dc1] = false;
//            check[dr2][dc2] = false;
//        }
//    }
//
//    check[r][c] = false;
//    back_tracking(num+1, val);
//
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            cin >> arr[i][j];
//        }
//    }
//
//    back_tracking(0, 0);
//    cout << ans;
//
//}