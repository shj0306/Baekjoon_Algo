//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//const ll INF = 5e18;
//
//int main() {
//    fast_io;
//    cin >> N;
//    map<ll, int> m;
//    set<ll> s;
//    for (int i = 0; i < N; i++) {
//        ll val; cin >> val;
//        s.insert(val);
//        m[val]++;
//    }
//    ll res = -INF;
//    int max_cnt = 0;
//    for (auto it = s.begin(); it != s.end(); it++) {
//        if (max_cnt < m[*it]) {
//            max_cnt = m[*it];
//            res = *it;
//        }else if (max_cnt == m[*it])
//            res = min(res, (ll)*it);
//    }
//    cout << res << '\n';
//}