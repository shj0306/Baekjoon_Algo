//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        if (i == N) {
//            for (int j = 1; j <= N * 2 - 1; j++) cout << '*';
//        }else {
//            int t = i * 2 - 1;
//            for (int j = 1; j <= N - i; j++) cout << ' ';
//            for (int j = 1; j <= t; j++) {
//                if (j == 1 || j == t) cout << '*';
//                else cout << ' ';
//            }
//        }
//        cout << '\n';
//    }
//}