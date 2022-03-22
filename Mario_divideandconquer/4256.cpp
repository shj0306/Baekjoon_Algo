//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int n, t;
//vector<int> pre, ind;
//
//void solve(int ps, int pe, int is, int ie) {
//
//    if (ps > pe || is > ie) return;
//    if (ps == pe) {
//        cout << pre[ps] << ' ';
//        return;
//    }
//    int root = pre[ps];
//    int idx = ind[root];
//    solve(ps+1, ps+idx-is, is, idx-1);
//    solve(ps+idx-is+1, pe, idx+1, ie);
//    cout << root << ' ';
//}
//
//
//int main() {
//    fast_io;
//    cin >> t;
//    while(t--) {
//        cin >> n;
//        pre = vector<int>(n+1);
//        ind = vector<int>(n+1);
//        for (int i = 1; i <= n; i++) cin >> pre[i];
//        for (int i = 1; i <= n; i++) {
//            int a; cin >> a;
//            ind[a] = i;
//        }
//        solve(1,n,1,n);
//        cout << '\n';
//    }
//}