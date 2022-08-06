#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int D, V, T, ans;
vector<pii> contest;

int main() {
    fast_io;
    for (int i = 1; i <= 11; i++) {
        cin >> D >> V;
        contest.emplace_back(D,V);
    }
    sort(all(contest));

    T = 0;
    for (auto [t, v] : contest) {
        T += t;
        ans += T + 20 * v;
    }

    cout << ans;
}