#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, idx, indegree[501], T[501], dist[501];
vector<vector<int>> info;
string str, tmp;

int main() {
    fast_io;
    cin >> N;
    cin.ignore();
    info.resize(N+1);
    queue<int> q;

    for (int i = 1; i <= N; i++) {
        getline(cin, str);
        istringstream iss(str);
        idx = 0;

        while(getline(iss, tmp, ' ')) {
            int val = stoi(tmp);
            if (val == -1) break;
            if (idx == 0) T[i] = val;
            else {
                info[val].push_back(i);
                indegree[i]++;
            }
            idx++;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (indegree[i] == 0) {
            q.push(i);
            dist[i] = T[i];
        }
    }

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for (auto nxt : info[cur]) {

            dist[nxt] = max(dist[nxt], dist[cur] + T[nxt]);
            if (--indegree[nxt] == 0) {
                q.push(nxt);
            }
        }
    }

    for (int i = 1; i <= N; i++)
        cout << dist[i] << '\n';
}