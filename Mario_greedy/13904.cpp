#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, d, w, ans, check[1001];
vector<pii> hw;

int main() {
    fast_io;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> d >> w;
        hw.emplace_back(w, d);
    }
    sort(all(hw), greater<>());

    for (int i = 0; i < N; i++) {
        auto [val, dday] = hw[i];
        for (int j = dday; j >= 1; j--) {
            if (check[j]) continue;
            check[j] = true;
            ans += val;
            break;
        }
    }
    cout << ans;
}
/*
 * 점수가 가장 큰 과제부터 본다.
 * N개의 날짜중 이 과제를 처리할 수 있는 날들 중 가장 늦은 날로 정해준다.
 * 그게 안되면 포기한다.
 * 4 60
 * 2 50
 * 4 40
 * 3 30
 * 1 20
 * 4 10
 * 6 5
 */