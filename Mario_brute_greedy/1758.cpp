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
//    vector<int> money(n+1);
//
//    for (int i = 1; i <= n; i++) cin >> money[i];
//    sort(begin(money)+1, end(money), greater<>());
//
//    long long res = 0;
//    for (int i = 1; i <= n; i++) {
//        if (money[i] > i - 1) res += money[i] - (i - 1);
//        else break;
//    }
//    cout << res;
//}