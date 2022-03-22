//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//long long N, k;
//vector<int> v;
//
//int main() {
//    fast_io;
//    cin >> N >> k;
//    for (int i = 1; i <= N; i++) v.push_back(i);
//
//    long long lo = 1, hi = k;
//
//    //마지막 값이 k인 이유는 B[K]의 값은 K보다 작거나 같기 때문이다.
//    while(lo <= hi) {
//        long long mid = (lo + hi) / 2;
//        long long cnt = 0;
//        for (int i = 1; i <= N; i++) cnt += min(mid / i, N);
//        if (cnt >= k) hi = mid - 1;
//        else lo = mid + 1;
//
//    }
//    cout << lo << '\n';
//}