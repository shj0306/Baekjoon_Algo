/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int n, m, ans = 0; //처음에 포함 되어 있던 수, 뽑아 내려 하는 수
    cin >> n >> m;
    list<int> arr;
    vector<int> pos(m);
    for (int i = 1; i <= n; i++) arr.push_back(i);
    for (int i = 0; i < m; i++) cin >> pos[i];

    while(!pos.empty()) {
        int val = pos.front(); int cnt = 0;
        for (auto it = arr.begin(); it != arr.end(); it++) {
            if (*it == val) break;
            cnt++;
        }
        if (cnt <= arr.size() - cnt) {
            ans += cnt;
            while(cnt--) {
                arr.push_back(arr.front());
                arr.pop_front();
            }
        }else {
            int tmp = arr.size() - cnt;
            ans += tmp;
            while(tmp--) {
                arr.push_front(arr.back());
                arr.pop_back();
            }
        }
        arr.remove(val);
        pos.erase(begin(pos));
    }
    cout << ans << '\n';
}*/
