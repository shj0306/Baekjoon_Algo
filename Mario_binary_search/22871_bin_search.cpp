//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
//
//const int MAX = 5000;
//int N, a[MAX];
//bool d[MAX]; //해당 위치에 도달이 가능한 지 여부를 저장한다.
//
//bool reachable(ll power) {
//    memset(d, false, sizeof(d));
//    d[0] = true;
//    for (int i = 1; i < N; i++) {
//        for (int j = 0; j < i; j++) { //i번째보다 앞에 있는 돌
//            if (d[j] && (ll)(i - j * (1 + abs(a[i] - a[j])) <= power)) d[i] = true;
//        }
//    }
//    return d[N-1];
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < N; i++) cin >> a[i];
//
//    ll left = 1, right = 1e10;
//    while(left < right) {
//        ll mid = (left + right) / 2;
//        if (reachable(mid)) right = mid;
//        else left = mid + 1;
//    }
//    cout << left << '\n';
//}
