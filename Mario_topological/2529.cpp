#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const ll INF = 1e10;
int K, check[10];
ll max_ans, min_ans = INF;
string max_ans_str, min_ans_str;
vector<char> op;

void solve(int idx, int prev, const string& num) {
    if (idx == K) {
        max_ans = max(max_ans, stoll(num));
        min_ans = min(min_ans, stoll(num));
        return;
    }

    for (int i = 0; i <= 9; i++) {
        if (check[i]) continue;
        check[i] = 1;
        if (op[idx] == '<') {
            if (prev < i) solve(idx+1, i, num + to_string(i));
        }else {
            if (prev > i) solve(idx+1, i, num + to_string(i));
        }
        check[i] = 0;
    }
}

int main() {
    fast_io;
    cin >> K;
    op.resize(K);

    for (int i = 0; i < K; i++) cin >> op[i];

    for (int i = 0; i <= 9; i++) {
        check[i] = 1;
        solve(0, i, to_string(i));
        check[i] = 0;
    }

    max_ans_str = to_string(max_ans);
    min_ans_str = to_string(min_ans);

    if (max_ans_str.length() != K+1)
        max_ans_str.insert(0, 1, '0');
    if (min_ans_str.length() != K+1)
        min_ans_str.insert(0,1,'0');

    cout << max_ans_str << '\n' << min_ans_str;
}