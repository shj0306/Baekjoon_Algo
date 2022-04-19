/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, val, new_val, ans;

int main() {
    fast_io;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    for (int i = 0; i < n; i++) {
        cin >> val;
        pq.push(val);
    }

    if (n == 1) cout << 0 << '\n';
    else {
        while (pq.size() > 1) {
            int num1, num2;
            num1 = pq.top(); pq.pop();
            num2 = pq.top(); pq.pop();
            new_val = num1 + num2;
            ans += new_val;
            pq.push(new_val);
        }
        cout << ans << '\n';
    }
    return 0;
}*/
