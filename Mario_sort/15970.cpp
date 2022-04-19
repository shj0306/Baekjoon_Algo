//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//const int INF = 1e5+1;
//
//bool cmp(pii p, pii q) {
//    if (p.second == q.second) return p.first < q.first;
//    return p.second < q.second;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    vector<pii> v(N);
//    for (int i = 0; i < N; i++) cin >> v[i].first >> v[i].second;
//    sort(all(v), cmp);
//
//    int dist = 0;
//    for (int i = 0; i < N; i++) {
//        if (i == 0) dist += (v[i].second == v[i+1].second) ? v[i+1].first - v[i].first : 0;
//        else if (i == N-1) dist += (v[i].second == v[i-1].second) ? v[i].first - v[i-1].first : 0;
//        else{
//            int dist1 = (v[i].second == v[i+1].second) ? v[i+1].first - v[i].first : INF;
//            int dist2 = (v[i].second == v[i-1].second) ? v[i].first - v[i-1].first : INF;
//            dist += min(dist1, dist2);
//        }
//    }
//
//    cout << dist;
//}