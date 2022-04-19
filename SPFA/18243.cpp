//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//const int INF = 1e9;
//int N, K;
//int arr[101][101];
//
//bool check() {
//    for (int i = 1; i <= N; i++) {
//        for (int j = i+1; j <= N; j++) {
//            if (arr[i][j] > 6) return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//
//    for (int i = 1; i <= N; i++) {
//        fill(arr[i]+1, arr[i]+N+1, INF);
//    }
//
//    for (int i = 1; i <= K; i++) {
//        int u, v; cin >> u >> v;
//        arr[u][v] = 1;
//        arr[v][u] = 1;
//    }
//
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
//            }
//        }
//    }
//    check() ? cout << "Small World!" : cout << "Big World!";
//}