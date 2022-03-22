//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//pair<int,char> alphabet[26];
//
//void init() {
//    for (int i = 0; i < 26; i++) {
//        alphabet[i].first = 0;
//        alphabet[i].second = i+'a';
//    }
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    cin.ignore();
//    for (int i = 0; i < T; i++) {
//        string str;
//        init();
//        getline(cin, str);
//        for (auto c : str) {
//            if (c == ' ') continue;
//            alphabet[c-'a'].first++;
//        }
//        sort(begin(alphabet), end(alphabet), greater<>());
//        if (alphabet[0].first == alphabet[1].first) cout << '?' << '\n';
//        else cout << alphabet[0].second << '\n';
//    }
//}