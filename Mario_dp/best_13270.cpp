//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
//
//int n;
//
//int main() {
//    fast_io;
//    cin >> n;
//
//    vector<int> dp1(n+1), dp2(n+1, 1e9);
//    dp2[0] = 0;
//    int a = 1, b = 2;
//
//    while(b <= n){
//        for(int i=b;i<=n;i++) {
//            dp1[i] = max(dp1[i], dp1[i - b] + a);
//            dp2[i] = min(dp2[i], dp2[i - b] + a);
//        }
//        int c = a + b;
//        a = b, b = c;
//    }
//
//    cout << dp2[n] << " " << dp1[n];
//}