//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//const long long MAX = 9876543210;
//vector<long long> res;
//
//void solve(int cur_num, string num) { //최고차항 수
//    res.push_back(stoll(num));
//    for (int i = 0; i < cur_num; i++) {
//        solve(i,num + to_string(i));
//    }
//}
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    if (N <= 10) {
//        cout << N-1;
//        return 0;
//    }
//    for (int i = 0; i <= 9; i++)
//        solve(i, to_string(i));
//
//    sort(all(res));
//    cout << (N > res.size() ? -1 : res[N-1]);
//}