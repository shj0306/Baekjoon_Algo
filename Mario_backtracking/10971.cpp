//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, arr[10][10], ans = 1e8, visited[10];
//
///**
// *  어느 한 도시에서 출발해 N개의 도시를 모두 거쳐
// *  다시 원래의 도시로 돌아오는 순회 여행 경로를 계획하려고 한다.
// *  단, 한 번 갔던 도시로는 다시 갈 수 없다.
// */
//
//void TSP(int src, int checked, int cost) {
//
//    if (checked == (1 << N)-1) {
//        if (arr[src][0]) ans = min(ans, cost + arr[src][0]);
//        return;
//    }
//
//    for (int i = 0; i < N; i++) {
//        if (!visited[i] && arr[src][i]) {
//            visited[i] = true;
//            TSP(i, checked | 1 << i, cost + arr[src][i]);
//            visited[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> arr[i][j];
//        }
//    }
//
//    visited[0] = true;
//    TSP(0, 1 << 0, 0);
//    cout << ans;
//}