//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MOD = 1000000;
//string code;
//int arr[5001];
//ll dp[5001];
//int N;
//
//int main() {
//    fast_io;
//    cin >> code;
//    N = (int)code.length();
//
//    for (int i = 1; i <= N; i++) arr[i] = code[i-1] - '0';
//
//    if (arr[1] == 0) {
//        cout << 0 << '\n';
//        return 0;
//    }
//
//    dp[0] = 1;
//    if (arr[1] >= 1) dp[1] += dp[0] % MOD;
//
//    for (int i = 2; i <= N; i++) {
//        if (arr[i] >= 1) dp[i] += dp[i-1] % MOD;
//        int num = arr[i-1] * 10 + arr[i];
//        if (num >= 10 && num <= 26) dp[i] += dp[i-2] % MOD;
//    }
//
//    cout << dp[N] % MOD;
//}
////https://yabmoons.tistory.com/163