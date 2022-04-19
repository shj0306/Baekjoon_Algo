//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 123456;
//int N, res, isPrime[2*MAX+1];
//
//int main() {
//    fast_io;
//
//    fill(isPrime, isPrime+2*MAX+1, 1);
//    isPrime[1] = 0;
//
//    for (int i = 2; i <= 2 * MAX; i++) {
//        if (isPrime[i]) {
//            for (ll j = 1LL * i * i; j <= 2 * MAX; j+=i) isPrime[j] = 0;
//        }
//    }
//
//    while(true) {
//        cin >> N;
//        if (N == 0) break;
//        res = 0;
//
//        for (int i = N+1; i <= 2 * N; i++) {
//            if (isPrime[i]) res++;
//        }
//        cout << res << '\n';
//    }
//}