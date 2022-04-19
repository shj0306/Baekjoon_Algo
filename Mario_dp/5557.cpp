//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, arr[101];
//ll dp[101][1000];
//
///*
// * 중간 결과 중 음수거나 20을 넘는 값이 나오면 안된다
// */
//
//ll solve(int idx, int res) {
//    ll &ret = dp[idx][res];
//    if (res < 0 || res > 20) return ret = 0;
//    if (idx == N) return arr[idx] == res;
//    if (ret != -1) return ret;
//    ret = 0;
//    ret += solve(idx+1, res + arr[idx]) + solve(idx+1, res - arr[idx]);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 1; i <= N; i++) cin >> arr[i];
//    memset(dp, -1, sizeof(dp));
//
//    cout << solve(2, arr[1]);
//}