//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int INF = 1e9+1;
//int N;
//vector<long long> dist;
//vector<pair<int, int>> oil;
//
//void init() {
//    for (int i = 2; i <= N; i++) {
//        if (i == 2) cin >> dist[i];
//        else {
//            cin >> dist[i];
//            dist[i] += dist[i-1];
//        }
//    }
//    int oi = INF;
//    for (int i = 1; i <= N; i++) {
//        int _oil; cin >> _oil;
//        if (i == N) continue;
//        if (oi <= _oil) continue;
//        oi = _oil;
//        oil.emplace_back(_oil, i);
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    dist = vector<long long>(N+1);
//    init();
//    int sz = (int)oil.size();
//    long long money = 0; int e = N;
//    for (int i = sz-1; i >= 0; i--) {
//        int cost = oil[i].first;
//        int idx = oil[i].second;
//        money += cost * (dist[e] - dist[idx]);
//        e = idx;
//    }
//    cout << money << '\n';
//}