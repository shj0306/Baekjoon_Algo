/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 123457;
struct INFO {
    char flag;
    int num;
};

int N, visited[MAX];
vector<vector<int>> tree;
vector<INFO> info;

long long rescue_sheep(int root) {
    long long sheep = 0;
    visited[root] = 1;
    for (auto &child : tree[root]) {
        if (!visited[child]) sheep += rescue_sheep(child);
    }
    if (info[root].flag == 'S') sheep += info[root].num;
    if (info[root].flag == 'W')
        (sheep <= info[root].num) ? sheep = 0 : sheep -= info[root].num;
    return sheep;
}

int main() {
    fast_io;
    cin >> N;
    tree = vector<vector<int>>(N+1);
    info = vector<INFO>(N+1);

    info[1] = {'R', 0};
    for (int i = 2; i <= N; i++) {
        char flag; int num, parent;
        cin >> flag >> num >> parent;
        info[i] = {flag, num};
        tree[parent].push_back(i);
    }

    cout << rescue_sheep(1) << '\n';

    return 0;
}*/
