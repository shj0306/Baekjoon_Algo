#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int R,C,nemo[26][26],ans=1;//아무것도 올려놓지 않은 상태 미리 카운트

bool check(int r, int c) {
    return nemo[r-1][c] && nemo[r][c-1] && nemo[r-1][c-1];
}

void backtracking(int r, int c) {
    if (r > R) return;
    if (c > C) {
        backtracking(r+1, 1);
        return;
    }
    nemo[r][c] = 1;
    if (nemo[r-1][c] == 0 || nemo[r][c-1] == 0 || nemo[r-1][c-1] == 0) {
        ans++;
        backtracking(r, c + 1);
    }
    nemo[r][c] = 0;
    backtracking(r,c+1);
}

int main() {
    fast_io;
    cin >> R >> C;

    backtracking(1,1);
    cout << ans;
}