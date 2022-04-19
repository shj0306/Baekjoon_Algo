/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
int t;

*/
/*
 * 핵심 : 각 i번째 접시에 있는 고기와 생선 요리마다 먹어야 할 최소한의 양은 먼저 먹게하고
 * 거기서 남은 음식으로 그리디 알고리즘을 활용하여 해결한다.
 *//*

void solve() {
    int n, m;

    cin >> n >> m;
    ll diff = 0;
    ll min_a, min_b;
    vll leftover(n,0), eat_a(n,0), eat_b(n,0);
    vector<pll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        min_a = max(0LL, m - v[i].second);
        min_b = max(0LL, m - v[i].first);
        v[i].first -= min_a;
        v[i].second -= min_b;
        eat_a[i] = min_a;
        eat_b[i] = min_b;
        diff += v[i].first - v[i].second;
        leftover[i] = m - min_a - min_b;
    }

    for (int i = 0; i < n; i++) {
        if (diff > 0) { //a가 b보다 더 많이 남았다.
            ll extra = min(diff, leftover[i]); //현재 차와 더 먹어야 하는 음식 양 중 더 작은 쪽을 선택
            eat_a[i] += extra; //그만큼 a를 더 먹는다.
            diff -= extra;
            leftover[i] -= extra;
        }else { //b가 더 많이 남은 경우
            ll extra = min(abs(diff), leftover[i]);
            eat_b[i] += extra;
            diff += extra;
            leftover[i] -= extra;
        }
        if (leftover[i] > 0) { //i번째 접시에서 아직 먹어야 할 양이 남은 경우
            eat_a[i] += (leftover[i]) / 2;
            eat_b[i] += (leftover[i] + 1) / 2;
            diff += leftover[i] % 2;
        }
    }
    cout << abs(diff) << "\n";
    for (int i = 0; i < n; i++) {
        cout << eat_a[i] << " " << eat_b[i] << '\n';
    }
}

int main() {
    cin >> t;
    while (t--) {
        solve();
    }
}*/
