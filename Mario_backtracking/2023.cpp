//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//bool is_prime(string num) {
//    int val = stoi(num);
//    if (val == 1) return false;
//    for (int i = 2; i * i <= val; i++) {
//        if (val % i == 0) return false;
//    }
//    return true;
//}
//
//void back_tracking(int idx, string num) {
//    if (idx == N) {
//        cout << num << '\n';
//        return;
//    }
//
//    for (char i = '0'; i <= '9'; i++) {
//        if (num.length() == 0 && i == '0') continue;
//        if (is_prime(num + i))
//            back_tracking(idx+1, num+i);
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    back_tracking(0, "");
//}