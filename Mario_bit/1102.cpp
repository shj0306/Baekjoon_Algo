////공간복잡도 O(2^N), 시간복잡도 O(N^2 * 2^N)
//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int IMP = 1e9;
//int N, P;
//int factory[16][16];
//int dp[1 << 16]; //해당 상태일 때 최소비용
//
//int bit_count(int state) {
//    if (state == 0) return 0;
//    return state % 2 + bit_count(state / 2);
//}
//
//int solve(int state) { //0 : broken, 1 : non-broken
//    if (bit_count(state) >= P) return 0;
//    if (dp[state] != -1) return dp[state];
//    dp[state] = IMP;
//    for (int i = 0; i < N; i++) {
//        if (state & (1 << i)) {
//            for (int j = 0; j < N; j++) {
//                if (!(state & (1 << j))) {
//                    dp[state] = min(dp[state], solve(state | (1 << j)) + factory[i][j]);
//                }
//            }
//        }
//    }
//    return dp[state];
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> factory[i][j];
//        }
//    }
//
//    int init_state = 0;
//    for (int i = 0; i < N; i++) {
//        char c; cin >> c;
//        if (c == 'Y') init_state |= (1 << i);
//    }
//    cin >> P;
//    memset(dp, -1, sizeof(dp));
//    int ans = solve(init_state);
//    ans == IMP ? cout << -1 << '\n' : cout << ans << '\n';
//}