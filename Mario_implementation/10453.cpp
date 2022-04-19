/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string A, B;
    cin >> A >> B;
    vector<int> a, b;
    if (A.size() != B.size()) {
        cout << '-1' << '\n';
        return;
    }
    for (int i = 0; i < A.size(); i++)
        if (A[i] == 'a') a.push_back(i);

    for (int i = 0; i < B.size(); i++) {
        if (B[i] == 'a') b.push_back(i);
    }

    if (a.size() != b.size()) {
        cout << '-1' <<'\n'; return;
    }
    ll sum = 0;
    for (int i = 0; i < a.size(); i++)
        sum += abs(b[i] - a[i]);
    cout << sum <<'\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}*/
