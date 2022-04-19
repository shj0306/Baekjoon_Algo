/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n, m;
string arr[100001];
unordered_map<string, int> m1;

int main() {
    fast_io;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        m1[arr[i]] = i;
    }
    string q;
    for (int i = 0; i < m; i++) {
        cin >> q;
        if (m1.find(q) != m1.end()) cout << m1[q] << '\n';
        else cout << arr[stoi(q)] << '\n';
    }
    return 0;
}
*/
