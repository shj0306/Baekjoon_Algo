//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<int> X(n+1),sum(n+1);
//    ll res = 0;
//    for (int i = 1; i <= n; i++) {
//        cin >> X[i];
//        sum[i] = sum[i-1] + X[i];
//    }
//    for (int i = 1; i < n; i++) res += X[i] * (sum[n] - sum[i]);
//    cout << res;
//}
///*
// * a1 a2 a3 a4 ... an
// *
// * a1 * (a2 + a3 + a4 + .. + an)
// * a2 * (a3 + a4 + .. + an)
// * a3 * (a4 + .. + an)
// * ..
// * an-1 * (an)
// */