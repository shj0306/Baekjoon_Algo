/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int> ans;

int main() {
    int g;
    cin >> g;

    int weight = 1, cur_weight = 1, diff = 0;
    while(true) {
        if (diff < g) {
            ++cur_weight;
            diff = cur_weight * cur_weight - weight * weight;
        }else {
            if (diff == g) ans.push_back(cur_weight);
            if (cur_weight - weight == 1) break;
            ++weight;
            diff = cur_weight * cur_weight - weight * weight;
        }
    }

    if (ans.empty()) cout << -1 << '\n';
    else {
        sort(all(ans));
        for(auto &val : ans) cout << val << '\n';
    }
}*/
