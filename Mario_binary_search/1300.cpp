//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//ll N, K;
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//
//    ll s = 1, e = N * N, mid;
//    ll ans;
//    while(s <= e) {
//        mid = (s + e) / 2;
//        ll cnt = 0; //mid���� ���ų� ���� ����
//        for (int i = 1; i <= N; i++) {
//            cnt += (mid / i >= N ? N : mid / i);
//        }
//        if (cnt >= K) {
//            ans = mid;
//            e = mid - 1;
//        }
//        else s = mid + 1;
//    }
//    cout << ans;
//}