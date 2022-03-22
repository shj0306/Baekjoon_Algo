//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
///*
// * 문자열간의 유사도 측정 알고리즘
// */
//string s, t;
//vector<vector<int>> dp;
//int n, m;
//
//bool is_possible(char c1, char c2) {
//    if (c1 == 'i') return c2 == 'i' || c2 == 'j' || c2 == 'l';
//    if (c1 == 'v') return c2 == 'v' || c2 == 'w';
//    return c1 == c2;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//    cin >> s >> t;
//    s = " " + s;
//    t = " " + t;
//    dp = vector<vector<int>> (n+1, vector<int>(m+1));
//
//    for (int i = 1; i <= n; i++) dp[i][0] = i;
//    for (int j = 1; j <= m; j++) dp[0][j] = j;
//
//    for (int j = 1; j <= m; j++) { //정답 인덱스
//        for (int i = 1; i <= n; i++) { //답안 인덱스
//            if (is_possible(s[i], t[j])) dp[i][j] = dp[i-1][j-1];
//            else dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
//        }
//    }
//    cout << dp[n][m];
//}