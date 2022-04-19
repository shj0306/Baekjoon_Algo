//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int N, total, dp1[11], dp2[11][10]; //dp2[N][K] : N자리 최고자릿수 K일 때 가능한 감소하는 수
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    if (N <= 9) {
//        cout << N;
//        return 0;
//    }
//    dp1[1] = 10;
//    for (int i = 0; i < 9; i++) dp2[1][i] = 1;
//
//    for (int i = 2; i <= 10; i++) {
//        for (int j = i - 1; j <= 9; j++) {
//            for (int k = 0; k < j; k++) {
//                dp2[i][j] += dp2[i - 1][k];
//            }
//            dp1[i] += dp2[i][j];
//        }
//    }
//
//    for (int i = 1; i <= 10; i++) total += dp1[i];
//
//    if (total <= N) {
//        cout << -1;
//        return 0;
//    }
//
//    N++; int digit;
//    for (digit = 1; digit <= 10; digit++) {
//        if (dp1[digit] < N) N -= dp1[digit];
//        else break;
//    }
//
//    int idx = 0; vector<int> ans;
//    while (digit) {
//        if (dp2[digit][idx] >= N) {
//            ans.push_back(idx);
//            digit--; idx = 0;
//        } else N -= dp2[digit][idx++];
//    }
//    for (auto val : ans) cout << val;
//}