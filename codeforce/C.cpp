/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int max_mini;
        vector<int> v(n);
        for (auto& it : v) cin >> it;

        sort(v.begin(), v.end());

        max_mini = v[0];

        for (int j = 0; j < v.size() - 1; j++)
            max_mini = max(max_mini, v[j+1] - v[j]);
        cout << max_mini <<"\n";
        while (!v.empty()) {
            v.pop_back();
        }
    }
}*/
