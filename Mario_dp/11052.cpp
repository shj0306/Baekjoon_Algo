//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, dp[1001], card[1001];
//
//int solve(int num) { //dp[num] : num장 남았을 때 지불 할 수 있는 최대 비용
//    if (num == 0) return 0;
//    int &ret = dp[num];
//    if (ret != 0) return ret;
//
//    for (int i = 1; i <= N; i++) {
//        if (num >= i) ret = max(ret, solve(num-i) + card[i]);
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) cin >> card[i];
//
//    cout << solve(N);
//}