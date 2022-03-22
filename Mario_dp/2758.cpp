//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int n,m;
//long long dp[11][2001];
////재귀로 풀면 시간초과띠
//
//int main() {
//    fast_io;
//    int t; cin >> t;
//
//    //미리 계산을 해준다.
//    //dp[i][j] : i번째에 j이하의 수가 올 수 있는 경우의 수
//    for (int i = 1; i <= 10; i++) {
//        for (int j = 1; j <= 2000; j++) {
//            long long cnt = 0;
//            for (int k = 1; k <= j / 2; k++) cnt += dp[i-1][k];
//            if (i == 1) cnt = 1;
//            dp[i][j] = cnt;
//        }
//    }
//
//    while(t--) {
//        cin >> n >> m;
//        long long res = 0;
//        for (int i = 1; i <= m; i++) res += dp[n][i];
//        cout << res << '\n';
//    }
//}