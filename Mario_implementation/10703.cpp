/*
#include <bits/stdc++.h>
using namespace std;
typedef vector<char> vc;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r, s;
    cin >> r >> s;
    vector<vc> p(r + 1, vc(s + 1));
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= s; j++)
            cin >> p[i][j];
    vector<int> m(s + 1, 0), g(s+1, r);
    int min_diff = r - 1;
    for (int i = 1; i <= s; i++) {
        for (int j = 1; j <= r; j++) {
            if (p[j][i] == 'X') {
                m[i] = max(m[i], j);
            } else if (p[j][i] == '#') {
                g[i] = min(g[i], j);
            }
            if (m[i] == 0) continue;
            min_diff = min(min_diff, g[i]-m[i]);
        }
    }
    for (int i = r; i >= 1; i--) {
        for (int j = s; j >= 1; j--) {
            if (p[i][j] == 'X') {
                p[i][j] = '.';
                p[i + min_diff - 1][j] = 'X';
            }
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= s; j++)
            cout << p[i][j];
        cout << '\n';
    }
}*/
