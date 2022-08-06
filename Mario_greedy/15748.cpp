#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
using pll = pair<ll,ll>;
ll L, N, rf, rb, x, c;
ll ans;
vector<pll> rs;

int main() {
    fast_io;
    cin >> L >> N >> rf >> rb;

    for (int i = 1; i <= N; i++) {
        cin >> x >> c;
        rs.emplace_back(c,x);
    }
    sort(all(rs), greater<>());

    ll cur_pos = 0;
    for (int i = 0; i < rs.size(); i++) {
        auto [cost, pos] = rs[i];
        if (cur_pos >= pos) continue;
        ll time = (rf-rb) * (pos-cur_pos);
        ans += time * cost;
        cur_pos = pos;
    }

    cout << ans;
}