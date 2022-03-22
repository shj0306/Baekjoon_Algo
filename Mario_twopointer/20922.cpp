//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int n, k;
//int num[100001];
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    vector<int> v(n);
//
//    for (int i = 0; i < n; i++) cin >> v[i];
//
//    int l = 0, r = 0, res = 1;
//    while (r < n) {
//        if (num[v[r]] < k) {
//            num[v[r++]]++;
//            if (r == n) {
//                res = max(res, r-l);
//                break;
//            }
//        } else {
//            res = max(res, r - l);
//            num[v[l++]]--;
//        }
//    }
//    cout << res;
//}