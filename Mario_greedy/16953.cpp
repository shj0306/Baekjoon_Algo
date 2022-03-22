//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int a, b, ans;
//bool is_impossible = true;
//
//int main() {
//    fast_io;
//    cin >> a >> b;
//    string b_str = to_string(b);
//    while(b >= a) {
//        if (b == a) {
//            is_impossible = false;
//            break;
//        }
//        if (b_str.back() == '1') b /= 10;
//        else if (b % 2 == 0) b /= 2;
//        else break;
//        b_str = to_string(b);
//        ans++;
//    }
//    (is_impossible) ? cout << -1 << '\n' : cout << ans + 1 << '\n';
//}