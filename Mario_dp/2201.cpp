/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using ll = long long;
const int MAX = 100;
ll dp[MAX], K; //dp[MAX] : 길이가 MAX인 이친수 시작 번호

void init() {
    dp[1] = 1; dp[2] = 2;
    for (int i = 3; i <= MAX; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
}

void solve() {
    int length = 0;
    for (int i = 1; i <= MAX; i++) {
        if (dp[i] > K) {
            length = i - 1;
            break;
        }
    }

    while(length) {
        if (dp[length] <= K) { // skip
            cout << 1;
            K -= dp[length];
        }else cout << 0;
        length--;
    }
    cout << '\n';
}

int main() {
    fast_io;
    init();
    cin >> K;
    solve();
}*/
