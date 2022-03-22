/*
#include <bits/stdc++.h>
using namespace std;
const int MAX = 1001;
//flag = 0 : 1*2 사용, 1 : 2*1 사용
int dp[MAX];

int main() {
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }
    cout << dp[n] << '\n';
}*/
