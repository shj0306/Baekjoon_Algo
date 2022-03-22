//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int solve(int val, int cnt) {
//    if (val == 0) return cnt == 3 ? 1 : 0;
//    if (cnt == 3) return 0;
//    for (int i = 1; i <= 45; i++) {
//        if (val >= i * (i+1) / 2){
//            if (solve(val - i * (i+1) / 2, cnt + 1)) return 1;
//        }
//    }
//    return 0;
//}
//
//int main() {
//    fast_io;
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//        int val;
//        cin >> val;
//        cout << solve(val, 0) << '\n';
//    }
//}