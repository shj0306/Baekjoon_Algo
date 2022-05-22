#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, val;
vector<int> preorder;

void solve(int s, int e) {
    if (s + 1 == e) {
        cout << preorder[s] << ' ';
        return;
    }else if (s + 1 > e) return;

    int root = preorder[s];
    int idx = upper_bound(begin(preorder)+s, begin(preorder)+e-1, root) - begin(preorder);
    if (preorder[idx] < root) idx++;
    solve(s+1, idx);
    solve(idx, e);
    cout << root << ' ';
}

int main() {
    fast_io;
    while(cin >> val) {
        preorder.push_back(val);
    }
    N = (int)preorder.size();
    solve(0, N);
}