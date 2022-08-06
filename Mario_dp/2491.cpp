#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
int N, ans, arr[MAX], dp[MAX], rdp[MAX];

int main() {
    fast_io;
    cin >> N;

    stack<int> stk;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        dp[i] = rdp[i] = 1;
    }

    //연속해서 커지거나 작아지는(같은 거 포함)
    for (int i = 1; i < N; i++) {
        if (arr[i] >= arr[i-1]) dp[i] = dp[i-1] + 1;
        if (arr[i] <= arr[i-1]) rdp[i] = rdp[i-1] + 1;
    }

    for (int i = 0; i < N; i++) {
        ans = max(ans, max(dp[i], rdp[i]));
    }
    cout << ans;
}