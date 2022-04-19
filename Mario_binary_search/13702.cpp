//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, K;
//ll total;
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    vector<int> mak(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> mak[i];
//        total += mak[i];
//    }
//
//    ll s = 1, e = total / K, mid;
//    ll ans = 0;
//    while(s <= e) {
//        //분배하려는 막걸리 용량
//        mid = (s+e) / 2;
//        ll cnt = 0;
//        for (int i = 0; i < N; i++)
//            cnt += mak[i] / mid;
//        if (cnt >= K) {
//            ans = max(ans, mid);
//            s = mid + 1;
//        }else e = mid - 1;
//    }
//    cout << ans;
//}