/*
#include <bits/stdc++.h>

using namespace std;
int a, b;
int visited[10000];
void bfs() {
    queue<pair<int,string>> q;
    q.push({a, ""});
    visited[a] = 1;

    while(!q.empty()) {
        int cur_num = q.front().first;
        string cur_op = q.front().second;
        q.pop();

        if (cur_num == b) {
            cout << cur_op << '\n';
            return;
        }
        int d,s,l,r,tmp;
        d = (cur_num * 2) % 10000;
        if (!visited[d]) {
            visited[d] = 1;
            q.push({d, cur_op+'D'});
        }
        s = cur_num-1 < 0 ? 9999 : cur_num-1;
        if (!visited[s]) {
            visited[s] = 1;
            q.push({s, cur_op+"S"});
        }

        l = (cur_num % 1000) * 10 + (cur_num / 1000);
        if (!visited[l]) {
            visited[l] = 1;
            q.push({l, cur_op+"L"});
        }

        r = cur_num / 10 + (cur_num % 10) * 1000;
        if (!visited[r]) {
            visited[r] = 1;
            q.push({r, cur_op+"R"});
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        memset(visited, 0, sizeof(visited));
        bfs();
    }
    return 0;
}
 //https://donggoolosori.github.io/2020/10/05/boj-9019/참고
*/
