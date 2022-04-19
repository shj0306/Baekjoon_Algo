//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//bool is_promising(const string& num) {
//    string tmp1, tmp2;
//    if (num.length() == 1) return true;
//    for (int i = (int)(num.length()+1) / 2; i < num.length(); i++) {
//        tmp1 = num.substr(i);
//        tmp2 = num.substr(i - tmp1.length(), tmp1.length());
//        if (tmp1 == tmp2) return false;
//    }
//    return true;
//}
//
//void back_tracking(int idx, const string& num) {
//    if (idx == N) {
//        for (auto c : num) cout << c;
//        exit(0);
//    }
//
//    for (char i = '1'; i <= '3'; i++) {
//        if (is_promising(num+i)) {
//            back_tracking(idx+1, num+i);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    back_tracking(0, "");
//}