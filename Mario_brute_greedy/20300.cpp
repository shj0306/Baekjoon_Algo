//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//ll res;
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<ll> v(n);
//
//    for (int i = 0; i < n; i++) cin >> v[i];
//
//    sort(all(v));
//
//    if (n % 2 == 0) {
//        for (int i = 0; i < n; i++) res = max(res, v[i] + v[n-i-1]);
//    }else {
//        for (int i = 0; i < n-1; i++) res = max(res, v[i] + v[n-1-(i+1)]);
//        res = max(res, v[n-1]);
//    }
//    cout << res;
//}