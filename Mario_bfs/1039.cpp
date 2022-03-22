/*
#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;

int n, k;
vector<int> ans;
int visited[MAX][10];

void bfs() {
    queue<pair<int,string>> q;
    q.push({0, to_string(n)});
    visited[n][0] = 1;
    while(!q.empty()) {
        int cnt = q.front().first;
        string num = q.front().second;
        q.pop();
        if (cnt == k) {
            ans.push_back(stoi(num));
            continue;
        }
        for (int i = 0; i < num.length(); i++) {
            for (int j = i + 1; j < num.length(); j++) {
                string temp = num;
                if (i == 0 && temp[j] == '0') continue;
                else if (i == 0 && temp[j] != '0') {
                    swap(temp[i], temp[j]);
                }else if (i != 0) {
                    swap(temp[i], temp[j]);
                }
                if (!visited[stoi(temp)][cnt+1]) {
                    visited[stoi(temp)][cnt+1] = 1;
                    q.push({cnt+1, temp});
                }
            }
        }
    }
}
int main() {
    cin >> n >> k;
    int max_val = -1;
    bfs();
    for (auto &val : ans) {
        max_val = max(max_val, val);
    }
    cout << max_val << '\n';
    return 0;
}*/
