//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    unordered_map<int,int> um;
//    vector<int> v(N), cpy_v(N);
//    for (int i = 0; i < N; i++) {
//        cin >> v[i];
//        cpy_v[i] = v[i];
//    }
//    sort(all(v));
//    v.erase(unique(all(v)), end(v));
//    for (auto val : v) um[val] = lower_bound(all(v), val) - begin(v);
//    for (auto val : cpy_v) cout << um[val] << ' ';
//}