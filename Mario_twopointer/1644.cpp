/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fast_io;
    int n, ans = 0;
    cin >> n;
    deque<int> prime;
    vector<bool> check;
    check.resize(n+1, true);

    for (int i = 2; i * i <= n; i++) {
        if (check[i]) {
            for (int j = i * 2; j <= n; j += i)
                check[j] = false;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (check[i]) {
            prime.push_back(i);
        }
    }

    int left = 0, right = 0, val = 0;
    while(true) {
        if (val < n) {
            if (right == prime.size()) break;
            val += prime[right];
            right++;
        }else {
            if (val == n) ans++;
            val -= prime[left];
            left++;
        }
    }
    cout << ans << '\n';
}
*/
