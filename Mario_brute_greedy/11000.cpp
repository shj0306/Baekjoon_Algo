//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, res = 1;
//
//bool cmp(pii p1, pii p2) {
//    if (p1.first == p2.first) return p1.second < p2.second;
//    return p1.first < p2.first;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<pii> v;
//    for (int i = 0; i < n; i++) {
//        int s, t; cin >> s >> t;
//        v.emplace_back(s,t);
//    }
//
//    sort(all(v), cmp);
//    //현재 수업 중 가장 빨리 끝나는 수업 시간을 빼줘야 한다.
//    //최소힙 사용
//    priority_queue<int, vector<int>, greater<>> pq;
//
//    pq.push(v[0].second);
//
//    for (int i = 1; i < n; i++) {
//        if (v[i].first < pq.top()) res++;
//        else pq.pop();
//        pq.push(v[i].second);
//    }
//    cout << res;
//}