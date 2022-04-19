//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
////0 시작   다음이 1인지 확인
////1 시작
////        다음 1까지 2칸 이상 띄워져 있어야한다.
////        다음 1로부터 다음 0을 찾는다.
////          다음 0이 1개만 나올 경우
////          다음 0이 2개 이상 나올 경우 (다음 0 이전에 1이 2개 이상 존재)
//// https://suri78.tistory.com/270
//
//bool check(string &rgx) {
//    int idx = 0;
//    while (idx < rgx.length()) {
//        if (rgx[idx] == '0') {
//            ++idx;
//            if (rgx.length() <= idx || rgx[idx] == '0')
//                return false;
//            ++idx;
//        }else {
//            ++idx;
//            int nxt_1 = (int)rgx.find('1', idx);
//            if (nxt_1 == string::npos || nxt_1 - idx < 2)
//                return false;
//            int nxt_0 = (int)rgx.find('0', nxt_1);
//            if (nxt_0 == rgx.length()-1) return false;
//            if (nxt_0 == string::npos) return true;
//            idx = nxt_0;
//            if (rgx[nxt_0+1] == '0' && nxt_0 - nxt_1 > 1)
//                idx--;
//        }
//    }
//    return true;
//}
//
//int main() {
//    fast_io;
//    int t; cin >> t; string regex;
//    for (int i = 0; i < t; i++) {
//        cin >> regex;
//        check(regex) ? cout << "YES" << '\n' : cout << "NO" << '\n';
//    }
//}