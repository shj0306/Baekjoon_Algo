//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n;
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<int> v(n);
//
//    for (int i = 0; i < n; i++) cin >> v[i];
//    sort(all(v));
//
//    for (int i = 1; i < n; i++) v[i] += v[i-1];
//
//    int res = 0;
//    for (int i = 0; i < n; i++) res += v[i];
//    cout << res;
//}