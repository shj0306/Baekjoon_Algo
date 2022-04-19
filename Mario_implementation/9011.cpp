/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin.tie(0)->sync_with_stdio(0);
    cin >> t;
    while(t--) {
        int n; bool impossible = false;
        cin >> n;
        vector<int> r(n), temp(1), ans(n);
        for (int i = 0; i < n; i++) cin >> r[i];

        for (int i = 0; i < n; i++) {
            if (r[i] > i) { //최대로 가질 수 있는 값보다 더 큰 값이 입력된 경우
                impossible = true;
                break;
            }
            temp.insert(temp.begin()+r[i], i);
        }
        if (impossible) {
            cout << "IMPOSSIBLE" << '\n';
            continue;
        }
        for (int i = 0; i < n; i++) ans[temp[i]] = i+1;
        for (auto &val : ans) cout << val << ' ';
    }
}*/
