//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//string t;
//int n, res = 1e9;
//int alpha[26], alpha2[26];
//bool used[17];
//vector<pair<int, string>> major;
//vector<int> tmp;
//vector<vector<int>> combi;
//
//void select_books(int idx) {
//    if (idx == n) return;
//    if (!tmp.empty()) combi.push_back(tmp);
//    for (int i = idx; i < n; i++) {
//        if (!used[i]) {
//            used[i] = true;
//            tmp.push_back(i);
//            select_books(i);
//            tmp.pop_back();
//            used[i] = false;
//        }
//    }
//}
//
//void check(const string& title) {
//    for (auto c : title) alpha2[c-'A']++;
//}
//
//bool is_possible() {
//    for (int i = 0; i < 26; i++) {
//        if (alpha[i] > alpha2[i]) return false;
//    }
//    return true;
//}
//
//int main() {
//    fast_io;
//    cin >> t >> n;
//    for (auto c : t) alpha[c-'A']++;
//
//    for (int i = 0; i < n; i++) {
//        int price; string title;
//        cin >> price >> title;
//        major.emplace_back(price, title);
//    }
//
//    //가능한 책들의 조합을 모두 구한다.
//    select_books(0);
//
//    //가능한 모든 책 조합 중 해당 단어를 만들 수 있는 조합 중 가장 적은 금액을 구한다.
//    for (auto &comb : combi) {
//        int money = 0;
//        memset(alpha2, 0, sizeof(alpha2));
//        for (auto &book : comb) {
//            auto [price, title] = major[book];
//            money += price;
//            check(title);
//        }
//        if (is_possible()) //해당 책 조합으로 단어 만들기가 가능한가?
//            res = min(res, money);
//    }
//
//    cout << (res == 1e9 ? -1 : res) << '\n';
//}
///*
// * 책을 선택 할 수 있는 경우의 수 : 2^N-1개 (전부 선택 안하는 경우는 제외)
// */