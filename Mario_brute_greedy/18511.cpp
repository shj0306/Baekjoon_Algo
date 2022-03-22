//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, K, ans;
//string res;
//vector<char> v;
//
//void permutation() {
//    if (res.length() > 0 && N >= stoi(res)) ans = max(ans, stoi(res));
//    if (res.length() == to_string(N).length()) return;
//    for (char i : v) {
//        res += i;
//        permutation();
//        res.pop_back();
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//
//    for (int i = 0; i < K; i++) {
//        char num; cin >> num;
//        v.push_back(num);
//    }
//    permutation();
//    cout << ans;
//}