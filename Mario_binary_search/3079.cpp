#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long int;
int N, M;
ll max_val;
vector<ll> immi;

/*
 * 상한값을 1e18을 잡게 되면 possible 함수에서 Overflow 발생할 수 있음.
 */
bool possible(ll time) {
    ll res = 0;
    for (auto T : immi) res += time / T;
    return res >= M;
}

int main() {
    fast_io;
    cin >> N >> M;
    immi.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> immi[i];
        max_val = max(max_val, immi[i]);
    }


    ll l = 1, r = M * max_val, mid, ans = r;
    while(l <= r) {
        //친구들이 심사를 마치는 데 걸리는 시간
        mid = (l + r) / 2;
        //해당 시간 안에 M명이 모두 심사 받을 수 있는 지?
        if (possible(mid)) {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans;
}