//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, k;
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    vector<int> v;
//
//    for (int i = 1; i <= n; i++) {
//        int money; cin >> money;
//        v.push_back(money);
//    }
//
//    sort(all(v), greater<>());
//
//    int cnt = 0, idx = 0;
//    while(k > 0 && idx < n) {
//        if (k >= v[idx]) {
//            cnt += k / v[idx];
//            k %= v[idx];
//        }
//        idx++;
//    }
//    cout << cnt << '\n';
//}