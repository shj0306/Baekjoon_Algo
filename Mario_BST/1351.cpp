#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int P, Q;
ll N;
map<ll, ll> mp;

ll solve(ll n) {
    if (n == 0) return 1;
    if (mp.find(n) != mp.end()) return mp[n];
    mp[n] = solve(n/P) + solve(n/Q);
    return mp[n];
}

int main() {
    fast_io;
    cin >> N >> P >> Q;

    cout << solve(N);
}