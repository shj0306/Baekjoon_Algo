/*
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int row);
int N, ans = 0;
vector<int> col;

void dfs(int row) {
    if (row > N) {
        ++ans;
    }else {
        for (int i = 1; i <= N; i++) {
            col[row] = i;
            if (isPossible(row)) {
                dfs(row+1);
            }else col[row] = 0;
        }
    }
}
bool isPossible(int row) {
    for (int i = 1; i < row; i++) {
        if (col[i] == col[row] || (abs(col[row]-col[i]) == abs(row-i)))
            return false;
    }
    return true;
}

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        col = vector<int>(N+1);
        col[1] = i;
        dfs(2);
    }
    cout << ans <<'\n';
}
*/
