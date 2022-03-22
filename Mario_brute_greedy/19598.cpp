//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//
//bool cmp(pii p1, pii p2) {
//    if (p1.first == p2.first) return p1.second < p2.second;
//    return p1.first < p2.first;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<pii> conf(n);
//    priority_queue<int, vector<int>, greater<>> pq;
//
//    for (int i = 0; i < n; i++) cin >> conf[i].first >> conf[i].second;
//
//    sort(all(conf), cmp);
//
//    pq.push(conf[0].second);
//
//    int res = 1;
//    for (int i = 1; i < n; i++) {
//        if (conf[i].first < pq.top()) res++;
//        else pq.pop();
//        pq.push(conf[i].second);
//    }
//    cout << res;
//}