//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    vector<int> v, two;
//    for (int i = 0; i < N; i++) {
//        int num; cin >> num;
//        v.push_back(num);
//    }
//    sort(all(v));
//    for (int i = 0; i < N; i++) {
//        for (int j = i; j < N; j++) {
//            two.push_back(v[i] + v[j]);
//        }
//    }
//    sort(all(two));
//    int sz = (int)v.size()-1;
//    for (int i = sz; i > 0; i--) {
//        for (int j = 0; j < i; j++) {
//            if (binary_search(all(two), v[i]-v[j])) {
//                cout << v[i];
//                return 0;
//            }
//        }
//    }
//}