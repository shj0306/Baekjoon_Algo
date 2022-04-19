/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve(int tc) {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;
    int k = s.size();

    vector<pair<int,int>> x(k), y(k); //x의 min,max y의 min,max
    pair<int,int> curr = {0,0};
    for (int i = 0; i < k; i++) {
        if (i) {
            x[i] = x[i-1];
            y[i] = y[i-1];
        }
        if (s[i] == 'L') curr.first--;
        else if (s[i] == 'R') curr.first++;
        else if (s[i] == 'U') curr.second--;
        else curr.second++;

        x[i].first = min(x[i].first, curr.first);
        x[i].second = max(x[i].second, curr.first);

        y[i].first = min(y[i].first, curr.second);
        y[i].second = max(y[i].second, curr.second);
    }

    for (int i = k - 1; i >= 0; i--) {
        if (x[i].second - x[i].first + 1 > m) continue;
        if (y[i].second - y[i].first + 1 > n) continue;
        printf("%d %d\n", 1 - y[i].first, 1 - x[i].first);
        return;
    }
    cout << 1 << " " << 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
    return 0;
}*/
