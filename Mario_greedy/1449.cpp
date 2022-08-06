#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, L, x, cnt, check[1000]; //안 새게 막혀있는 지 여부
vector<int> pipe;

int main() {
    fast_io;
    cin >> N >> L;
    for (int i = 1; i <= N; i++) {
        cin >> x;
        pipe.push_back(x);
    }
    sort(all(pipe));

    double r = 0;
    for (int i = 0; i < pipe.size(); i++) {
        x = pipe[i];
        if (check[i]) continue;
        r = x + L - 0.5; cnt++;
        for (int j = i+1; j < pipe.size(); j++) {
            if (pipe[j] <= r) check[j] = true;
            else break;
        }
    }

    cout << cnt;
}