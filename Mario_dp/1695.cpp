//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int INF = 1e9;
//int n, arr[5001];
//int dp[5001][5001];
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> arr[i];
//    for (int l = n; l >= 1; l--) {
//        for (int r = l+1; r <= n; r++) {
//            if (arr[l] == arr[r]) dp[l][r] = dp[l+1][r-1];
//            else dp[l][r] = min(dp[l+1][r], dp[l][r-1]) + 1;
//        }
//    }
//    cout << dp[1][n];
//}

//hint
/*
https://chosh95.tistory.com/499 참고
 dp[start][end] : start~end까지 끼워 넣을 수의 최소개수
 이미 펠린드롬인 경우 0
만약 start,end에 해당하는 수가 같다면 dp[start][end] = dp[start+1][end-1]
다르다면 dp[start][end] = min(dp[start+1][end], dp[start][end-1]) + 1
*/
