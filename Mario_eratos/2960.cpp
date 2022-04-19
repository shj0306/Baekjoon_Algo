//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, K, cnt;
//int isPrime[1001];
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//
//    for (int i = 2; i <= N; i++) isPrime[i] = 1;
//
//    for (int i = 2; i <= N; i++) {
//        if (isPrime[i]) {
//            for (int j = i; j <= N; j += i) {
//                if (isPrime[j]) {
//                    isPrime[j] = 0;
//                    cnt++;
//                }
//                if (cnt == K) {
//                    cout << j;
//                    break;
//                }
//            }
//        }
//    }
//}