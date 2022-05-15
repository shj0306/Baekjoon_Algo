#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int N, k;

bool possible(int val) {

    ll cnt = 0;
    for (int i = 1; i <= N; i++) {
        cnt += min(val / i, N);
    }
    return cnt >= k;
}

int main() {
    fast_io;
    cin >> N >> k;

    int l = 1, r = 1e9, mid;

    while(l <= r) {
        //B[k]ÀÇ ÈÄº¸
        mid = (l+r) / 2;
        if (possible(mid)) {
            r = mid - 1;
        }else {
            l = mid + 1;
        }
    }

    cout << l;
}