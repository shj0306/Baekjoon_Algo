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
//    vector<int> v(n);
//
//    for (int i = 0; i < n; i++) cin >> v[i];
//
//    int l = 0, r = 0, res = 0, cnt = 0;
//    while (r < n) {
//        if (v[r] % 2 == 0) r++;
//        else {
//            if (cnt < k) {
//                cnt++;
//                r++;
//            }else {
//                res = max(res, r - l - cnt);
//                if (v[l] % 2) cnt--;
//                l++;
//            }
//        }
//    }
//    cout << max(res, r-l-cnt);
//}