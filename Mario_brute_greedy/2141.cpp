//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const long long INF = 2e18;
//int n;
//long long total;
//// �� �������� �Ÿ��� ���� �ּҰ� �Ƿ��� ��ü���� ��ġ �ϴ� ��ġ
//// �������� �� �� �α��� ��� �ؾ� �Ѵ�.
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