//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, K;
//int arr[301][301];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            cin >> arr[i][j];
//            arr[i][j] += arr[i][j-1];
//        }
//    }
//    cin >> K;
//
//    for (int i = 0; i < K; i++) {
//        int r1, c1, r2, c2, res = 0;
//        cin >> r1 >> c1 >> r2 >> c2;
//
//        for (int row = r1; row <= r2; row++) res += arr[row][c2] - arr[row][c1-1];
//        cout << res << '\n';
//    }
//}