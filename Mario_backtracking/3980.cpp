//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int T, N, arr[12][12], ans, pos[12];
//
//void back_tracking(int player, int val) {
//    if (player == 12) {
//        ans = max(ans, val);
//        return;
//    }
//    for (int j = 1; j <= 11; j++) {
//        if (arr[player][j] && !pos[j]) {
//            pos[j] = 1;
//            back_tracking(player + 1, val + arr[player][j]);
//            pos[j] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while (T--) {
//        ans = 0;
//        memset(pos, 0, sizeof(pos));
//        for (int i = 1; i <= 11; i++) {
//            for (int j = 1; j <= 11; j++) {
//                cin >> arr[i][j];
//            }
//        }
//
//        back_tracking(1, 0);
//        cout << ans << '\n';
//    }
//}