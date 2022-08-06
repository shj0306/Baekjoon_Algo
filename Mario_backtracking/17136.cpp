#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, ans = 26, paper[11][11], used[6];

bool possible(int l, int r, int c) {
    for (int i = r; i < r + l; i++) {
        for (int j = c; j < c + l; j++) {
            if (paper[i][j] == 0) return false;
        }
    }
    return true;
}

void process_paper(int l, int r, int c, int val) {
    for (int i = r; i < r + l; i++) {
        for (int j = c; j < c + l; j++) {
            paper[i][j] = val;
        }
    }
}

void backtracking(int r, int c, int cnt) {
    if (r > 10) {
        ans = min(ans, cnt);
        return;
    }
    if (c > 10) {
        backtracking(r+1, 1, cnt);
        return;
    }
    if (paper[r][c] == 0) backtracking(r, c+1, cnt);
    else {
        for (int i = 5; i >= 1; i--) {
            if (used[i] == 5) continue;
            if (possible(i, r, c)) {
                process_paper(i, r, c, 0);
                used[i]++;
                backtracking(r, c+1, cnt + 1);
                used[i]--;
                process_paper(i, r, c, 1);
            }
        }
    }
}

int main() {
    fast_io;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cin >> paper[i][j];
        }
    }

    backtracking(1,1,0);
    cout << (ans == 26 ? -1 : ans);
}