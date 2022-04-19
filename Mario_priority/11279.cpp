/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

priority_queue<int> pq;

int main() {
    fast_io;
    int N, val;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> val;
        if (val) {
            pq.push(val);
        }else {
            if (pq.empty()) {
                cout << 0 << '\n';
            }else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
    return 0;
}*/
