//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, dp[10][11], dp2[11], total;
//vector<int> ans;
//
//int main() {
//    fast_io;
//    cin >> N;
//    int dig;
//
//    if (N <= 10) {
//        cout << N-1;
//        return 0;
//    }
//
//    for (int i = 0; i <= 9; i++) dp[i][1] = 1;
//    dp2[1] = 10;
//
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 2; j <= i+1; j++) {
//            for (int k = 0; k < i; k++) {
//                if (j - k <= 2) dp[i][j] += dp[k][j-1];
//            }
//            dp2[j] += dp[i][j];
//        }
//    }
//
//    for (int i = 1; i <= 10; i++)
//        total += dp2[i];
//
//    if (N > total) {
//        puts("-1");
//        return 0;
//    }
//
//    for (dig = 1; dig <= 10; dig++) {
//        if (N > dp2[dig]) {
//            N -= dp2[dig];
//        }else break;
//    }
//
//    int num = 0, _dig = dig;
//    while(ans.size() < _dig) {
//        if (ans.empty() && num == 0) {
//            num++;
//            continue;
//        }
//
//        if (N > dp[num][dig]) {
//            N -= dp[num][dig];
//            num++;
//        }else {
//            ans.push_back(num);
//            dig--;
//            num = 0;
//        }
//    }
//
//    for (auto val : ans) cout << val;
//}