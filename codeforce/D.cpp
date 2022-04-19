/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int t;
vector<pair<int, char>> v;

bool cmp(pair<int,char> p1, pair<int,char> p2) {
    if (p1.second != p2.second) return p1.second < p2.second;
    return p1.first < p2.first;
}

int main() {
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n; //배열 길이
        v.resize(n + 1);
        for (int j = 1; j <= n; j++) {
            int num;
            cin >> num;
            v[j].first = num;
        }

        for (int j = 1; j <= n; j++) {
            char c;
            cin >> c;
            v[j].second = c;
        }

        int cnt = 0;
        sort(v.begin(), v.end(), cmp);

        for (int j = 1; j <= n; j++) {
            int num = v[j].first;
            char color = v[j].second;

            if (color == 'B') {
                if (num >= j) cnt++;
            } else {
                if (num <= j) cnt++;
            }
        }

        if (cnt == n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

        while (!v.empty()) {
            v.pop_back();
        }
    }
}*/
