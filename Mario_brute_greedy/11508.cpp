//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n;
//
//int main() {
//    fast_io;
//    cin >> n;
//    long long res = 0;
//    vector<int> price(n);
//
//    for (int i = 0; i < n; i++) cin >> price[i];
//
//    sort(all(price), greater<>());
//
//    int idx = 0;
//    while(idx < n) {
//        if ((idx+1) % 3) res += price[idx];
//        idx++;
//    }
//    cout << res;
//}