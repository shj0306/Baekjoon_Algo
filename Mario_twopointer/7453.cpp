////https://mapocodingpark.blogspot.com/2020/02/BOJ-7453.html
//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<int> A(n), B(n), C(n), D(n);
//    vector<int> A_B, C_D;
//
//    for (int i = 0; i < n; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            A_B.push_back(A[i]+B[j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            C_D.push_back(C[i]+D[j]);
//        }
//    }
//    sort(all(A_B));
//    sort(all(C_D),greater<>());
//
//    int ab_idx = 0, cd_idx = 0;
//    ll res = 0;
//    int i, j;
//
//    while(ab_idx < n * n && cd_idx < n * n){
//        int val = A_B[ab_idx] + C_D[cd_idx];
//        if (val > 0) cd_idx++;
//        else if (val < 0) ab_idx++;
//        else {
//            i = ab_idx;
//            j = cd_idx;
//            while(i < n * n && A_B[ab_idx] == A_B[i]) {
//                i++;
//            }
//            while(j < n * n && C_D[cd_idx] == C_D[j]) {
//                j++;
//            }
//            res += (ll)(i - ab_idx) * (j - cd_idx);
//            ab_idx = i;
//            cd_idx = j;
//        }
//    }
//    cout << res;
//}