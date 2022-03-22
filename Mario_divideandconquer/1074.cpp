//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int r,c,res;
//
//void solve(int ro, int co, int l) {
//    if (ro == r && co == c) {
//        cout << res << '\n';
//        exit(0);
//    }
//    if (ro <= r && r < ro + l && co <= c && c < co + l) {
//        solve(ro, co, l / 2);
//        solve(ro, co+l/2, l/2);
//        solve(ro+l/2, co, l/2);
//        solve(ro+l/2, co+l/2, l/2);
//    }else res += l * l;
//}
//
//int main() {
//    fast_io;
//    int n;
//    cin >> n >> r >> c;
//    solve(0,0,1<<n);
//}