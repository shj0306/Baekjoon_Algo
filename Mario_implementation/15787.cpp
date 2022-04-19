/*
#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
struct CMD {
    int num;
    int train;
    int seat;
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<CMD> command(M);
    vi train(N + 1, 0);

    for (int i = 0; i < M; i++) {
        cin >> command[i].num;
        if (command[i].num == 1 || command[i].num == 2) cin >>
        command[i].train >> command[i].seat;
        else cin >> command[i].train;
    }
    for (int i = 0; i < M; i++) {
        switch (command[i].num) {
            case 1:
                train[command[i].train] |= (1 << command[i].seat);
                break;
            case 2:
                train[command[i].train] &= ~(1 << command[i].seat);
                break;
            case 3:
                train[command[i].train] <<= 1;
                train[command[i].train] &= (1<<21-1);
                break;
            case 4:
                train[command[i].train] >>= 1;
                train[command[i].train] &= ~1; //남은 1 처리
                break;
        }
    }
    int ans = 0;
    map<double, int> m;
    for (int i = 1; i <= N; i++) {
        if (m[train[i]] == 0) {
            m[train[i]]++;
            ans++;
        }
    }
    cout << ans << '\n';
}
*/
