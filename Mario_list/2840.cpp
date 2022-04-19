/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<char> ans(n, '?');
    vector<pair<int,char>> v(k);
    map<char,int> m1; //중복 여부 검사
    for (int i = 0; i < k; i++) cin >> v[i].first >> v[i].second;
    int tmp = 0;
    for (int i = 0; i < k; i++) {
        tmp = (tmp+v[i].first) % n;
        if (ans[tmp] != '?' && ans[tmp] != v[i].second) {
            cout << '!' << '\n';
            return 0;
        }
        else ans[tmp] = v[i].second;
    }
    for (int i = 0; i < n; i++) { //같은 숫자가 2번 등장시 실패
        if (m1[ans[i]] && ans[i] != '?') {
            cout << '!' << '\n';
            return 0;
        }
        m1[ans[i]]++;
    }
    for (int i = tmp; i >= 0; i--) cout << ans[i];
    for (int i = n-1; i > tmp; i--) cout << ans[i];
    return 0;
}*/
