//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    string s;
//    cin >> s;
//    int zero_cnt = 0, one_cnt = 0;
//    bool is_zero;
//    if (s[0] == '0') {
//        is_zero = true;
//        zero_cnt++;
//    }
//    else {
//        is_zero = false;
//        one_cnt++;
//    }
//    for (int i = 1; i < s.length(); i++) {
//        if (!is_zero && s[i] == '0') {
//            is_zero = true;
//            zero_cnt++;
//        }else if (is_zero && s[i] == '1') {
//            is_zero = false;
//            one_cnt++;
//        }
//    }
//    cout << min(zero_cnt, one_cnt) << '\n';
//}
