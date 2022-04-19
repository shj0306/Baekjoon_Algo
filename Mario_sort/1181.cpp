//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//bool cmp(const string& str1, const string& str2) {
//    if (str1.length() == str2.length()) return str1 < str2;
//    return str1.length() < str2.length();
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    vector<string> words(N);
//    for (int i = 0; i < N; i++) cin >> words[i];
//
//    sort(all(words), cmp);
//    words.erase(unique(all(words)), end(words));
//    for (const auto& word : words) cout << word << '\n';
//}