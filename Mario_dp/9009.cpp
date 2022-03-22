//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
///*
// * Greedy Algorithm
// * 모든 피보나치값들은 기본 값들을 제외하고 다른 모든 피보나치 값들로 이루어져 있다.
// * 그렇기 때문에 N보다 같거나 작은 가장 큰 피보나치 값으로 채워나가면 된다.
// */
//int main() {
//    fast_io;
//    int T;
//    cin >> T;
//    vector<int> dp(47), ans;
//    dp[0] = 0, dp[1] = 1;
//    for (int i = 2; i <= 46; i++) dp[i] = dp[i - 1] + dp[i - 2];
//    for (int t = 0; t < T; t++) {
//        int N; cin >> N;
//        while (N > 0) {
//            int idx = lower_bound(all(dp), N) - begin(dp);
//            if (dp[idx] != N) idx--;
//            ans.push_back(dp[idx]);
//            N -= dp[idx];
//        }
//        sort(all(ans));
//        for (auto val : ans) cout << val << ' ';
//        cout << '\n';
//        ans.clear();
//    }
//}