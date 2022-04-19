//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
///*
// * 도시가 16개까지 가능
// * 1<<16
// * 한 외판원이 어느 한 도시에서 출발해 N개의 도시를 모두 거쳐
// * 다시 원래의 도시로 돌아오는 순회 여행 경로를 계획하려고 한다.
// * 단, 한 번 갔던 도시로는 다시 갈 수 없다.
// * Dynamic Programming, Bit masking
// */
//const int INF = 1e9;
//int N;
//int dp[16][1<<16];
//vector<vector<int>> trip;
//int solve(int city, int visited) {
//    if (visited == (1 << N) -1) return trip[city][0] ? trip[city][0] : INF;
//    int &ret = dp[city][visited];
//    if (ret != -1) return ret;
//    ret = INF;
//    for (int i = 0; i < N; i++) {
//        if (!(visited & (1 << i)) && trip[city][i]) {
//            ret = min(ret, solve(i, visited | (1 << i)) + trip[city][i]);
//        }
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    trip = vector<vector<int>>(N, vector<int>(N));
//    memset(dp, -1, sizeof(dp));
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> trip[i][j];
//        }
//    }
//    cout << solve(0, 1) << '\n';
//}