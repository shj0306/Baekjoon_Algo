//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
////N의 소인수분해
//int main() {
//    fast_io;
//    cin >> N;
//
//    vector<bool> isPrime(N+1, true);
//    vector<int> prime(1, 2);
//
//    for (int i = 4; i <= N; i+=2) isPrime[i] = false;
//
//    for (int i = 3; i <= N; i+=2) {
//        if (isPrime[i]) {
//            prime.push_back(i);
//            for (int j = i * i; j <= N; j+=i*2) {
//                isPrime[j] = false;
//            }
//        }
//    }
//
//    //소인수분해
//    for (int i = 0; N > 1; i++) {
//        while(N % prime[i] == 0) {
//            cout << prime[i] << ' ';
//            N /= prime[i];
//        }
//    }
//}
