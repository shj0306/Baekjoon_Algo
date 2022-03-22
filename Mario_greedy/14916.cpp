//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int n; cin >> n;
//    int ans = n;
//    if (n % 5 == 0) {
//        cout << n / 5 << '\n';
//        return 0;
//    }
//    for (int i = 0; i * 5 < n; i++) {
//        int last = (n - 5 * i) / 2;
//        if ((n - 5 * i) % 2 == 0) ans = min(ans, i + last);
//    }
//    ans == n ? cout << -1 << '\n' : cout << ans << '\n';
//}