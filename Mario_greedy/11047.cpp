#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, K, ans, idx, coin[11];
int main() {
    fast_io;
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> coin[i];
    idx = N;

    while(K > 0) {
        int cost = coin[idx];
        if (cost > K) {
            idx--;
            continue;
        }
        ans += K / cost;
        K %= cost;
    }
    cout << ans;
}