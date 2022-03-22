//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//const ll INF = 2e9+1;
//int main() {
//    fast_io;
//    cin >> n;
//
//    vector<int> v(n);
//    for (int i = 0; i < n; i++) cin >> v[i];
//
//    sort(all(v));
//
//    int l = 0, r = n-1;
//    int ans_l = -1, ans_r = -1;
//    ll ans = INF, res;
//    while(l < r) {
//        res = v[l] + v[r];
//        if (ans > abs(res)) {
//            ans = abs(res);
//            ans_l = l;
//            ans_r = r;
//        }
//        if (res < 0) l++;
//        else if (res > 0) r--;
//        else {
//            cout << v[l] << ' ' << v[r];
//            return 0;
//        }
//    }
//    cout << v[ans_l] << ' ' << v[ans_r];
//}