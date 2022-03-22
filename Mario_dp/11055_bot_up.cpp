//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, res, d[1001], a[1001];
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//
//    for (int i = 1; i <= n; i++) {
//        d[i] = a[i];
//        for (int j = 1; j < i; j++) {
//            if (a[i] > a[j] && d[i] < d[j] + a[i]) {
//                d[i] = d[j] + a[i];
//            }
//        }
//        res = max(res, d[i]);
//    }
//    cout << res;
//}