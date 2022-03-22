/*
#include <bits/stdc++.h>

using namespace std;

string start;
const string goal = "123456780";
set<string> visited;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int bfs() {
    queue<pair<int, string>> q;
    q.push({0, start});
    visited.insert(start);
    while (!q.empty()) {
        int cnt = q.front().first;
        string cur = q.front().second;
        if (cur == goal) return cnt;
        q.pop();
        int zero = cur.find('0');
        int x = zero / 3;
        int y = zero % 3;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3) {
                string temp = cur;
                swap(temp[x*3+y], temp[nx*3+ny]);
                if (visited.find(temp) == visited.end()) {
                    visited.insert(temp);
                    q.push({cnt+1,temp});
                }
            }
        }
    }
    return -1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    for (int i = 0; i < 9; i++) {
        int num; cin >> num;
        start += to_string(num);
    }
    cout << bfs() << '\n';
    return 0;
}*/
