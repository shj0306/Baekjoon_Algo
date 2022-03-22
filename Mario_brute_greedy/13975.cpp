//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//int main() {
//    fast_io;
//    int t;
//    cin >> t;
//    while (t--) {
//        int k; cin >> k;
//        priority_queue<ll, vector<ll>, greater<>> pq;
//        ll res = 0;
//        vector<ll> v(k);
//        for (int i = 0; i < k; i++) {
//            int num; cin >> num;
//            pq.push(num);
//        }
//
//        while(pq.size() > 1) {
//            ll v1 = pq.top();
//            pq.pop();
//            if (pq.empty()) {
//                res += v1;
//                break;
//            }
//            ll v2 = pq.top();
//            pq.pop();
//
//            res += v1 + v2;
//            pq.push(v1+v2);
//        }
//
//        cout << res << '\n';
//    }
//}