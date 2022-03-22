//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    long long N; cin >> N;
//    long long st = 0, en = (long long)sqrt(N)+1;
//    long long ans = en;
//    while(st <= en) {
//        long long mid = (st+en) / 2;
//        if (mid * mid >= N) {
//            ans = min(ans, mid);
//            en = mid-1;
//        }else st = mid + 1;
//    }
//    cout << ans;
//}