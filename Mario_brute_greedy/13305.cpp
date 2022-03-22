//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n;
//const long long INF = 1e18;
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<long long> road(n+1);
//    vector<long long> oil(n+1);
//
//    for (int i = 1; i <= n-1; i++) cin >> road[i];
//    for (int i = 1; i <= n; i++) cin >> oil[i];
//
//    long long res = 0, min_oil = INF;
//    for (int i = 1; i <= n-1; i++) {
//        min_oil = min(min_oil, oil[i]);
//        res += road[i] * min_oil;
//    }
//    cout << res;
//}