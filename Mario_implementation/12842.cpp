/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, s, m;
    int final_num = 0;
    cin >> n >> s;
    cin >> m;
    vector<pii> eat(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> eat[i].second;
        eat[i].first = i;
    }
    // 여러 사람이 동시에 소보루를 집는다면 번호가 작은 사람이 먼저 잡는다
    int cnt = 0; int time = 0;
    while (cnt < n - s) {
        for (int i = 1; i <= m; i++) {
            if (time % eat[i].second == 0) {
                cnt++;
                if (cnt >= n - s) {
                    final_num = i;
                    break;
                }
            }
        }
        time++;
    }
    cout << final_num << '\n';
}*/
