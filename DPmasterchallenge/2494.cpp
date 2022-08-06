//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e6;
//int N;
//string init, final;
//int dp[10001][10];
//int trace[10001][10];
//
///*
// * idx : 현재 돌리려고 하는 숫자나사
// * offset : 현재 나사가 돌아가 있는 형태
// */
//int solve(int idx, int offset) {
//
//    if (idx == N) return 0;
//    int &ret = dp[idx][offset];
//    if (ret != -1) return ret;
//
//    int val1 = init[idx]-'0';
//    int val2 = final[idx]-'0';
//    int cnt = (val1 + offset) % 10;
//
//    int lt = (val2 - cnt + 10) % 10;
//    int lc = solve(idx+1, (offset+lt)%10) + lt;
//
//    int rt = (cnt - val2 + 10) % 10;
//    int rc = solve(idx+1, offset) + rt;
//
//    if (rc > lc) {
//        ret = lc;
//        trace[idx][offset] = lt;
//    }else {
//        ret = rc;
//        trace[idx][offset] = -rt;
//    }
//    return ret;
//}
//
//void print(int idx, int offset) {
//    if (idx == N) return;
//    int move = trace[idx][offset];
//    if (move != 0) cout << idx+1 << ' ' << move << '\n';
//    if (move > 0) print(idx+1, (offset + move) % 10);
//    else print(idx+1, offset);
//}
//
//int main() {
//    fast_io;
//    cin >> N >> init >> final;
//    memset(dp,-1,sizeof(dp));
//
//    cout << solve(0, 0) << '\n';
//    print(0,0);
//}