/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using ll = long long;
using pli=pair<long long, int>;

ll p[100];
ll mx = 0;

int main() {
    fast_io;
    int k,n;
    cin >> k >> n;
    for (int i = 0; i < k; i++) cin >> p[i];
    priority_queue<pli, vector<pli>, greater<pli>> pq;

    for (int i = 0; i < k; i++) pq.emplace(p[i], i);

    while(true) {
        auto tmp = pq.top();
        pq.pop();
        n--;
        if (n == 0) {
            cout << tmp.first;
            return 0;
        }
        for (int j = tmp.second; j < k; j++) {
            pq.emplace(tmp.first*p[j], j);
            mx = max(mx, tmp.first*p[j]);
        }
    }
}
*/
