//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//const int INF = 1e9;
//int d, p;
//vector<pii> v;
//int dp[100001];
//
//int main() {
//    fast_io;
//    cin >> d >> p;
//    for (int i = 0; i < p; i++) {
//        int l, c; cin >> l >> c;
//        v.emplace_back(l,c);
//    }
//
//    dp[0] = INF;
//    for (int i = 0; i < p; i++) {
//        auto [l, c] = v[i];
//
//        for (int j = d; j >= 0; j--) {
//            int k = j + l;
//            if (k > d) continue;
//            dp[k] = max(dp[k], min(dp[j], c));
//        }
//    }
//    cout << dp[d];
//}