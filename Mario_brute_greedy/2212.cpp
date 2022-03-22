//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, k;
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//
//    vector<int> v(n), diff(n-1);
//
//    for (int i = 0; i < n; i++) cin >> v[i];
//    sort(all(v));
//
//    for (int i = 0; i < n-1; i++) diff[i] = v[i+1] - v[i];
//
//    sort(all(diff), greater<>());
//
//    int res = 0;
//    for (int i = k-1; i < diff.size(); i++) res += diff[i];
//    cout << res;
//}