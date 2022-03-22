//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int n, k, cnt;
//bool check[10];
//vector<int> card;
//set<string> memory;
//
//void solve(int idx, const string& res) {
//    if (idx == k) {
//        if (memory.find(res) == memory.end()) {
//            memory.insert(res);
//            cnt++;
//        }
//        return;
//    }
//
//    for (int i = 0; i < card.size(); i++) {
//        if (!check[i]) {
//            check[i] = true;
//            solve(idx+1, res + to_string(card[i]));
//            check[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    string res;
//    for (int i = 0; i < n; i++) {
//        int num; cin >> num;
//        card.push_back(num);
//    }
//    solve(0, res);
//    cout << cnt;
//}