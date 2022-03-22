/*
#include <bits/stdc++.h>
using namespace std;
int n, t, g;
int dist[100000];
queue<int> q;

int bfs(int start) {
    q.push(start);
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 0; i < 2; i++) {
            int next = cur;
            if (!i) next++; //button A
            if (i) { //button B
                next *= 2;
                if (next > 99999) continue;
                string temp = to_string(next);
                temp[0]--;
                if (temp[0]-'0' < 0) next = 0;
                else if (temp[0]-'0') next = stoi(temp);
                else {
                    next = 0;
                    for (int ii = 0; ii < temp.length(); ii++) {
                        if (temp[ii] != 0) {
                            next = stoi(temp.substr(ii, temp.length() - ii));
                            break;
                        }
                    }
                }
            }
            if (next <= 99999 && !dist[next] && next != start) {
                q.push(next);
                dist[next] = dist[cur] + 1;
                if (dist[next] > t) return -1;
                if (next == g) return dist[next];
            }
        }
    }
    return -1;
}

int main() {
    cin >> n >> t >> g;
    if (n == g) cout << 0 << '\n';
    else {
        int ans = bfs(n);
        if (ans == -1) cout << "ANG" << '\n';
        else cout << ans << '\n';
    }
    return 0;
}*/
