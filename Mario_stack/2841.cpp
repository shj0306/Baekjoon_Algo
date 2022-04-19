/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int main() {
    int n, p, a,b, ans = 0;
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> p;
    vector<stack<int>> v(7);
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (v[a].empty() || v[a].top() < b) {
            v[a].push(b);
            ans++;
        }else if (v[a].top() > b) {
            while(!v[a].empty()) {
                if (v[a].top() <= b) {
                    if (v[a].top() == b)
                        break;
                    v[a].push(b); ans++;
                    break;
                }
                v[a].pop();
                ans++;
            }
            if (v[a].empty()) {
                v[a].push(b);
                ans++;
            }
        }
    }
    cout << ans << '\n';
}*/
