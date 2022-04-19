//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//bool cmp(const string& str1, const string& str2) {
//    return str1.length() < str2.length();
//}
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    vector<string> word(N);
//    for (int i = 0; i < N; i++) cin >> word[i];
//    sort(all(word), cmp);
//
//    int cnt = N;
//    for (int i = 0; i < N; i++) {
//        string w = word[i];
//        for (int j = i + 1; j < N; j++) {
//            if (word[j].find(w) == 0) {
//                //존재한다면
//                cnt--;
//                break;
//            }
//        }
//    }
//    cout << cnt << '\n';
//}
