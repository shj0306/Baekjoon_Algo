//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
////https://david0506.tistory.com/34 참고
//int n;
//ll k;
//int main() {
//    fast_io;
//    cin >> n >> k;
//
//    if (k-1 == n) {
//        cout << "YES";
//        return 0;
//    }
//
//    long long left = 0, right = n/2 + 1;
//    while(left <= right) {
//        long long mid = (left + right) / 2; //가로 혹은 세로를 자른 횟수
//        long long res = (mid + 1) * (n - mid + 1);
//        if (res == k) {
//            cout << "YES" << '\n';
//            return 0;
//        }else {
//            if (res > k) right = mid-1;
//            else left = mid + 1;
//        }
//    }
//    cout << "NO" << '\n';
//}
///*
// * x + y = n
// * x * y => x와 y의 차이가 작을 수록 값은 커진다.
// * x => 가로(혹은 세로) 자른 횟수 (0 ~ N)
// * (x+1) * (N-x+1) = K
// * y = (x+1)N -x(x+1) + (x+1) = -x^2 + Nx + (N + 1)
// * y = k
// * 둘의 교점 존재 확인
// */