/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int answer = 0;
    vector<pair<int,int>> v(12);
    for (int i = 1; i<=11; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(begin(v), end(v));
    int time = 0;

    for (int i = 1; i <= 11; i++) {
        time += v[i].first;
        answer += (time + 20 * v[i].second);
    }
    cout << answer << '\n';
}*/
