/*
#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
bool is_okay;
vector<vi> c,s;
vi ans;
void bin_search(int val, vi &temp, int start, int end) {
    int mid = (start + end) / 2;
    if (start > end) {
        is_okay = false;
        return;
    }
    if (temp[mid] == val) {
        is_okay = true;
        return;
    }
    else if (temp[mid] > val) bin_search(val, temp, start, mid-1);
    else bin_search(val, temp, mid+1, end);
}
void input(int m, vector<vi> &v) {
    for (int i = 0; i < m; i++) {
        int t; int time;
        cin >> t;
        for (int j = 0; j < t; j++) {
            cin >> time;
            v[i].push_back(time);
        }
    }
}
void INPUT() {
    int n,m;
    cin >> n;
    c = vector<vi>(n);
    input(n, c);
    cin >> m;
    s = vector<vi>(m);
    input(m, s);
}
void SORT() {
    for (auto & i : c) sort(begin(i), end(i));
    for (auto & i : s) sort(begin(i), end(i));
}
void SOLVE() {
    ans = vi(s.size(),0);
    for (int i = 0; i < s.size(); i++) {
        vi temp = s[i];
        for (auto & j : c) {
            if (temp.size() < j.size()) continue;
            for (int k : j) {
                bin_search(k, temp, 0, temp.size() - 1);
                if (!is_okay) break;
            }
            if (is_okay) ans[i]++;
        }
    }
}
void ANSWER() {
    for (auto &val : ans) cout << val << '\n';
}
int main() {
    INPUT();
    SORT();
    SOLVE();
    ANSWER();
}*/
