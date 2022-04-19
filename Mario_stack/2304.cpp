/*
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2) {
    return p1.first < p2.first;
}

int main() {
    int n, ans; stack<int> stk1, stk2;
    cin >> n;
    vector<pair<int,int>> pos(n);
    for (int i = 0; i < n; i++) cin >> pos[i].first >> pos[i].second;

    sort(begin(pos), end(pos), cmp);

    for (int i = 0; i < n; i++) {
        if (stk1.empty() || pos[stk1.top()].second < pos[i].second) {
            stk1.push(i);
        }
    }
    for (int i = n-1; i >= 0; i--) {
        if (stk2.empty() || pos[stk2.top()].second < pos[i].second) {
            stk2.push(i);
        }
    }
    ans = (pos[stk2.top()].first+1 - pos[stk1.top()].first) * pos[stk1.top()].second;
    while(stk1.size() != 1) {
        int loc = pos[stk1.top()].first;
        stk1.pop();
        ans += (loc - pos[stk1.top()].first) * pos[stk1.top()].second;
    }

    while(stk2.size() != 1) {
        int loc = pos[stk2.top()].first;
        int height = pos[stk2.top()].second;
        stk2.pop();
        ans += (pos[stk2.top()].first - loc) * pos[stk2.top()].second;
    }
    cout << ans << '\n';
}
//hint
*/
/*
 * 왼쪽에서 오른쪽으로 한번 훑고 오른쪽에서 왼쪽으로 한번 더 훑은 뒤
 * 직전 기둥과의 거리 * 직전 기둥의 높이를 계속 더해준다.
 * 마지막으로 가장 큰 높이의 기둥중 가장 왼쪽과 오른쪽 사이의 거리 * 높이를 더해준다.
 */
