//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int main() {
//    fast_io;
//    int n, k;
//    cin >> n >> k;
//    int sum = 0;
//    vector<pii> v = {pii(0,0)};
//    for (int i = 1; i <= n; i++) {
//        int x; cin >> x;
//        if (x % 2) sum++;
//        v.emplace_back(sum, i);
//    }
//
//    if (sum <= k) {
//        cout << n - sum << '\n';
//        return 0;
//    }
//
//    int ret = 0;
//    for (int i = 0; i + k <= sum; i++) {
//        int s = upper_bound(all(v), pii(i+k+1,-1))
//                - lower_bound(all(v), pii(i, -1));
//
//        ret = max(ret, s - k - 1);
//    }
//    cout << ret;
//}
////koosaga code