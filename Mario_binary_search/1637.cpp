//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 2147483647;
//int N;
//ll max_val;
//struct Info {
//    ll s, e, d;
//};
//vector<Info> v;
//
//ll check(ll mid) {
//    ll res = 0;
//    for (int i = 0; i < N; i++) {
//        ll val = min(v[i].e, mid) - v[i].s;
//        res += (val < 0 ? 0 : val / v[i].d + 1);
//    }
//    return res;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    v.resize(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> v[i].s >> v[i].e >> v[i].d;
//        max_val = max(max_val, v[i].e);
//    }
//
//    ll l = 1, r = max_val, mid;
//    ll ans = 0;
//    while(l <= r) {
//        mid = (l + r) / 2;
//        if (check(mid) % 2) { //[1,mid]범위가 홀수개라면
//            ans = mid;
//            r = mid - 1;
//        }else {//짝수개라면
//            l = mid + 1;
//        }
//    }
//    if (ans) {
//        cout << ans << ' ' << check(ans) - check(ans-1) << '\n';
//    }
//    else cout << "NOTHING" << '\n';
//}
//// https://kibbomi.tistory.com/205 참고
//// l : 가능한 수의 하한선 r : 가능한 수의 상한선
//// mid = (l + r) / 2
//// 이 때 [1,mid] 범위의 개수 합이 홀수라면 정답은 여기 있을 수 밖에 없다
//// 이유 : 홀수가 하나이기 때문에
//// 그런 방식으로 이분탐색을 진행하면 된다.
