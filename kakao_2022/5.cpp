#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> tree;
int ans = 1, N, val[20], visited[1<<17];

void dfs(int state) {

    if (visited[state]) return;
    visited[state] = 1;

    int wolf = 0, num = 0;
    for (int i = 0; i < N; i++) {
        if (state & (1 << i)) {
            num++;
            wolf+=val[i];
        }
    }

    if (wolf * 2 >= num) return;

    ans = max(ans, num - wolf);

    for (int i = 0; i < N; i++) {
        if (state & (1 << i)) {
            for (auto ch : tree[i]) {
                dfs(state | (1<<ch));
            }
        }
    }
}

int solution(vector<int> info, vector<vector<int>> edges) {
    N = info.size();
    tree.resize(N);

    for (int i = 0; i < N; i++) val[i] = info[i];

    for (auto &edge : edges) {
        tree[edge[0]].push_back(edge[1]);
    }

    dfs(1);

    return ans;
}

int main() {
    int answer = solution({0,0,1,1,1,0,1,0,1,0,1,1},  {{0,1},{1,2},{1,4},{0,8},{8,7},{9,10},{9,11},{4,3},{6,5},{4,6},{8,9}});
    cout << answer;
}