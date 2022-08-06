#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, max_len, arr[201], dp[201];
//LIS

int main() {
    fast_io;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        dp[i] = 1;
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        max_len = max(max_len, dp[i]);
    }

    cout << N - max_len << '\n';
}