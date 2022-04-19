//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//vector<ll> sol;
//
//struct Info {
//    ll sol1, sol2, sol3;
//};
//
//void input() {
//    cin >> N;
//    sol.resize(N);
//    for (int i = 0; i < N; i++) cin >> sol[i];
//    sort(all(sol));
//}
//
//void solve() {
//    Info ans{};
//    ll res = 3e9;
//    for (int i = 0; i < N-2; i++) {
//        ll val = sol[i];
//        int l = i+1, r = N-1;;
//        while(l < r) {
//            ll tot = sol[l] + sol[r] + val;
//            if (tot < 0) {
//                if (res > abs(tot)) {
//                    res = abs(tot);
//                    ans = {val, sol[l], sol[r]};
//                }
//                l++;
//            }else {
//                if (res > abs(tot)) {
//                    res = abs(tot);
//                    ans = {val, sol[l], sol[r]};
//                }
//                r--;
//            }
//        }
//    }
//    cout << ans.sol1 << ' ' << ans.sol2 << ' ' << ans.sol3;
//}
//
//int main() {
//    fast_io;
//    input();
//    solve();
//}