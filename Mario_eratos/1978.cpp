//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, isPrime[1001], res;
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    fill(isPrime, isPrime+1001, 1);
//    isPrime[1] = 0;
//    for (int i = 4; i <= 1000; i+=2) isPrime[i] = 0;
//
//    for (int i = 3; i <= 1000; i+=2) {
//        if (isPrime[i]) {
//            for (int j = i * i; j <= 1000; j += i * 2) isPrime[j] = 0;
//        }
//    }
//
//    for (int i = 0; i < N; i++) {
//        int val; cin >> val;
//        if (isPrime[val]) res++;
//    }
//    cout << res;
//}