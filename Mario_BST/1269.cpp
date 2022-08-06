#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, val, is_cnt;

int main() {
    fast_io;
    cin >> N >> M;
    set<int> A;

    for (int i = 1; i <= N; i++) {
        cin >> val;
        A.insert(val);
    }

    for (int i = 1; i <= M; i++) {
        cin >> val;
        if (A.find(val) != A.end()) { //교집합
            is_cnt++;
        }
    }
    cout << N + M - 2 * is_cnt;
}