//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N; string tmp;
//vector<string> vec;
//set<string> memory;
//bool check[20];
//
//void solve(int idx, const string& word) {
//
//    if (idx == word.length()) {
//        memory.insert(tmp);
//        return;
//    }
//
//    char prev = '#';
//    for (int i = 0; i < word.length(); i++) {
//        if (!check[i] && prev != word[i]) {
//            check[i] = true;
//            prev = word[i];
//            tmp += word[i];
//            solve(idx+1, word);
//            tmp.pop_back();
//            check[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        string word; cin >> word;
//        vec.push_back(word);
//    }
//
//    for (const auto& word : vec) {
//        solve(0, word);
//        for (auto it = memory.begin(); it != memory.end(); it++)
//            cout << *it << '\n';
//        memory.clear();
//    }
//    double end = (double)clock() / CLOCKS_PER_SEC;
//}