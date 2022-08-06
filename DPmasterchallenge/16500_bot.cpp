//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//int dp[101];
//string word;
//vector<string> word_list;
////1을 찾으면 다른 경우는 보지 않는다.
////https://sooooooyn.tistory.com/12
//
//int main() {
//    fast_io;
//    cin >> word >> N;
//
//    for (int i = 0; i < N; i++) {
//        string str; cin >> str;
//        word_list.push_back(str);
//    }
//
//    dp[word.length()] = 1;
//    for (int pos = (int)word.length()-1; pos >= 0; pos--) {
//        for (int j = 0; j < N; j++) {
//            if (word.find(word_list[j], pos) == pos && dp[pos + word_list[j].length()] == 1) {
//                dp[pos] = 1;
//                break;
//            }else dp[pos] = 0;
//        }
//    }
//    cout << dp[0];
//}