//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, ans[2], res, chess[10][10];
//int L[20], R[20];
//
///*
// * 체스판을 두 경우로 나누어서 푼다.
// * https://j2wooooo.tistory.com/80
// */
//
//void back_tracking(int r, int c, int cnt, int type) {
//
//    if (c >= N) {
//        r++;
//        if (c % 2 == 0) c = 1;
//        else c = 0;
//    }
//    if (r >= N) {
//        ans[type] = max(ans[type], cnt);
//        return;
//    }
//
//    if (chess[r][c] && !L[r+c] && !R[r-c+N]) {
//        L[r+c] = R[r-c+N] = 1;
//        back_tracking(r,c+2, cnt+1, type);
//        L[r+c] = R[r-c+N] = 0;
//    }
//    back_tracking(r, c+2, cnt, type);
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> chess[i][j];
//        }
//    }
//
//    back_tracking(0,0,0,0);
//    back_tracking(0,1,0,1);
//    cout << ans[0] + ans[1];
//}