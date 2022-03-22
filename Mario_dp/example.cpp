/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
//fibonachi
//중복되는 계산이 많다.
//메모이제이션 필요

long long dp[101];
//bottom-up
long long fib_bot(int n) {
    for (int i = 2; i <= n; i++) dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}
//top-down
long long fib_top(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    // 이미 값을 계산한 적이 있다면 그 값을 바로 리턴
    if(dp[n] != -1) return dp[n];
    // 아니라면 계산해서 dp 리스트에 넣어 보존
    return dp[n] = fib_top(n-2) + fib_top(n-1);
}

int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    dp[0] = 0; dp[1] = 1;
    cout << fib_bot(n) << '\n';
    cout << fib_top(n) << '\n';
    return 0;
}*/
