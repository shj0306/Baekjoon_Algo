//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//using ll = long long;
//ll L,W,H,N,ans, V, tmp, cur, tmp_cnt;
//vector<pll> cube;
//
//bool is_zero(ll len) {
//    return L % len == 0 && W % len == 0 && H % len == 0;
//}
//
//int main() {
//    fast_io;
//    cin >> L >> W >> H >> N;
//
//    for (int i = 1; i <= N; i++) {
//        ll a, b; cin >> a >> b;
//        cube.emplace_back(pow(2,a),b);
//    }
//
//    sort(all(cube), greater<>());
//
//    V = L * W * H; //부피
//
//    for (int i = 0; i < N; i++) {
//        auto [x, cnt] = cube[i];
//        if (V <= 0) break;
//        tmp_cnt = L/x * W/x * H/x;
//        tmp = tmp_cnt;
//        if (i) {
//            ll diff =  - x;
//            cnt -= cur * pow(1<<diff, 3);
//        }
//        if (cnt < tmp_cnt) {
//            V -= pow(x, 3) * cnt;
//            ans += cnt;
//            cur = (tmp - (tmp_cnt - cnt));
//        }else {
//            V -= pow(x, 3) * tmp_cnt;
//            ans += tmp_cnt;
//            cur = tmp;
//        }
//    }
//
//    cout << (V == 0 ? ans : -1) << '\n';
//}