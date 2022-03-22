//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//vector<int> alpha[26];
//string w; int k;
//
//int ret_min_length(int idx) {
//    int min_length = (int)w.length()+1;
//    for (int i = k - 1; i < alpha[idx].size(); i++)
//        min_length = min(min_length, alpha[idx][i] - alpha[idx][i-k+1] + 1);
//    return min_length;
//}
//
//int ret_max_length(int idx) {
//    int max_length = -1;
//    for (int i = k - 1; i < alpha[idx].size(); i++)
//        max_length = max(max_length, alpha[idx][i] - alpha[idx][i-k+1] + 1);
//    return max_length;
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    for (int t = 0; t < T; t++) {
//        cin >> w >> k;
//        int min_length = (int)w.length()+1, max_length = -1;
//        memset(alpha, 0, sizeof(alpha));
//        for (int i = 0; i < w.length(); i++) alpha[w[i]-'a'].push_back(i);
//
//        for (char c = 'a'; c <= 'z'; c++) {
//            if (alpha[c-'a'].size() >= k) {
//                min_length = min(min_length, ret_min_length(c - 'a'));
//                max_length = max(max_length, ret_max_length(c - 'a'));
//            }
//        }
//        if (min_length == w.length()+1 || max_length == -1) cout << -1 << '\n';
//        else cout << min_length << ' ' << max_length << '\n';
//    }
//}