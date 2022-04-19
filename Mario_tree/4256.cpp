/*
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
vector<int> inorder, preorder;
int t, n;
void dfs(int idx, int idx1, int idx2) { //idx: root idx, idx1 : left idx2 : right
    int idx3 = 0;
    for (int i = idx1; i <= idx2; i++) {
        if (inorder[i] == preorder[idx]) {
            idx3 = i; break;
        }
    }
    if (idx3 != idx1) dfs(idx+1, idx1, idx3 - 1);
    if (idx3 != idx2) dfs(idx + idx3 - idx1 + 1, idx3 + 1, idx2);
    cout << preorder[idx] << ' ';
}

int main() {
    fast_io;
    cin >> t;
    while(t--) {
        cin >> n;
        preorder = inorder = vector<int>(n);
        for (int i = 0; i < n; i++) cin >> preorder[i];
        for (int i = 0; i < n; i++) cin >> inorder[i];
        dfs(0,0, n-1);
        cout << '\n';
    }
    return 0;
}
*/
