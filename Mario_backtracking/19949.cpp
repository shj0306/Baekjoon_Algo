//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int answer[11], ans;
//
//void back_tracking(int idx, int cnt, int prev, int cont_cnt) {
//
//    if (cont_cnt == 3) return;
//    if (idx == 11) {
//        if (cnt >= 5) ans++;
//        return;
//    }
//
//    for (int i = 1; i <= 5; i++) {
//        if (prev == i) {
//            if (answer[idx] == i) back_tracking(idx + 1, cnt + 1, i, cont_cnt + 1);
//            else back_tracking(idx + 1, cnt, i, cont_cnt + 1);
//        } else {
//            if (answer[idx] == i) back_tracking(idx + 1, cnt + 1, i, 1);
//            else back_tracking(idx + 1, cnt, i, 1);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//
//    for (int i = 1; i <= 10; i++) cin >> answer[i];
//    back_tracking(1, 0, 0, 0);
//    cout << ans;
//}