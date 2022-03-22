//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, res;
//vector<int> v;
///*
// * 1. Greedy
// * 2. Sorting
// * 3. Brute-force
// */
//int main() {
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        int num; cin >> num;
//        v.push_back(num);
//    }
//
//    if (N < 3) {
//        cout << N << '\n';
//        return 0;
//    }
//    sort(all(v));
//
//    for (int i = 0; i < N-2; i++) {
//        for (int j = i+1; j < N; j++) {
//            for (int k = N-1; k > j; k--) {
//                if (v[i]+v[j] > v[k]) {
//                    res = max(res, k-j+2);
//                    break;
//                }
//            }
//        }
//    }
//    cout << (res == 0 ? 2 : res) << '\n';
//}