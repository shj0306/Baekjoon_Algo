//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, N, M;
//vector<int> A, B;
//
//int bin_search(int s, int e, ll val) {
//    int mid;
//    while(s <= e) {
//        mid = (s+e) / 2;
//        if (B[mid] < val) s = mid + 1;
//        else if (B[mid] >= val) e = mid - 1;
//    }
//    return s;
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N >> M;
//        A = vector<int>(N);
//        B = vector<int>(M);
//        for (int i = 0; i < N; i++) cin >> A[i];
//        for (int i = 0; i < M; i++) cin >> B[i];
//
//        sort(all(B));
//
//        int res = 0;
//        for (int i = 0; i < N; i++) {
//            res += bin_search(0, M-1, A[i]);
//        }
//        cout << res << '\n';
//    }
//}