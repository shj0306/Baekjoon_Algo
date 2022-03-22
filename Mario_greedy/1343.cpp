//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//string ans, str;
//
//void process(int cnt) {
//    if (cnt && cnt <= 2) ans += "BB";
//    else {
//        while (cnt >= 4) {
//            ans += "AAAA";
//            cnt -= 4;
//        }
//        if (cnt) ans += "BB";
//    }
//}
//
//int main() {
//    cin >> str;
//    int idx = 0;
//    while (idx < str.length()) {
//        int nxt_idx = (int) str.find('.', idx);
//        if (nxt_idx == string::npos) { //존재하지 않다면
//            nxt_idx = (int)str.length();
//            int cnt = nxt_idx - idx;
//            if (cnt % 2) {
//                cout << -1;
//                return 0;
//            }else process(cnt);
//        }else {
//            int cnt = nxt_idx - idx;
//            if (cnt % 2) {
//                cout << -1;
//                return 0;
//            } else process(cnt);
//            ans += ".";
//        }
//        idx = nxt_idx+1;
//    }
//    cout << ans << '\n';
//}