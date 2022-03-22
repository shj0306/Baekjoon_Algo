//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
///*
// * 1~N 까지의 합 = X라고 할 때
// * X를 만들 수 있는 서로 다른 자연수의 개수의 최댓값 = N
// */
//int main() {
//    fast_io;
//    long long S; cin >> S;
//    long long l = 1, r = 100000;
//    long long ans = 1;
//    while(l < r) {
//        long long mid = (l+r+1) / 2;
//        long long sum = mid * (mid + 1) / 2;
//        if (sum > S) r = mid - 1;
//        else {
//            l = mid;
//            ans = max(ans, mid);
//        }
//    }
//    cout << ans;
//}