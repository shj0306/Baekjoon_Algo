#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int T,N, pre[1001], ino[1001], Index[1001];

void solve(int ps, int pe, int is, int ie) {

    if (ps > pe || is > ie) return;
    if (is == ie) {
        cout << ino[is] << ' ';
        return;
    }
    int idx = Index[pre[ps]];
    int cnt = idx - is;
    solve(ps+1, ps+cnt, is, idx-1);
    solve(ps+cnt+1, pe, idx+1, ie);
    cout << pre[ps] << ' ';
}

int main() {
    fast_io;
    cin >> T;
    while(T--) {
        cin >> N;

        for (int i = 0; i < N; i++) cin >> pre[i];
        for (int i = 0; i < N; i++) {
            cin >> ino[i];
            Index[ino[i]] = i;
        }

        solve(0, N-1,0,N-1);
        cout << '\n';
    }
}