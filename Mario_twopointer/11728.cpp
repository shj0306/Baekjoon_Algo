//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int n, m;
//vector<int> A, B, C;
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//
//    A.resize(n);
//    B.resize(m);
//
//    for (int i = 0; i < n; i++) cin >> A[i];
//    for (int i = 0; i < m; i++) cin >> B[i];
//
//    int a_idx = 0, b_idx = 0;
//    while (a_idx < n && b_idx < m) {
//        if (A[a_idx] <= B[b_idx]) {
//            C.push_back(A[a_idx++]);
//            if (a_idx == n) break;
//        } else {
//            C.push_back(B[b_idx++]);
//            if (b_idx == m) break;
//        }
//    }
//    for (int i = b_idx; i < m; i++) C.push_back(B[i]);
//    for (int i = a_idx; i < n; i++) C.push_back(A[i]);
//    for (auto val: C) cout << val << ' ';
//}