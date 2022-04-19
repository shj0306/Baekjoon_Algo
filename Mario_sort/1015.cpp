//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//bool check[1000];
//
//int main() {
//    fast_io;
//    cin >> N;
//    vector<int> v(N), v2(N);
//    vector<int> ans(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> v[i];
//        v2[i] = v[i];
//    }
//    sort(all(v));
//    for (int i = 0; i < N; i++) {
//        int val = v2[i];
//        for (int j = 0; j < N; j++) {
//            if (val == v[j] && !check[j]) {
//                check[j] = true;
//                ans[i] = j;
//                break;
//            }
//        }
//    }
//    for (auto val : ans) cout << val << ' ';
//}
