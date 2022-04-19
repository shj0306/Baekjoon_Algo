//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//vector<int> v;
//
//void input() {
//    cin >> N >> M;
//    v.resize(N);
//    for (int i = 0; i < N; i++) cin >> v[i];
//    sort(all(v));
//}
//
//void solve() {
//    int l = 0, r = 0, min_diff = 2e9;
//    while(l <= r && r < N) {
//        if (v[r] - v[l] >= M) {
//            min_diff = min(min_diff, v[r] - v[l]);
//            l++;
//        }else r++;
//    }
//    cout << min_diff;
//}
//
//int main() {
//    fast_io;
//    input();
//    solve();
//}