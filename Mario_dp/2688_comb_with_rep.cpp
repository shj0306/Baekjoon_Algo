//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, r;
//
//int main() {
//    fast_io;
//    cin >> T;
//
//    while(T--) {
//        cin >> r;
//        int n = 10 + r - 1;
//        r = min(r, n-r);
//
//        ll tmp = 1;
//        for (int i = 0; i < r; i++) tmp *= n--;
//        for (int j = r; j >= 2; j--) tmp /= j;
//        cout << tmp << '\n';
//    }
//}