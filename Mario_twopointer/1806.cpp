//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e5;
//int N, S;
//
//int main() {
//    fast_io;
//    cin >> N >> S;
//    vector<int> v(N);
//    for (int i = 0; i < N; i++) cin >> v[i];
//
//    int res = INF, l = 0, r = 0, sum = 0;
//    while(r <= N) {
//        if (sum < S) {
//            if (r == N) break;
//            sum += v[r++];
//        }
//        else {
//            res = min(res, r - l);
//            sum -= v[l++];
//        }
//    }
//
//    cout << (res == INF ? 0 : res) << '\n';
//}