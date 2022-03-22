//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//const int INF = 1e9;
//int N, arr[301], dp[301][3];
//
//int solve(int idx, int cnt) {
//    if (idx == N) return arr[idx];
//    int &ret = dp[idx][cnt];
//    if (ret != -1) return ret;
//    //계단 1칸 전진
//    //계단 1칸을 연속 3번 쓰면 안된다.
//    ret = -INF;
//    if (cnt < 2) ret = max(ret, solve(idx+1,cnt+1) + arr[idx]);
//    //계단 2칸 전진
//    if (idx <= N-2) ret = max(ret, solve(idx+2, 1) + arr[idx]);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    arr[0] = 0;
//    for (int i = 1; i <= N; i++) cin >> arr[i];
//    memset(dp,-1,sizeof(dp));
//    cout << solve(0,0);
//}