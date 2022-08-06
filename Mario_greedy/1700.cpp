#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, K, num, ans, schedule[101];

int main() {
    fast_io;
    cin >> N >> K;
    set<int> mt;

    for (int i = 1; i <= K; i++)
        cin >> schedule[i];

    for (int i = 1; i <= K; i++) {
        num = schedule[i];
        // 해당 용품이 코드에 꽂혀있다면
        if (mt.find(num) != mt.end()) continue;
        // 해당 용품이 코드에 꽂혀있지 않지만, 구멍이 남은 경우
        else if (mt.size() < N) mt.insert(num);
        // 코드에 꽂혀 있지도 않고 구멍이 남아 있지도 않은 경우 (여기가 핵심)
        else {
            int max_idx = -1, swap_num = -1;
            for (auto it = mt.begin(); it != mt.end(); it++) {
                int tmp_idx = K+1;
                for (int j = i + 1; j <= K; j++) {
                    if (*it == schedule[j]) {
                        tmp_idx = j;
                        break;
                    }
                }
                if (tmp_idx != -1) {
                    if (max_idx < tmp_idx) {
                        max_idx = tmp_idx;
                        swap_num = *it;
                    }
                }
            }
            ans++;
            mt.insert(num);
            mt.erase(swap_num);
        }
    }

    cout << ans;
}