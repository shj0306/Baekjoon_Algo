//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
///*
// * 유사 펠린드롬 조건
// * 한문자 제거하면 펠린드롬
// * 이미 대칭인 문자는 제거 대상에서 제외
// */
//bool check_palin(string str) {
//    for (int i = 0; i < str.length() / 2; i++) {
//        if (str[i] != str[str.length() - i - 1]) return false;
//    }
//    return true;
//}
//
//bool check_sim_palin(string str) {
//    int cnt = 0; //제거 횟수
//    int l = 0, r = (int)str.length();
//    while(l < r) {
//        if (str[l] != str[r-1]) {
//            if (cnt) return false;
//            string tp1 = str.substr(l, r - l - 1);
//            string tp2 = str.substr(l+1, r - l - 1);
//            bool ret1 = check_palin(tp1);
//            bool ret2 = check_palin(tp2);
//            if (ret1) r--;
//            else if (ret2) l++;
//            else return false;
//            cnt++;
//        }else {
//            l++; r--;
//        }
//    }
//    return true;
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    for (int i = 0; i < T; i++) {
//        string palin; cin >> palin;
//        if (check_palin(palin)) cout << 0 << '\n';
//        else if (check_sim_palin(palin)) cout << 1 << '\n';
//        else cout << 2 << '\n';
//    }
//}