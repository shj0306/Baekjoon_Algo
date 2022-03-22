/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using ll = long long;
const int MAX = 200010;
const int MOD = 1000000007;
int N;
ll cnt[600000];
ll sum[600000];

void update(int n, int s, int e, int idx, int val) {
    if (s == e) {
        cnt[n]++; sum[n] += val;
        return;
    }
    int mid = (s+e) / 2;
    if (idx <= mid) update(n*2, s, mid, idx, val);
    else update(n*2+1, mid+1, e, idx, val);
    sum[n] = sum[n*2] + sum[n*2+1];
    cnt[n] = cnt[n*2] + cnt[n*2+1];
}

ll query(ll a[], int n, int s, int e, int l, int r) {
    if (r < s || e < l) return 0;
    if (l <= s && e <= r) return a[n];
    int mid = (s+e)/2;
    ll c1 = query(a, 2 * n, s, mid, l, r);
    ll c2 = query(a, 2 * n + 1, mid+1, e, l, r);
    return c1 + c2;
}

int main() {
    fast_io;
    cin >> N;
    ll ans = 1;
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        if (i == 0) update(1, 0, MAX, num, num);
        else {
            ll Lcnt = query(cnt, 1, 0, MAX, 0, num-1);
            ll Rcnt = query(cnt, 1, 0, MAX, num+1, MAX);
            ll Lsum = query(sum, 1, 0, MAX, 0, num-1);
            ll Rsum = query(sum, 1, 0, MAX, num+1, MAX);
            ll temp = (Rsum - Lsum) - (Rcnt - Lcnt) * num;
            temp %= MOD;
            ans *= temp;
            ans %= MOD;
            update(1, 0, MAX, num, num);
        }
    }
    cout << ans << '\n';
}*/
