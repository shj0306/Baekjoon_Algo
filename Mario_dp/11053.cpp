//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int N, arr[1001];
//int dp[1001][1001];
//
//int solve(int idx, int prev) { //현재 idx, 이전 수
//    if (idx == N) return 0;
//    int &ret = dp[idx][prev];
//    if (ret != 0) return ret;
//
//    if (arr[idx] > prev)
//        ret = max(ret, max(solve(idx+1, prev) ,
//                           solve(idx+1, arr[idx]) + 1));
//    else ret = max(ret, solve(idx+1, prev));
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    memset(dp,0,sizeof(dp));
//    cout << solve(0,0);
//}