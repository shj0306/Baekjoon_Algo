//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//int dp[1001][1001]; //string1의 i번째, string2의 j번째까지 lcs 길이
//string word1, word2;
//
//void track(int i, int j) {
//    if (dp[i][j] == 0) return;
//    if (word1[i-1] == word2[j-1]) {
//        track(i-1, j-1);
//        cout << word1[i-1];
//    }else dp[i-1][j] > dp[i][j-1] ? track(i-1, j) : track(i, j-1);
//}
//
//int main() {
//    fast_io;
//    cin >> word1 >> word2;
//
//    for (int i = 1; i <= word1.length(); i++) {
//        for (int j = 1; j <= word2.length(); j++) {
//            if (word1[i-1] == word2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
//            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//        }
//    }
//
//    int sz1 = (int)word1.length();
//    int sz2 = (int)word2.length();
//    cout << dp[sz1][sz2] << '\n';
//    track(sz1, sz2);
//}