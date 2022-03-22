//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//const int INF = 1e9;
//int N, dist[11][11];
//bool visited[11];
//
//int tsp(int idx, int cost, int cnt) {
//    if (cnt == N) return dist[idx][1] ? cost + dist[idx][1] : INF;
//    visited[idx] = true;
//    int res = INF;
//    for (int i = 1; i <= N; i++) {
//        if (!visited[i] && dist[idx][i]) {
//            res = min(res, tsp(i, cost + dist[idx][i], cnt+1));
//        }
//    }
//    visited[idx] = false;
//    return res;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> dist[i][j];
//        }
//    }
//    cout << tsp(1,0,1);
//}