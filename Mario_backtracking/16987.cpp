#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;

struct Info {
    int s, w;
};

int N, state[9], ans;
vector<Info> eggs;

void backtracking(int idx, int cnt);

int main() {
    fast_io;
    cin >> N;
    eggs.resize(N+1);
    for (int i = 1; i <= N; i++)
        cin >> eggs[i].s >> eggs[i].w;
    backtracking(1, 0);
    cout << ans;
}

void backtracking(int idx, int cnt) {

    if (idx > N) {
        ans = max(ans, cnt);
        return;
    }else if (state[idx]) {
        backtracking(idx+1, cnt);
        return;
    }

    bool flag = false;
    for (int i = 1; i <= N; i++) {
        int brk_cnt = 0;
        if (!state[i] && idx != i) {
            eggs[idx].s -= eggs[i].w;
            eggs[i].s -= eggs[idx].w;
            flag = true;
            if (eggs[idx].s <= 0) {
                state[idx] = 1;
                brk_cnt++;
            }
            if (eggs[i].s <= 0) {
                state[i] = 1;
                brk_cnt++;
            }
            backtracking(idx+1, cnt + brk_cnt);

            eggs[idx].s += eggs[i].w;
            eggs[i].s += eggs[idx].w;
            state[idx] = 0;
            state[i] = 0;
        }
    }
    if (!flag) backtracking(idx+1, cnt);
}