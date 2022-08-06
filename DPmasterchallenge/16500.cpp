//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//int dp[100];
//string word;
//vector<string> word_list;
////1을 찾으면 다른 경우는 보지 않는다.
//
//int solve(int idx) {
//    if (idx == word.length()) return 1;
//    int &ret = dp[idx];
//    if (ret != -1) return ret;
//    for (const auto& tmp : word_list) {
//        if (word.substr(idx, tmp.length()) == tmp) {
//            if (solve(idx+(int)tmp.length())) return ret = 1;
//        }
//    }
//    return ret = 0;
//}
//
//int main() {
//    fast_io;
//    cin >> word >> N;
//
//    memset(dp,-1,sizeof(dp));
//    for (int i = 0; i < N; i++) {
//        string str; cin >> str;
//        word_list.push_back(str);
//    }
//    cout << solve(0);
//}