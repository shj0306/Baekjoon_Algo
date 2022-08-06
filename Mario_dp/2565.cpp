#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, dp[101], lis;
vector<pii> v;
//LIS º¯Çü

int main() {
    fast_io;
    cin >> N;
    v.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(all(v));

    for (int i = 0; i < N; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (v[j].second < v[i].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    for (int i = 0; i < N; i++) lis = max(lis, dp[i]);
    cout << N - lis << '\n';
}
