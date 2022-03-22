//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int a,b;
//    cin >> a >> b;
//
//    string a_str = to_string(a);
//    string b_str = to_string(b);
//
//    for (int i = 0; i < a_str.length(); i++) {
//        if (a_str[i] == '6') a -= pow(10, a_str.length() - i - 1);
//    }
//    for (int i = 0; i < b_str.length(); i++) {
//        if (b_str[i] == '6') b -= pow(10, a_str.length() - i - 1);
//    }
//    cout << a + b << ' ';
//
//    a_str = to_string(a);
//    b_str = to_string(b);
//
//    for (int i = 0; i < a_str.length(); i++) {
//        if (a_str[i] == '5') a += pow(10, a_str.length() - i - 1);
//    }
//    for (int i = 0; i < b_str.length(); i++) {
//        if (b_str[i] == '5') b += pow(10, a_str.length() - i - 1);
//    }
//    cout << a + b << '\n';
//}