//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const long long INF = 2e18;
//int n;
//long long total;
//// 각 사람들까지 거리의 합이 최소가 되려면 우체국을 설치 하는 위치
//// 기준으로 양 쪽 인구가 비슷 해야 한다.
//int main() {
//    fast_io;
//    cin >> n;
//    vector<pii> v(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> v[i].first >> v[i].second;
//        total += v[i].second;
//    }
//
//    sort(all(v));
//
//    long long cur = 0;
//    for (int i = 0; i < n; i++) {
//        cur += v[i].second;
//        if (cur >= (total+1) / 2) {
//            cout << v[i].first;
//            break;
//        }
//    }
//}