//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int N, M; cin >> N;
//    vector<int> v;
//    for (int i = 0; i < N; i++) {
//        int card; cin >> card;
//        v.push_back(card);
//    }
//    sort(all(v));
//    cin >> M;
//    for (int i = 0; i < M; i++) {
//        int find_num; cin >> find_num;
//        cout << upper_bound(all(v), find_num) - lower_bound(all(v), find_num) << ' ';
//    }
//}