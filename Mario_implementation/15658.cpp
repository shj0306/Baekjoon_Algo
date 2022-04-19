/*
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
int n;
int max_val, min_val;
int val;
vi v, op;

void dfs(int depth) {

    if (depth == n) {
        if (max_val < val) max_val = val;
        if (min_val > val) min_val = val;
        return;
    }
    if (op[0]) {
        op[0]--; val += v[depth];
        dfs(depth+1);
        val -= v[depth]; op[0]++;
    }if (op[1]) {
        op[1]--; val -= v[depth];
        dfs(depth+1);
        val += v[depth]; op[1]++;
    }if (op[2]) {
        op[2]--; val *= v[depth];
        dfs(depth+1);
        val /= v[depth]; op[2]++;
    }if (op[3]) {
        op[3]--; int mod = val % v[depth];
        val /= v[depth];
        dfs(depth+1);
        val = val * v[depth] + mod;
        op[3]++;
    }
}
int main() {
    cin >> n;
    v = vi(n); op = vi(4);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < 4; i++) cin >> op[i];
    max_val = -1e9;
    min_val = 1e9;
    val = v[0];
    dfs(1);
    cout << max_val << '\n';
    cout << min_val << '\n';
}
*/
