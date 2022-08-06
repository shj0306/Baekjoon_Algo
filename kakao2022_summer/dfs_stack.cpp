#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N;
vector<vector<int>> v;
bool visited[1000];

int main() {
    fast_io;
    stack<int> stk;
    v.resize(6);

    for (int i = 1; i < 5; i++) {
        v[i].push_back(i+1);
    }

    stk.push(1);
    visited[1] = true;
    while(!stk.empty()) {
        int val = stk.top();
        cout << val << ' ';
        stk.pop();

        for (auto nxt : v[val]) {
            if (!visited[nxt]) {
                visited[nxt] = true;
                stk.push(nxt);
            }
        }
    }
}