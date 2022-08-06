#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int L, P, V, ans;

int main() {
    fast_io;
    for (int t = 1; ; t++) {
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0) break;

        ans = L * (V / P);
        ans += (L < V % P ? L : V % P);
        cout << "Case " << t << ": " << ans << '\n';
    }
}