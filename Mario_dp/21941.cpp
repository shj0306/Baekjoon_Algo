//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using psi = pair<string,int>;
//
//string s;
//int n;
//vector<psi> v;
//int dp[1001];
//
//int solve(int idx) { //현재 인덱스
//    if (idx == (int)s.length()) return 0;
//    int &ret = dp[idx];
//    if (ret != -1) return ret;
//    for (auto [word, score] : v) {
//        if (word.length() <= score) {
//            int id = (int)s.find(word, idx);
//            if (id != string::npos) ret = max(ret,solve(id+(int)word.length())
//                                              + score);
//        }
//    }
//    ret = max(ret, solve(idx+1) + 1);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> s >> n;
//    for (int i = 0; i < n; i++) {
//        string word;
//        int score;
//        cin >> word >> score;
//        v.emplace_back(word, score);
//    }
//    memset(dp,-1,sizeof(dp));
//    cout << solve(0);
//}