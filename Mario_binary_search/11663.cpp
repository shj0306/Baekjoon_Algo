//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int N, M; cin >> N >> M;
//    vector<int> point(N);
//    for (int i = 0; i < N; i++) cin >> point[i];
//    sort(all(point));
//    for (int i = 0; i < M; i++) {
//        int x1, x2; cin >> x1 >> x2;
//        cout << upper_bound(all(point), x2) - lower_bound(all(point), x1) << '\n';
//    }
//}