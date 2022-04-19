//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//struct CMP {
//    bool operator() (const string& a, const string& b) const {
//        if (a.size() == b.size()) return a < b;
//        else return a.size() < b.size();
//    }
//};
//
//int N;
//bool check[20];
//string word, tmp;
//set<string, CMP> res;
//
//void back_tracking(int cnt) {
//
//    if (cnt == word.length()) {
//        res.insert(tmp);
//        return;
//    }
//
//    char prev = '@';
//    for (int i = 0; i < word.length(); i++) {
//        if (!check[i]) {
//            if (prev != word[i]) {
//                prev = word[i];
//                check[i] = true;
//                tmp.push_back(word[i]);
//                back_tracking(cnt+1);
//                check[i] = false;
//                tmp.pop_back();
//            }
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        cin >> word;
//        memset(check,false,sizeof(check));
//        back_tracking(0);
//    }
//
//    for (auto it = res.begin(); it != res.end(); it++) {
//        cout << *it << '\n';
//    }
//}