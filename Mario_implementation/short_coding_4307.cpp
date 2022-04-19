/*
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int mn = -1, mx = -1;
        int L, N; cin >> L >> N;
        while (N--) {
            int x; cin >> x;
            mn = max(mn, min(x, L - x));
            mx = max(mx, max(x, L - x));
        }

        cout << mn << ' ' << mx << '\n';
    }
}
// measurezero code
*/
