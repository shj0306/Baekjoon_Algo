/*
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n,s, current_sum, cnt;

void dfs(int start) {
    if (start == n) return;
    if (current_sum + v[start] == s) cnt++;
    dfs(start+1);
    current_sum += v[start];
    dfs(start + 1);
    current_sum -= v[start];
}

int main() {
    cin >> n >> s;

    v = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    dfs(0);
    cout << cnt << '\n';
    return 0;
}*/
