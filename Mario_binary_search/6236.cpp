/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
    ll n, m, sum = 0, start, end, mid;
    cin >> n >> m;
    vector<int> money(n);
    for (int i = 0; i < n; i++) {
        cin >> money[i];
        sum += money[i];
    }

    start = *max_element(all(money));
    end = sum;
    while (start <= end) {
        mid = (start + end) / 2;
        ll cnt = 1; ll tmp = mid;
        for (int i = 0; i < n; i++) {
            if (tmp < money[i]) {
                tmp = mid;
                cnt++; //인출 횟수 증가
            }
            tmp -= money[i];
        }
        if (cnt <= m) {
            end = mid - 1;
        }else start = mid + 1;
    }
    cout << start << '\n';
    return 0;
}
*/
