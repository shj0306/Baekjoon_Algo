//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//ll K, dp[100][2]; //길이가 N이고 마지막 숫자가 0/1인 이친수 개수
//ll pSum[100];
////길이가 N인 이친수 중 가장 큰 수가 전제 이친수에서 몇번째인지
////pSum[i] = pSum[i-1] + dp[i][0] + dp[i][1]
////길이가 i-1인 이친수 중 가장 큰 수의 위치 + 길이가 i인 이친수 전체 개수
//
//
//int main() {
//    fast_io;
//    cin >> K;
//
//    if (K == 1) {
//        puts("1");
//        return 0;
//    }
//    //이친수 개수 구하기
//    dp[1][0] = 0; dp[1][1] = 1;
//    pSum[1] = 1;
//    for (int i = 2; i <= 90; i++) {
//        dp[i][0] = dp[i-1][0] + dp[i-1][1];
//        dp[i][1] = dp[i-1][0];
//        pSum[i] = pSum[i-1] + dp[i][0] + dp[i][1];
//    }
//    for (int i = 2; i <= 90; i++) {
//        if (K <= pSum[i]) {
//            N = i;
//            break;
//        }
//    }
//    //skip함수와 동일
//    while(N > 0) {
//        if (K > pSum[N-1]) {
//            cout << '1';
//            K -= pSum[N-1] + 1;
//        }else cout << '0';
//        N -= 1;
//    }
//}
////https://glanceyes.tistory.com/43 참고