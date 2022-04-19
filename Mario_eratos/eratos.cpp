//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int prime[2000];
//
////시간 복잡도 : O(NlogN)
//
//int main() {
//    fast_io;
//    fill(prime, prime+1000, 1);
//
//    prime[1] = 0; //1은 소수가 아니다.
//    for (int i = 4; i <= 100; i+=2) prime[i] = 0;
//
//    for (int i = 3; i <= 100; i+=2) {
//        if (prime[i]) {
//            for (int j = i*i; j < 100; j+=i*2) prime[j] = 0;
//        }
//    }
//
//    for (int i = 2; i <= 100; i++) {
//        if (prime[i]) cout << i << '\n';
//    }
//}