/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int l, n; //막대 길이, 개미 수
typedef pair<int, int> pii;
bool cmp(int a, int b) {
    return a > b;
}
int fast_time(vector<pii> &ant) {
    int time = 0;
    vector<int> left, right;
    for (auto &i: ant) {
        if (i.first <= l / 2) {
            left.push_back(i.first);
        } else right.push_back(i.first);
    }
    if (left.empty()) {
        sort(begin(right), end(right));
        return l - right[0];
    }
    if (right.empty()) {
        sort(begin(left), end(left), cmp);
        return left[0];
    }
    sort(begin(left), end(left), cmp);
    sort(begin(right), end(right));
    time += left[0];
    right[0] += left[0];
    time += (l - right[0] > 0) ? l - right[0] : 0;
    return time;
}
int slow_time(vector<pii> &ant) {
    vector<pii> temp = ant;
    int time = (temp[0].first <= l / 2) ? l-temp[0].first : temp[0].first;
    for (int i = 1; i < temp.size(); i++) {
        int t;
        if (temp[i].first <= l / 2) t = l-temp[i].first;
        else t = temp[i].first;
        if (time < t) time = t;
    }
    return time;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> l >> n;
        vector<pii> ant(n);
        for (int i = 0; i < n; i++)
            cin >> ant[i].first;
        int best_ans = fast_time(ant);
        int worst_ans = slow_time(ant);
        cout << best_ans << ' ' << worst_ans << '\n';
    }
}*/
