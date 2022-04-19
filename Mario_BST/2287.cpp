/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int k, n;
set<int> dp[9];
//dp(x) : x개의 K를 써서 만들 수 있는 모든 수의 조합
//dp(i+j) = dp(i) (+,-,*,/) dp(j)
void print(int num) {
    for (int i = 1; i <= 8; i++) {
        for (auto &val: dp[i]) {
            if (val == num) {
                cout << i << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
}
int main() {
    fast_io;
    cin >> k >> n;
    int tmp = k;

    for (int i = 1; i <= 8; i++) {
        dp[i].insert(tmp);
        tmp = tmp * 10 + k;
    }

    for (int ii = 1; ii < 8; ii++) {
        for (int jj = 1; ii+jj <= 8; jj++) {
            for (auto &val1: dp[ii]) {
                for (auto &val2: dp[jj]) {
                    dp[ii + jj].insert(val1 + val2);
                    dp[ii + jj].insert(val1 * val2);
                    if (abs(val1-val2)) dp[ii + jj].insert(abs(val1 - val2));
                    (val1 < val2) ? dp[ii+jj].insert(val2 / val1) : dp[ii+jj].insert(val1 / val2);
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        print(num);
    }
    return 0;
}*/
