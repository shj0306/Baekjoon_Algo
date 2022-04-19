//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N,X;
//vector<int> v;
//
//int main() {
//    fast_io;
//    cin >> N;
//    v.resize(N);
//    for (int i = 0; i < N; i++) {
//        cin >> v[i];
//    }
//    sort(all(v));
//    cin >> X;
//    int res = 0;
//    for (int i = 0; i < N; i++) {
//        int val = v[i];
//        res += upper_bound(begin(v)+i+1, end(v), X-val)
//               - lower_bound(begin(v)+i+1, end(v), X-val);
//    }
//
//    cout << res;
//}