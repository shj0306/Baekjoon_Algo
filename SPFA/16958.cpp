//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int INF = 1e9;
//
//int main() {
//    fast_io;
//    int N, M, T;
//    cin >> N >> T;
//    vector<pii> D(N+1);
//    vector<vector<int>> dist(N+1, vector<int>(N+1, INF));
//    vector<int> special;
//    for (int i = 1; i <= N; i++) {
//        int s;
//        cin >> s >> D[i].first >> D[i].second;
//        if (s) special.push_back(i);
//    }
//
//    cin >> M;
//    for (int i = 1; i <= M; i++) {
//        int u, v; cin >> u >> v;
//        int ret = abs(D[u].first - D[v].first) + abs(D[u].second - D[v].second);
//        int sx = INF;
//        int sy = INF;
//        for (auto spec : special) {
//            sx = min(sx, abs(D[spec].first - D[u].first) + abs(D[spec].second - D[u].second));
//            sy = min(sy, abs(D[spec].first - D[v].first) + abs(D[spec].second - D[v].second));
//        }
//        ret = min(ret, sx+sy+T);
//        cout << ret << '\n';
//    }
//}