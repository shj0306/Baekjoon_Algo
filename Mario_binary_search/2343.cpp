/*
#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n, m, end = 0, start, mid;
    cin >> n >> m;
    vector<int> blueray(n);
    for (int i = 0; i < n; i++) {
        cin >> blueray[i];
        end += blueray[i];
    }
    start = *max_element(all(blueray));
    while (start <= end) {
        mid = (start + end) / 2;
        ll cnt = 1, tmp = 0;
        for (int i = 0; i < n; i++) {
            if (tmp + blueray[i] > mid) {
                cnt++;
                tmp = 0;
            }
            tmp += blueray[i];
        }
        if (cnt <= m) end = mid - 1;
        else start = mid + 1;
    }
    cout << start << '\n';
}*/
