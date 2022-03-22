/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> card(n+1);
    vector<int> dp(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> card[i];
    dp[1] = card[1];
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i-j] + card[j]);
        }
    }
    cout << dp[n] << '\n';
}
*/
/*
 * i장을 뽑는 최대 갯수 = max(i장 뽑는 최대 값, i-j장 뽑는 최대값 + j장 들어있는 카드팩 값) (j >= 1 && j <= i)
 */
