//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n;
//
//bool cmp(pii p1, pii p2) {
//    if (p1.second == p2.second) return p1.first < p2.first;
//    return p1.second < p2.second;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//
//    vector<pii> time(n);
//
//    for (int i = 0; i < n; i++) cin >> time[i].first >> time[i].second;
//
//    sort(all(time), cmp);
//
//    int cnt = 0, prev = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (prev <= time[i].first) {
//            cnt++;
//            prev = time[i].second;
//        }
//    }
//    cout << cnt;
//}