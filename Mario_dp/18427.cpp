//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MOD = 10007;
//int n,m,h;
//string tmp,tmp2;
//vector<int> v[51];
//long long dp[51][1001];
//
//int main() {
//    fast_io;
//    cin >> n >> m >> h;
//    cin.ignore();
//    for (int i = 1; i <= n; i++) {
//        getline(cin, tmp);
//        istringstream iss(tmp);
//        while(getline(iss, tmp2, ' ')) {
//            v[i].push_back(stoi(tmp2));
//        }
//    }
//
//    for (int i = 0; i <= n; i++) dp[i][0] = 1;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= h; j++) {
//            for (auto height : v[i])
//                if (j >= height) {
//                    dp[i][j] += dp[i-1][j-height];
//                    dp[i][j] %= MOD;
//                }
//            dp[i][j] += dp[i-1][j];
//            dp[i][j] %= MOD;
//        }
//    }
//    cout << dp[n][h];
//}
///*
// * i명의 학생이 j만큼의 높이를 만들 수 있는 경우의 수는 다음과 같다.
// * 1) i번째 학생이 k번째의 블록을 놓는 경우
// *    if (j >= h[k]) dp[i][j] += dp[i-1][j-h[k]]
// * 이경우는 k번째 블록을 놔서 j가 되어야 하므로,
// * i-1명이 j-v[i][k]만큼을 쌓은 경우의수와 똑같다고 할 수 있다.
// * 조심해야 할것은  j-v[i][k]이 0보다 크거나 같아야 한다.
// *
// * 2) i번째 학생이 블록을 놓지 않는 경우
// *    dp[i][j] += dp[i-1][j]
// */