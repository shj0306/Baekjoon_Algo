//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<int> v(n);
//    for (int i = 0; i < n; i++) cin >> v[i];
//
//    sort(all(v));
//
//    ll res = 0;
//    for (int i = 0; i < n-2; i++) {
//        for (int j = i + 1; j < n-1; j++) {
//            res += upper_bound(begin(v)+j+1, end(v), -(v[i]+v[j]))
//                    - lower_bound(begin(v) + j + 1, end(v),  -(v[i]+v[j]));
//        }
//    }
//    cout << res;
//}